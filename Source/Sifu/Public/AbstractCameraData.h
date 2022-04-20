#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "CameraDataModifierWithBehavior.h"
#include "CameraTransitionInfoPairStruct.h"
#include "AbstractCameraData.generated.h"

class UCameraTransitionInfo;

UCLASS(Abstract)
class SIFU_API UAbstractCameraData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UCameraTransitionInfo* m_DefaultCameraTransition;
    
    UPROPERTY(EditAnywhere)
    TArray<FCameraTransitionInfoPairStruct> m_CameraTransitionDB;
    
    UPROPERTY(EditAnywhere)
    UCameraTransitionInfo* m_OutCameraTransition;
    
    UPROPERTY(EditAnywhere)
    TArray<FCameraDataModifierWithBehavior> m_Modifiers;
    
    UFUNCTION()
    void ClearTransitions();
    
public:
    UAbstractCameraData();
};

