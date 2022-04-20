#pragma once
#include "CoreMinimal.h"
#include "OrderServiceNotifyState.h"
//CROSS-MODULE INCLUDE: SCCore ESCRotationWay
#include "ESCRotationWay.h"
#include "RedirectOrderServiceNotifyState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API URedirectOrderServiceNotifyState : public UOrderServiceNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool m_bUseAnimRootMotion;
    
    UPROPERTY(EditAnywhere)
    ESCRotationWay m_eRootMotionRotWay;
    
public:
    URedirectOrderServiceNotifyState();
};

