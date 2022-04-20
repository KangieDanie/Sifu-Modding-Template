#pragma once
#include "CoreMinimal.h"
#include "EAttackMirroringMethod.generated.h"

UENUM()
enum class EAttackMirroringMethod : int32 {
    BasedOnQuadrantToTarget,
    BasedOnLeftFootSyncMarker,
    BasedOnRightFootSyncMarker,
};

