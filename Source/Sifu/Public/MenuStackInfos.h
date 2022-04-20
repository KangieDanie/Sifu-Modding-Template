#pragma once
#include "CoreMinimal.h"
#include "EMenuEnum.h"
#include "MenuStackInfos.generated.h"

class UWidget;
class UPanelWidget;

USTRUCT(BlueprintType)
struct FMenuStackInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMenuEnum m_eMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TWeakObjectPtr<UPanelWidget> m_Container;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TWeakObjectPtr<UWidget> m_FocusedButton;
    
    SIFU_API FMenuStackInfos();
};

