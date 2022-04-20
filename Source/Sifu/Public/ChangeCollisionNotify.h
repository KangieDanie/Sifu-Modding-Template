#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotify.h"
#include "ChangeCollisionNotify.generated.h"

UCLASS(CollapseCategories)
class SIFU_API UChangeCollisionNotify : public USCAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_bEnableCollisions;
    
public:
    UChangeCollisionNotify();
};

