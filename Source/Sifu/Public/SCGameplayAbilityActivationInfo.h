#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: GameplayAbilities GameplayAbilitySpecHandle
#include "GameplayAbilitySpec.h"
#include "SCGameplayAbilityActorInfo.h"
//CROSS-MODULE INCLUDE: GameplayAbilities GameplayAbilityActivationInfo
#include "GameplayAbilitySpec.h"
//CROSS-MODULE INCLUDE: GameplayAbilities GameplayEventData
#include "Abilities/GameplayAbilityTypes.h"
#include "SCGameplayAbilityActivationInfo.generated.h"

class AActor;
class UAbilityPayload;

USTRUCT(BlueprintType)
struct SIFU_API FSCGameplayAbilityActivationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGameplayAbilitySpecHandle m_Handle;
    
    UPROPERTY(BlueprintReadOnly)
    FSCGameplayAbilityActorInfo m_ActorInfos;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAbilityActivationInfo m_ActivationInfo;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayEventData m_EventData;
    
    UPROPERTY(BlueprintReadOnly)
    UAbilityPayload* m_Payload;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> m_Target;
    
    FSCGameplayAbilityActivationInfo();
};

