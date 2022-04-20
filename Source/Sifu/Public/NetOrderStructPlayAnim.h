#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "EQuadrantTypes.h"
#include "WeaponAnimInfo.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "NetOrderStructPlayAnim.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FNetOrderStructPlayAnim : public FNetOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_AnimContainerToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWeaponAnimInfo m_weaponAnimInfoAssociated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bOverrideDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_OverrideDynamicCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bBlendPreviousSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fBlendPreviousSpeedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bOverrideDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fOverrideDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bInterruptAfterDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fInterruptDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bOverrideDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fOverrideDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIsOverrideDistanceAbsolute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bOverrideDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_vOverrideDirection;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bOverrideOrientation;
    
    UPROPERTY(BlueprintReadWrite)
    FVector m_vOverrideOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bOverridePlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fOverridePlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fFrozenPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIsInfinite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIsMovingOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseStartRatioOnNewLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bAllowMirroringOnWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EQuadrantTypes m_eForcedQuadrant;
    
    SIFU_API FNetOrderStructPlayAnim();
};

