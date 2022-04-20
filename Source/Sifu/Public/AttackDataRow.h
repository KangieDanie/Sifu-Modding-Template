#pragma once
#include "CoreMinimal.h"
#include "BaseAttackDataRow.h"
#include "EQuadrantTypes.h"
#include "EAttackMirroringMethod.h"
#include "AttackDataRow.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct SIFU_API FAttackDataRow : public FBaseAttackDataRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimationAsset> m_Anim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bCanBeMirrored;
    
    UPROPERTY(EditAnywhere)
    EAttackMirroringMethod m_eMirroringMethod;
    
    UPROPERTY(EditAnywhere)
    float m_fMirrorUseNextFootMarkerThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EQuadrantTypes m_eStartQuadrant;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EQuadrantTypes m_eEndQuadrant;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float m_fMeasuredForwardMovement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fMovementRightLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bDirectRightMovementFollow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iLastBuildupFrame;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fHitFrame;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bStrikelessAttack;
    
    FAttackDataRow();
};

