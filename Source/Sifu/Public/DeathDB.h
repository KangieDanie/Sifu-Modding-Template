#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore InheritedDataAsset
#include "InheritedDataAsset.h"
#include "DeathStandupAnimations.h"
#include "DeathRadialImpulse.h"
#include "SCDeathAnimTypeEnum.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "DeathDB.generated.h"

class ULevelSequence;
class UAnimSequence;

UCLASS(BlueprintType)
class SIFU_API UDeathDB : public UInheritedDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bFallOnSlopes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDeathRadialImpulse m_RadialImpulse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FSCDeathAnimTypeEnum, UAnimSequence*> m_DeathAnims;
    
    UPROPERTY(EditAnywhere)
    FDeathStandupAnimations m_StandUpAnims;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_DownBeforeStandupAnim;
    
    UPROPERTY(EditAnywhere)
    float m_fKnockBackDistance[3];
    
    UPROPERTY(EditAnywhere)
    uint8 m_iNbFrameStuned[3];
    
    UPROPERTY(EditAnywhere)
    ULevelSequence* m_Sequence;
    
    UPROPERTY(EditAnywhere)
    float m_fDelayBeforeSequence;
    
    UPROPERTY(EditAnywhere)
    float m_fFloorCorrectionCoeff;
    
    UPROPERTY(EditAnywhere)
    float m_fCollisionsFreeRadius;
    
    UPROPERTY(EditAnywhere)
    bool m_bCameraTargetPelvis;
    
    UDeathDB();
};

