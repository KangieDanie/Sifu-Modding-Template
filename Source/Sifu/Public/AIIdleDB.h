#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "IdleAnimAndTransition.h"
//CROSS-MODULE INCLUDE: SCCore ESCRotationWay
#include "ESCRotationWay.h"
//CROSS-MODULE INCLUDE: SCCore ELookAtApplyMode
#include "ELookAtApplyMode.h"
#include "AIIdleDB.generated.h"

UCLASS(BlueprintType)
class SIFU_API UAIIdleDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIdleAnimAndTransition m_IdleAndExitAnimation;
    
    UPROPERTY(VisibleAnywhere)
    ESCRotationWay m_eSouthRotationWay;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanPlayFidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELookAtApplyMode m_eLookAtApplyMode;
    
    UAIIdleDB();
};

