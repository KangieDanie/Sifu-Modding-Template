#pragma once
#include "CoreMinimal.h"
#include "HitActionLauncher.h"
#include "UOrderParamsClassInstance.h"
#include "OrderParamsHitActionLauncher.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UOrderParamsHitActionLauncher : public UHitActionLauncher {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FUOrderParamsClassInstance m_OrderParamsInstance;
    
    UPROPERTY(EditAnywhere)
    bool m_bApplyDamage;
    
    UPROPERTY(EditAnywhere)
    bool m_bNotifyHitted;
    
    UPROPERTY(EditAnywhere)
    bool m_bApplyFreezeFrame;
    
    UOrderParamsHitActionLauncher();
};

