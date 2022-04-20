#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "CameraTransitionEventStruct.h"
#include "EUpdateAngleMode.h"
#include "CameraTransitionInfo.generated.h"

class UCurveFloat;
class UCameraTransitionModule;

UCLASS()
class SIFU_API UCameraTransitionInfo : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fDuration;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_Curve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CurveForAngle;
    
    UPROPERTY(EditAnywhere)
    bool m_bFreezeUnderneathTransition;
    
    UPROPERTY(EditAnywhere)
    bool m_bWantUseAngleFromStartNode;
    
    UPROPERTY(EditAnywhere)
    EUpdateAngleMode m_eUpdateAngleMode;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UCameraTransitionModule>> m_Modules;
    
    UPROPERTY(EditAnywhere)
    TArray<FCameraTransitionEventStruct> m_events;
    
public:
    UCameraTransitionInfo();
};

