#pragma once
#include "CoreMinimal.h"
#include "EGearRarity.h"
#include "BaseItemData.h"
#include "ResourceItemData.generated.h"

UCLASS()
class SIFU_API UResourceItemData : public UBaseItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iFragmentsNb;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EGearRarity m_eRarity;
    
    UResourceItemData();
};

