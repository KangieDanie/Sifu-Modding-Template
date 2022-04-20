#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "StartUpComboDB.generated.h"

UCLASS()
class SIFU_API UStartUpComboDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_ComboSlotNames;
    
    UStartUpComboDB();
};

