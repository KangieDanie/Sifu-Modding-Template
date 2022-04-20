#pragma once
#include "CoreMinimal.h"
#include "EDeathNotifyTriggeredCondition.generated.h"

UENUM()
enum class EDeathNotifyTriggeredCondition {
    IfGoesToRagdoll,
    IfAnimOrNoUnspawn,
};

