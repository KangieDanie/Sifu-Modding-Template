#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCUserWidget.h"
#include "ReplaySubMenuWidget.generated.h"

class UReplayMenuWidget;
class UCustomWidgetNavigation;
class UReplaySubMenuWidget;

UCLASS(EditInlineNew)
class SIFU_API UReplaySubMenuWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCustomWidgetNavigation> m_CustomWidgetNavigationClass;
    
    UPROPERTY(BlueprintReadOnly)
    UCustomWidgetNavigation* m_CustomWidgetNavigation;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnRemovedFromParent();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnMenuPushRequest(UReplayMenuWidget* _parent, UReplaySubMenuWidget* _previousMenu);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnMenuPushed(UReplaySubMenuWidget* _previousMenu);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnMenuPopRequest(UReplayMenuWidget* _parent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnMenuPopped();
    
    UReplaySubMenuWidget();
};

