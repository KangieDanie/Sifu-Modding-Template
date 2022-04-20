#pragma once
#include "CoreMinimal.h"
#include "OrderServiceNotifyState.h"
#include "SnapOrderServiceNotifyState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API USnapOrderServiceNotifyState : public UOrderServiceNotifyState {
    GENERATED_BODY()
public:
    USnapOrderServiceNotifyState();
};

