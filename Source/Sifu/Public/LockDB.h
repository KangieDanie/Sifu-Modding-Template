#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "RelationshipActionConditionArray.h"
#include "EMoveStatus.h"
#include "LockDB.generated.h"

class UCurveFloat;

UCLASS()
class SIFU_API ULockDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRelationshipActionConditionArray m_RelationshipBehaviours;
    
    UPROPERTY(EditAnywhere)
    EMoveStatus m_MoveStatusOutOfFightRange[6];
    
    UPROPERTY(EditAnywhere)
    EMoveStatus m_MoveStatusInFightRange[6];
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_MaxVerticalAngleCurve;
    
    UPROPERTY(EditAnywhere)
    bool m_bDebugMaxVerticalAngle;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_MaxZDiff;
    
    ULockDB();
};

