#pragma once
#include "CoreMinimal.h"
#include "BaseItemData.h"
#include "QuestItemData.generated.h"

class UProgressionDoorData;

UCLASS()
class SIFU_API UQuestItemData : public UBaseItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UProgressionDoorData* m_ProgressionDoor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_ScalarParameterName;
    
    UQuestItemData();
};

