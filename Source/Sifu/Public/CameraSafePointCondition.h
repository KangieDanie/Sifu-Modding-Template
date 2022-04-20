#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Int32Range
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "CameraSafePointCondition.generated.h"

USTRUCT(BlueprintType)
struct FCameraSafePointCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bUseDeadZoneCountRange;
    
    UPROPERTY(EditAnywhere)
    FInt32Range m_iDeadZoneCountRange;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseDeadZoneAngleRange;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_fDeadZoneAngleRange;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseSafeZoneAngleRange;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_fSafeZoneAngleRange;
    
    SIFU_API FCameraSafePointCondition();
};

