#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "SCAnimNotify.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "ThrowObjectNotify.generated.h"

UCLASS(CollapseCategories)
class SIFU_API UThrowObjectNotify : public USCAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_vRotationAxisWhileFlying;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fRotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fRandomRangeForRotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bUseRandomRotationAxisWhileFlying;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bInvertAxisOnMirror;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bUseThrowPivot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bForceThrowableOrientationAtStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator m_RotationOffsetAtStart;
    
public:
    UThrowObjectNotify();
};

