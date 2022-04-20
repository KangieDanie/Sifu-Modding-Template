#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyState.h"
#include "EAvoidType.h"
#include "AvoidPropertyContainer.h"
#include "AvoidWindowNotifyState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UAvoidWindowNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<EAvoidType> m_AvoidTypeArray;
    
    UPROPERTY(EditAnywhere)
    FAvoidPropertyContainer m_AvoidPropertyContainer;
    
public:
    UAvoidWindowNotifyState();
};

