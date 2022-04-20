#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "FilterPresetEntitlementDB.generated.h"

class UFilterPresetEntryDB;

UCLASS(BlueprintType)
class SIFU_API UFilterPresetEntitlementDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_Entitlement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UFilterPresetEntryDB*> m_Filters;
    
    UFilterPresetEntitlementDB();
};

