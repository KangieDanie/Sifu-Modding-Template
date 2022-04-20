#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "DeflectImpact.h"
#include "DeflectImpactDB.generated.h"

UCLASS()
class SIFU_API UDeflectImpactDB : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDeflectImpact m_DeflectImpact;
    
    UDeflectImpactDB();
};

