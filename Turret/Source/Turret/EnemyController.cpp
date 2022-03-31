// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AEnemyController::AEnemyController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootBox = CreateDefaultSubobject<UBoxComponent>
		(TEXT("Root"));
		RootBox->SetGenerateOverlapEvents(true); // Not bGenerateoverlapEvents!
		RootBox->OnComponentBeginOverlap.AddDynamic
			(this, &AEnemyController::OnOverlap);
		RootComponent = RootBox;
}

// Called when the game starts or when spawned
void AEnemyController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	NewLocation.X += Direction.X * Speed * DeltaTime;
	NewLocation.Y += Direction.Y * Speed * DeltaTime;
	SetActorLocation(NewLocation);
}

void AEnemyController::OnOverlap
	(UPrimitiveComponent* OverlappedComponent, 
	AActor* OtherActor, UPrimitiveComponent* 
	OtherComponent, int32 OtherBodyIndex, bool 
	bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->GetName().Contains("Projectile"
		))
	{
		OtherActor->Destroy();
		this->Destroy();
	}
	else
	{
		UGameplayStatics::SetGamePaused(GetWorld(),
			true);
	}
}

