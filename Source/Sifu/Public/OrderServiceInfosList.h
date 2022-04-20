#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OrderServiceInfos.h"
#include "OrderServiceInserted.h"
#include "OrderServiceInfosList.generated.h"

class UOrderPresetDB;

USTRUCT(BlueprintType)
struct SIFU_API FOrderServiceInfosList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UOrderPresetDB>> m_Presets;
    
    UPROPERTY(EditAnywhere)
    TArray<FOrderServiceInfos> m_Services;
    
    UPROPERTY(EditAnywhere)
    TArray<FOrderServiceInserted> m_InsertedServices;
    
    FOrderServiceInfosList();
};

