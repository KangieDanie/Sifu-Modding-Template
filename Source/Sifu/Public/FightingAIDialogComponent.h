#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCDialogManagerPlugin SCDialogComponent
#include "SCDialogComponent.h"
#include "FightingAIDialogComponent.generated.h"

UCLASS()
class SIFU_API UFightingAIDialogComponent : public USCDialogComponent {
    GENERATED_BODY()
public:
    UFightingAIDialogComponent();
};

