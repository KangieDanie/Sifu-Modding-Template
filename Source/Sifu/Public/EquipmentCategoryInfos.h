#pragma once
#include "CoreMinimal.h"
#include "AsyncTextureStruct.h"
#include "EquipmentCategoryInfos.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FEquipmentCategoryInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_Lore;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAsyncTextureStruct m_SelectedIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAsyncTextureStruct m_Icon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAsyncTextureStruct m_MiniIcon;
    
    FEquipmentCategoryInfos();
};

