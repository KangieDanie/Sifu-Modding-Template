#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine TableRowBase
#include "Engine/DataTable.h"
#include "EEmoteAction.h"
#include "EmoteDataRow.generated.h"

class UTexture2D;
class UAnimSequence;

USTRUCT(BlueprintType)
struct SIFU_API FEmoteDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName m_Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_RealName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_Icon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* m_Anim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* m_AnimWoman;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EEmoteAction m_eEmoteAction;
    
    FEmoteDataRow();
};

