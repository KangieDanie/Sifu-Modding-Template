#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "ProgressionDoorData.generated.h"

class UTexture2D;
class USCUserWidget;

UCLASS(BlueprintType)
class SIFU_API UProgressionDoorData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText m_ItemName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_DisplayTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<USCUserWidget> m_NotificationWidget;
    
    UProgressionDoorData();
};

