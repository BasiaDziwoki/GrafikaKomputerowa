// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UserWidgetCross.generated.h"

/**
 * 
 */
UCLASS()
class PORTALGAME_API UUserWidgetCross : public UUserWidget
{
	GENERATED_BODY()

public: 
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* Cross;
};
