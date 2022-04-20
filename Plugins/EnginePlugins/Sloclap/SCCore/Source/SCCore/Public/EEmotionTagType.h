#pragma once
#include "CoreMinimal.h"
#include "EEmotionTagType.generated.h"

UENUM()
enum class EEmotionTagType {
    TagStart,
    TagEnd,
    ShortTag,
    None,
};

