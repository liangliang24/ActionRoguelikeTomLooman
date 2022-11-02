// Fill out your copyright notice in the Description page of Project Settings.

#include "ActionRougelike/Public/PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    SpringArmComp = CreateDefaultSubobject<USpringArmComponent>("SpringArmComp");
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->SetupAttachment(RootComponent);
	
	CameraComp = CreateDefaultSubobject<UCameraComponent>("CameraComp");
	CameraComp->SetupAttachment(SpringArmComp);

	ActionComp = CreateDefaultSubobject<UActionComponent>("ActionComp");
	
	InteractionComp = CreateDefaultSubobject<UInteractionComponent>("InteractionComp");
	bUseControllerRotationYaw = false;

	AttributeComp = CreateDefaultSubobject<UAttributeComponent>("AttributeComp");
	GetCharacterMovement()->bOrientRotationToMovement = true;

	AudioComp = CreateDefaultSubobject<UAudioComponent>("AudioComp");
	AudioComp->SetupAttachment(RootComponent);
	AudioComp->bAutoActivate = false;

	PS = CreateDefaultSubobject<AMyPlayerState>("PS");
	
	PS = Cast<AMyPlayerState>(GetPlayerState());
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	PS = Cast<AMyPlayerState>(GetPlayerState());SetPlayerState(PS);
	AttributeComp->SetCredit(PS->Credits);
}

void APlayerCharacter::MoveForward(float value)
{
	FRotator ControlRot = GetControlRotation();
	//因为这一移动是水平方向的所以不需要pitch和yaw，为了防止向下旋转的诡异现象所以设为0
	ControlRot.Pitch = 0.0f;
	ControlRot.Roll = 0.0f;
	AddMovementInput(ControlRot.Vector(),value);
}

void APlayerCharacter::SpawnProjectile(TSubclassOf<AActor> ClassToSpawn)
{
	if (ensure(ClassToSpawn))
	{
		FVector HandLocation = GetMesh()->GetSocketLocation("Muzzle_01");
		UGameplayStatics::SpawnEmitterAtLocation(this, AttackParticle, HandLocation, GetControlRotation(),false);
		

		//获取角色的骨架指定具体的生成位置
		//FVector HandLocation = GetMesh()->GetSocketLocation("Muzzle_01");
         
		//我们需要获得生成子弹的rotation和location
		//从角色生成子弹发射向我们看向的地方
		FTransform SpawnTM = FTransform(GetControlRotation(), HandLocation);
		FActorSpawnParameters SpawnParams;
		//指定子弹的生成规则
		//比如默认生成的规则是生成子弹的时候会检查生成的地点是否由物体重叠，
		//如果是就会向其它地方移动一点点去生成
		//但是我们需要在角色中生成子弹发射出去所以需要改变这一个规则
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		SpawnParams.Instigator = this;
        
		FHitResult Hit;
		FVector Start = CameraComp->GetComponentLocation();
		FVector End = Start + 20000.0f * CameraComp->GetComponentRotation().Vector();
		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(this);
		if(GetWorld()->LineTraceSingleByChannel(Hit,Start,End,ECollisionChannel::ECC_Visibility,QueryParams))
		{
			FRotator ShootTo = (Hit.ImpactPoint-HandLocation).Rotation();
			SpawnTM = FTransform(ShootTo,HandLocation);
		}
		//在这个函数中我们需要生成我们的子弹,所以我们需要先获取我们所在的世界（关卡）
		//这里用的是模板编程，<>内指定我们需要生成Actor的类型
		//第一个参数为传递我们想要生成的类
		//第二个参数是一个结构体，按照比例进行位置和方向的转换
		//第三个参数是FActorSpawnParameters，里面包含了很多可选参数，包括生成的发起者是谁等等
		GetWorld()->SpawnActor<AActor>(ClassToSpawn, SpawnTM, SpawnParams);
	}
}

void APlayerCharacter::MoveRight(float value)
{
	FRotator ControlRot = GetControlRotation();
	//因为这一移动是水平方向的所以不需要pitch和yaw，为了防止向下旋转的诡异现象所以设为0
	ControlRot.Pitch = 0.0f;
	ControlRot.Roll = 0.0f;
	AddMovementInput(UKismetMathLibrary::GetRightVector(ControlRot),value);
}

