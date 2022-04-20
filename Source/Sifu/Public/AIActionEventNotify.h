#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotify.h"
#include "AIActionEventNotify.generated.h"

UCLASS(CollapseCategories)
class SIFU_API UAIActionEventNotify : public USCAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_EventName;
    
public:
    UAIActionEventNotify();
};

