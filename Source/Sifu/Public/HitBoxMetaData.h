#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "HitBoxMetaData.generated.h"

UCLASS(Abstract, EditInlineNew)
class SIFU_API UHitBoxMetaData : public UObject {
    GENERATED_BODY()
public:
    UHitBoxMetaData();
};

