#pragma once
#include "CoreMinimal.h"
#include "HUDUserWidget.h"
#include "PickUpMenu.generated.h"

class UResourcesTexturesData;

UCLASS(EditInlineNew)
class SIFU_API UPickUpMenu : public UHUDUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UResourcesTexturesData* m_RessourcesDataAsset;
    
public:
    UFUNCTION()
    void LoadPictoCallback();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnClose();
    
    UPickUpMenu();
};

