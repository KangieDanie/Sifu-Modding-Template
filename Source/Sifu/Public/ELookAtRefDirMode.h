#pragma once
#include "CoreMinimal.h"
#include "ELookAtRefDirMode.generated.h"

UENUM(BlueprintType)
enum class ELookAtRefDirMode : uint8 {
    ActorForward,
    HeadBone,
    AnimDir,
    EndAnimDir,
    Default,
};

