#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "MenuSlot.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UMenuSlot : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool m_bAllowSoundPlaying;
    
    UMenuSlot();
};

