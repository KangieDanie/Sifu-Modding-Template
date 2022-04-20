#pragma once
#include "CoreMinimal.h"
#include "EActionType.h"
#include "TargetResult.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTargetResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> m_Target;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 m_uiPriority;
    
    UPROPERTY(BlueprintReadOnly)
    EActionType m_eActionType;
    
    SIFU_API FTargetResult();
};

