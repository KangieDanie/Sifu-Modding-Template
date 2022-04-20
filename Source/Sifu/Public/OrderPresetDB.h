#pragma once
#include "CoreMinimal.h"
#include "OrderServiceInfos.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "OrderPresetDB.generated.h"

UCLASS()
class SIFU_API UOrderPresetDB : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FOrderServiceInfos> m_Services;
    
    UOrderPresetDB();
};

