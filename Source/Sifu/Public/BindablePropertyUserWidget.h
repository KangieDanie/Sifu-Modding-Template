#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCUserWidget.h"
#include "BindablePropertyUserWidget.generated.h"

class UBindablePropertyBase;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE(FBindablePropertyUserWidget_OnInputUpdate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBindablePropertyUserWidget_OnPropertyUpdated);

UCLASS(EditInlineNew)
class SIFU_API UBindablePropertyUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBindablePropertyUserWidget_OnInputUpdate m_OnInputUpdate;
    
    UPROPERTY(BlueprintAssignable, EditAnywhere)
    FBindablePropertyUserWidget_OnPropertyUpdated m_OnPropertyUpdated;
    
    UPROPERTY(EditAnywhere)
    bool m_bSelfBindingProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bConstructProperty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UBindablePropertyBase> m_PropertyClass;
    
    UPROPERTY(EditAnywhere)
    FName m_PropertyName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UBindablePropertyBase* m_Property;
    
    UFUNCTION()
    void OnPropertyUpdated(UBindablePropertyBase* _property);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RefreshDisplay();
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnInputUpdate();
    
    UFUNCTION(BlueprintCallable)
    void BPF_CreateProperty();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnSelfBinding();
    
public:
    UBindablePropertyUserWidget();
};

