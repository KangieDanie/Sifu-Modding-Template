#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "WidgetPoolEntryTemplate.h"
#include "WidgetPoolElementArray.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "WidgetPoolComponent.generated.h"

class USCUserWidget;

UCLASS(BlueprintType)
class SIFU_API UWidgetPoolComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FWidgetPoolEntryTemplate> m_WidgetPoolTemplate;
    
    UPROPERTY(Transient)
    TMap<FName, FWidgetPoolElementArray> m_WidgetPool;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_ReleaseWidget(const FSCUserDefinedEnumHandler& _userEnum, USCUserWidget* _userWidget);
    
    UFUNCTION(BlueprintCallable)
    USCUserWidget* BPF_GetWidget(const FSCUserDefinedEnumHandler& _userEnum);
    
    UWidgetPoolComponent();
};

