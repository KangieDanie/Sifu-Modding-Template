#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.generated.h"

class UAbilityPayload;
class AActor;

USTRUCT(BlueprintType)
struct SIFU_API FNetOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<AActor> m_TargetActor;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<UAbilityPayload> m_Payload;
    
    FNetOrderStruct();
};

