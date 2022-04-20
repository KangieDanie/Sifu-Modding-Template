#pragma once
#include "CoreMinimal.h"
#include "EWeaponAnimType.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "AnimInfo.generated.h"

class UAnimSequence;
class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct FAnimInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool m_bActionInProgress;
    
    UPROPERTY(BlueprintReadOnly)
    EWeaponAnimType m_eWeaponAnimType;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimSequence* m_AnimToPlay;
    
    UPROPERTY(BlueprintReadOnly)
    UBlendSpaceBase* m_BlendSpaceToPlay;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_vBlendSpaceValue;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fPlayRate;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bMirror;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bWeaponInFakieAtStart;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fStartRatio;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bLoop;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fBlendSpaceAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fOwnerVelocityLength;
    
    SIFU_API FAnimInfo();
};

