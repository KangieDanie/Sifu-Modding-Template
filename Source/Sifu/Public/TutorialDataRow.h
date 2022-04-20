#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine TableRowBase
#include "InputTutorialStruct.h"
#include "TutorialDataRow.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FTutorialDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_Subtitle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FInputTutorialStruct> m_Inputs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_Details;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bIsUnlockedByDefault;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bIsUnlockable;
    
    FTutorialDataRow();
};

