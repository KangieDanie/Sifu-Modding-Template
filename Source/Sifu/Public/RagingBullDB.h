#pragma once
#include "CoreMinimal.h"
#include "HitBox.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "RagingBullAnimContainer.h"
#include "RagingBullDB.generated.h"

UCLASS()
class SIFU_API URagingBullDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fMaxAngularSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fWantedSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fWantedTravelDistance;
    
    UPROPERTY(EditAnywhere)
    bool m_bStopOnTargetMissed;
    
    UPROPERTY(EditAnywhere)
    float m_fMissedTravelDistance;
    
    UPROPERTY(EditAnywhere)
    FHitBox m_HitBox;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_wallSplashFrontAnim;
    
    UPROPERTY(EditAnywhere)
    FRagingBullAnimContainer m_entryAnimContainer;
    
    UPROPERTY(EditAnywhere)
    int32 m_iAnimBuildUpFrames;
    
    UPROPERTY(EditAnywhere)
    int32 m_iWantedBuildupFrames;
    
    UPROPERTY(EditAnywhere)
    FRagingBullAnimContainer m_loopAnimContainer;
    
    UPROPERTY(EditAnywhere)
    float m_fDistanceToSwitchAnimation;
    
    UPROPERTY(EditAnywhere)
    FRagingBullAnimContainer m_secondLoopAnimContainer;
    
    UPROPERTY(EditAnywhere)
    FRagingBullAnimContainer m_exitAnimContainer;
    
    URagingBullDB();
};

