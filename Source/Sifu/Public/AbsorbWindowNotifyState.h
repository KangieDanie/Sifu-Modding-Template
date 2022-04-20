#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyState.h"
#include "AbsorbWindowNotifyState.generated.h"

class UAbsorbPropertyDB;

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UAbsorbWindowNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UAbsorbPropertyDB* m_AbsorbPropertyDB;
    
public:
    UAbsorbWindowNotifyState();
};

