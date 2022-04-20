#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyState.h"
//CROSS-MODULE INCLUDE: Engine EMovementMode
#include "MovementModeNotifyState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UMovementModeNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> m_eEnterMovementMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> m_eExitMovementMode;
    
    UMovementModeNotifyState();
};

