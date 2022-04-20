#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "OrderDBSet.generated.h"

class UOrderDB;

UCLASS()
class SIFU_API UOrderDBSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UOrderDB>> m_Orders;
    
    UOrderDBSet();
};

