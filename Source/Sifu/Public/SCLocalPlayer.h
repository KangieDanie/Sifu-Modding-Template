#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine LocalPlayer
#include "SCLocalPlayer.generated.h"

UCLASS(NonTransient)
class SIFU_API USCLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    USCLocalPlayer();
};

