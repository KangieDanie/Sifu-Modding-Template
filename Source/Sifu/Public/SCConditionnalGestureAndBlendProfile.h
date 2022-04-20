#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCGestureAndBlendProfile
#include "SCGestureAndBlendProfile.h"
#include "EFidgetMirroringTypes.h"
#include "EQuadrantTypes.h"
#include "BaseActorConditionInstance.h"
#include "SCConditionnalGestureAndBlendProfile.generated.h"

USTRUCT(BlueprintType)
struct FSCConditionnalGestureAndBlendProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EFidgetMirroringTypes m_eMirrorWithQuadrantHandling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCGestureAndBlendProfile m_animContainer;
    
    UPROPERTY(VisibleAnywhere)
    EQuadrantTypes m_eQuadrant;
    
    UPROPERTY(EditAnywhere)
    TArray<FBaseActorConditionInstance> m_Conditions;
    
    SIFU_API FSCConditionnalGestureAndBlendProfile();
};

