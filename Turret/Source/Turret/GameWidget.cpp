// Fill out your copyright notice in the Description page of Project Settings.


#include "GameWidget.h"

void UGameWidget::Load()
{
	const FName TextBlockName = FName(TEXT("ScorerTextBlock"));

	if (ScoreText == nullptr)
	{
		ScoreText = (UTextBlock*)(WidgetTree->FindWidget
			(TextBlockName));
	}
}

void UGameWidget::SetText(int score, int health)
{
	if (ScoreText != nullptr)
	{
		ScoreText->SetText(FText::FromString(FString(TEXT("Score: "
		)) + FString::FromInt(score) + FString(TEXT("\nHealth:")) 
			+ FString::FromInt(health)));
	}
}

void UGameWidget::OnGameOver(int score)
{
	if (ScoreText != nullptr)
	{
		ScoreText->SetText(FText::FromString(FString(TEXT
		("Gameover!\nTotal score: ")) + FString::FromInt(score) +
		TEXT("\nPress R to restart")));
	}
}