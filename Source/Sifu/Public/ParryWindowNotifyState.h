#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyState.h"
#include "ParryType.h"
#include "ParryWindowNotifyState.generated.h"

class UParryPropertyDB;

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UParryWindowNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FParryType> m_ParryTypeArray;
    
    UPROPERTY(EditAnywhere)
    UParryPropertyDB* m_ParryPropertyDB;
    
public:
    UParryWindowNotifyState();
};