void APlayerCharacter::PrimaryAttack()
{
	ActionComp->StartActionByName(this, "PrimaryAttack");AudioComp->Activate(true);
	/*//播放动画，传入要播放的动画即可
	PlayAnimMontage(AttackAnim);

	//第一个参数是一个定时器句柄，如果需要在这个定时器开始之前清除它只需要清楚句柄即可。
    //第二个参数是使用这个定时器的类。
    //第三个参数为触发的函数。
    //第四个参数是定时器的时间，即过了这个时间之后再触发那个函数
    GetWorldTimerManager().SetTimer(TimerHandle_PrimaryAttack, this, &APlayerCharacter::PrimaryAttack_TimeElased, 0.17f);

	//当角色死亡的时候调用就可以马上停止攻击
	//GetWorldTimerManager().ClearTimer(TimerHandle_PrimaryAttack);*/
}

void APlayerCharacter::PrimaryAttack_TimeElased()
{
	
	SpawnProjectile(ProjectileClass);
}

void APlayerCharacter::Dash_TimeElased()
{
	SpawnProjectile(DashProjectile);
}

void APlayerCharacter::BlackHole_TimeElased()
{
	SpawnProjectile(BlackHoleProjectile);
}


void APlayerCharacter::PrimaryInteract()
{
	InteractionComp->PrimaryInteract();
}

void APlayerCharacter::SprintStart()
{
	ActionComp->StartActionByName(this,"Sprint");
}

void APlayerCharacter::SprintStop()
{
	ActionComp->StopActionByName(this,"Sprint");
}

void APlayerCharacter::Dash()
{
	PlayAnimMontage(AttackAnim);
	GetWorldTimerManager().SetTimer(TimerHandle_PrimaryAttack, this, &APlayerCharacter::Dash_TimeElased, 0.17f);
}

void APlayerCharacter::BlackHole()
{
	PlayAnimMontage(AttackAnim);
	GetWorldTimerManager().SetTimer(TimerHandle_PrimaryAttack, this, &APlayerCharacter::BlackHole_TimeElased, 0.17f);
}

void APlayerCharacter::OnHealthChanged(AActor* InstigatorActor, UAttributeComponent* OwningComp, float NewHeawlth,
	float Delta)
{
	GetMesh()->SetScalarParameterValueOnMaterials("TimeToHit", GetWorld()->TimeSeconds);
	if(!AttributeComp->IsAlive())
	{
		PlayAnimMontage(DeathAnim);
		DisableInput(Cast<APlayerController>(GetController()));
		//GetMesh()->SetAllBodiesSimulatePhysics(true);
		//GetMesh()->SetCollisionProfileName("Ragdoll");
	}
	
}

void APlayerCharacter::OnCreditChanged(UAttributeComponent* OwningComp, float NewCredit, float Delta)
{
	PS = Cast<AMyPlayerState>(GetPlayerState());
	PS->Credits = NewCredit;
}


void APlayerCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	AttributeComp->OnHealthChanged.AddDynamic(this,&APlayerCharacter::OnHealthChanged);
	AttributeComp->OnCreditChanged.AddDynamic(this,&APlayerCharacter::OnCreditChanged);
}

FVector APlayerCharacter::GetPawnViewLocation() const
{
	return CameraComp->GetComponentLocation();
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	//第一个值为指定一个绑定的名称,第二个为使用这个值的角色,第三个值为触发的函数
	PlayerInputComponent->BindAxis("MoveForward",this,&APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight",this,&APlayerCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn",this,&APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp",this,&APawn::AddControllerPitchInput);

	//第一个参数是绑定的动作的名称，第二个参数是触发的条件（按下或松开或其他）
	//第三个参数是使用这个动作的角色，第四个参数是触发的函数
	PlayerInputComponent->BindAction("PrimaryAttack",IE_Pressed,this,&APlayerCharacter::PrimaryAttack);

	PlayerInputComponent->BindAction("PrimaryInteract",IE_Pressed,this,&APlayerCharacter::PrimaryInteract);

	PlayerInputComponent->BindAction("Dash",IE_Pressed,this,&APlayerCharacter::Dash);

	PlayerInputComponent->BindAction("BlackHole",IE_Pressed,this,&APlayerCharacter::BlackHole);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);

	PlayerInputComponent->BindAction("Sprint",IE_Pressed,this,&APlayerCharacter::SprintStart);
	PlayerInputComponent->BindAction("Sprint",IE_Released,this,&APlayerCharacter::SprintStop);
}

void APlayerCharacter::HealSelf(float amount)
{
	AttributeComp->ApplyHealthChange(amount,this,this);
}
 
