#pragma once
#include "CoreMinimal.h"
#include "EGuardType.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "GameplayTagContainer.h"
#include "AttackMemoryData.generated.h"

class AActor;
class AThrowableActor;

USTRUCT(BlueprintType)
struct FAttackMemoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> m_Instigator;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 m_uiOderId;
    
    UPROPERTY(BlueprintReadOnly)
    EGuardType m_eGuardType;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftClassPtr<AThrowableActor> m_ThrowableActorClass;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTagContainer m_AttackProperties;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_iComboID;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bHasHit;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bDodged;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bAvoided;
    
    SIFU_API FAttackMemoryData();
};

