// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TurretGameMode.generated.h"


/**
 * 
 */
UCLASS()
class TURRET_API ATurretGameMode : public AGameMode
{
	GENERATED_BODY()

	float MINIMUM_TO_INTERVAL = 0.5f;
	float MAXIMUM_INTERVAL = 2.0f;
	float TIME_TO_MINIMUM_INTERVAL = 30.0f;

protected:

	int Health = 100;
	int Score = 0;

public:

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	void ChangeScore(int value);
	void ChangeHealth(int value);
	void OnGameOver();
	void OnRestart();

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<class AEnemyController> EnemyBlueprint;

	float EnemyTimer;
	float GameTimer;
};
