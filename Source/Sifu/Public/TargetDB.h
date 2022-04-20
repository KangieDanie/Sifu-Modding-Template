#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: Engine ECollisionChannel
//CROSS-MODULE INCLUDE: Engine CollisionResponseContainer
#include "EActionType.h"
#include "EMoveStatus.h"
#include "TargetDB.generated.h"

class UCurveFloat;
class UTargetSettingsDB;

UCLASS(BlueprintType)
class SIFU_API UTargetDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_eTargetVisibleCollisionChannel;
    
    UPROPERTY(EditAnywhere)
    uint32 m_uiFightingAiBehaviorMask;
    
    UPROPERTY(EditAnywhere)
    FCollisionResponseContainer m_TargetVisibleCollisionContainer;
    
    UPROPERTY(EditAnywhere)
    TArray<EActionType> m_PriorityWithoutTarget;
    
    UPROPERTY(EditAnywhere)
    TArray<EActionType> m_PriorityWithSameTarget;
    
    UPROPERTY(EditAnywhere)
    TArray<EActionType> m_PriorityWithDifferentTarget;
    
    UPROPERTY(EditAnywhere)
    uint8 m_aUseTargetingReaction[7];
    
    UPROPERTY(EditAnywhere)
    EMoveStatus m_MoveStatusOutOfFightRange[6];
    
    UPROPERTY(EditAnywhere)
    EMoveStatus m_MoveStatusInFightRange[6];
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_MaxZDiff;
    
    UPROPERTY(VisibleAnywhere)
    float m_fTargetMaxRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EActionType, TSubclassOf<UTargetSettingsDB>> m_Settings;
    
    UTargetDB();
};

