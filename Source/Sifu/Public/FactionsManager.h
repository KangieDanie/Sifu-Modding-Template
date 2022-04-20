#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "TargetableFactions.h"
#include "FactionsManager.generated.h"

UCLASS()
class SIFU_API UFactionsManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FTargetableFactions m_FactionsTargetTable[6];
    
public:
    UFactionsManager();
};

