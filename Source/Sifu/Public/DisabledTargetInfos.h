#pragma once
#include "CoreMinimal.h"
#include "EActionType.h"
#include "DisabledTargetInfos.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FDisabledTargetInfos {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EActionType m_eActionType;
    
    UPROPERTY(EditAnywhere)
    bool m_bTargettableWhenAlone;
    
    FDisabledTargetInfos();
};

