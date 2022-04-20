#pragma once
#include "CoreMinimal.h"
#include "EActivityType.h"
#include "Engine/DataTable.h"
#include "OnlineActivitiesTableRow.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FOnlineActivitiesTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_activityID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EActivityType m_eActivityType;
    
    FOnlineActivitiesTableRow(){};
};

