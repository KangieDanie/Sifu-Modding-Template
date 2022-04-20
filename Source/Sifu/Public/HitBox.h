#pragma once
#include "CoreMinimal.h"
#include "BaseHitBoxConditionInstance.h"
#include "EIKAnimTargetTypes.h"
#include "HitBoxMetaDataClassInstance.h"
//CROSS-MODULE INCLUDE: Engine DataTableRowHandle
#include "Engine/DataTable.h"

#include "FrameRange.h"
#include "EAttackTarget.h"
#include "EAttackMovementType.h"
#include "EAttackOrigin.h"
#include "HitboxDataRow.h"
#include "HitBox.generated.h"

class UBaseHitDetectionDB;

USTRUCT(BlueprintType)
struct SIFU_API FHitBox {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBaseHitBoxConditionInstance m_activationCondition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FHitBoxMetaDataClassInstance m_MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDataTableRowHandle m_HitRow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFrameRange m_FrameRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBaseHitDetectionDB* m_HitDetectionDB;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAttackTarget m_eHitTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAttackTarget m_eAltHitTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIKAnimTargetTypes m_eAimTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAttackMovementType m_eMovementType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAttackOrigin m_eOrigin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAttackOrigin m_eAvoidCustomOrigin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAttackTarget m_eAvoidCustomHitTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAttackMovementType m_eAvoidCustomMovementType;
    
    UPROPERTY(Transient)
    FHitboxDataRow m_CachedRow;
    
    FHitBox();
};

