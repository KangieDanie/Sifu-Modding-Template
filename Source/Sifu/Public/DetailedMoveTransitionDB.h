#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "DetailedMoveTransition.h"
#include "ETransitionGlobalType.h"
#include "EMoveStatus.h"
#include "DetailedMoveTransitionDB.generated.h"

UCLASS()
class SIFU_API UDetailedMoveTransitionDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FDetailedMoveTransition> m_TransitionList;
    
    UPROPERTY(EditAnywhere)
    TMap<ETransitionGlobalType, EMoveStatus> m_NeededMoveStatusMap;
    
    UDetailedMoveTransitionDB();
};

