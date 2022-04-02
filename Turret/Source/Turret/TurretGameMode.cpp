// Fill out your copyright notice in the Description page of Project Settings.

#include "TurretGameMode.h"
#include "EnemyController.h"
#include "Kismet/GameplayStatics.h"


void ATurretGameMode::BeginPlay()
{
	Super::BeginPlay();
}

void ATurretGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	GameTimer += DeltaSeconds;
	EnemyTimer -= DeltaSeconds;

	if (EnemyTimer <= 0.0f)
	{
		float difficultyPercentage = FMath::Min(GameTimer /
			TIME_TO_MINIMUM_INTERVAL, 1.0f);
		EnemyTimer = MAXIMUM_INTERVAL - (MAXIMUM_INTERVAL -
			MINIMUM_TO_INTERVAL) * difficultyPercentage;

		UWorld* World = GetWorld();
		if (World)
		{
			float distance = 900.0f;
			float randomAngle = FMath::RandRange(0.0f, 360.0f);

			//OG Code: FVector playerLocation = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)->GetActorLocation();
			FVector playerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()-> 
				GetActorLocation();

			FVector enemyLocation = playerLocation;

			enemyLocation.X += FMath::Cos(randomAngle * 3.14f /
				180.f) * distance;
			enemyLocation.Y += FMath::Sin(randomAngle * 3.14f /
				180.f) * distance;
			enemyLocation.Z = 210.f;

			AEnemyController* enemy = World->SpawnActor<
				AEnemyController>(EnemyBlueprint, enemyLocation,
				FRotator::ZeroRotator);
				enemy->Direction = (playerLocation - enemyLocation). // When you subtract two points you get a Vector. 
				GetSafeNormal();
		}
	}
}

void ATurretGameMode::ChangeScore(int value)
{
	Score += value;
}

void ATurretGameMode::ChangeHealth(int value)
{
	Health += value;

	if (Health <= 0)
	{
		this->OnGameOver();
	}
}

void ATurretGameMode::OnGameOver()
{
	// Must include UGameplayStatics Header to Work!
	UGameplayStatics::SetGamePaused(GetWorld(), true); 
}

void ATurretGameMode::OnRestart()
{

}

