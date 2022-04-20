#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "TraversalTypeSettings.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "TraversalInputBehavior.h"
#include "HitBox.h"
#include "ETraversalEntryType.h"
#include "TraversalDB.generated.h"

class UTraversalAnimRequest;

UCLASS(BlueprintType)
class UTraversalDB : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTraversalAnimRequest> m_TraversalAnimRequestBlueprint;
    
    UPROPERTY(EditAnywhere)
    int32 m_iNbOfFrameToUseAtEndOfPreExitForMeanFallingVelocity;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxTrackingAngleFromStartDegree;
    
    UPROPERTY(EditAnywhere)
    float m_RaycastLengthBySpeedState[4];
    
    UPROPERTY(EditAnywhere)
    float m_fPreExitPhaseSnapRaycastOffsetAbove;
    
    UPROPERTY(EditAnywhere)
    float m_fPreExitPhaseSnapRaycastOffsetBelow;
    
    UPROPERTY(EditAnywhere)
    FVector m_vBoxExtentsToSnapToNavmesh;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxTraversalDepth;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxTraversalHeight;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxTraversalHeightClimb;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxDepthToConsideredAsFenceWhenClimbingUp;
    
    UPROPERTY(EditAnywhere)
    float m_fMinDurationBeforeEndOfEntrySnap;
    
    UPROPERTY(EditAnywhere)
    float m_fMaximumSpeedStretchUp;
    
    UPROPERTY(EditAnywhere)
    FTraversalInputBehavior m_InputBehaviorBySpeed[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_uiAllowedEntryTypes;
    
    UPROPERTY(EditAnywhere)
    FHitBox m_HitBox;
    
    UPROPERTY(EditAnywhere)
    float m_fEvasionMaxDistBetweenInstigatorAndTarget;
    
    UPROPERTY(EditAnywhere)
    float m_fEvasionDetectionDistance;
    
protected:
    UPROPERTY(EditAnywhere)
    FTraversalTypeSettings m_DefaultSettings;
    
    UPROPERTY(EditAnywhere)
    TMap<ETraversalEntryType, FTraversalTypeSettings> m_CustomSettings;
    
public:
    UTraversalDB();
};

