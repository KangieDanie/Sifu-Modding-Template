#pragma once
#include "CoreMinimal.h"
#include "SCDialogCondition.h"
#include "EOperationType.h"
#include "GameplayTagContainer.h"
#include "SCConversationRule.generated.h"

USTRUCT(BlueprintType)
struct SCDIALOGMANAGERPLUGIN_API FSCConversationRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIntendedResult;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCheckGameplayTag;
    
    UPROPERTY()
    FName Context;
    
    UPROPERTY()
    FName Key;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCDialogCondition DialogCondition;
    
    UPROPERTY()
    EOperationType Operation;
    
    UPROPERTY()
    FString Value;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName GameplayTagOwner;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag RequiredGameplayTag;
    
    FSCConversationRule();
};

