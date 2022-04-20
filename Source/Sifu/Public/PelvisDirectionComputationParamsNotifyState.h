#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotifyState
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "PelvisDirectionComputationParams.h"
#include "PelvisDirectionComputationParamsNotifyState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UPelvisDirectionComputationParamsNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FPelvisDirectionComputationParams m_Params;
    
public:
    UPelvisDirectionComputationParamsNotifyState();
};

