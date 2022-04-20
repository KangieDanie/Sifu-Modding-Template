#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ButtonUserWidget.h"
#include "SCComboBoxButton.generated.h"

class USCComboScrollList;

UCLASS(EditInlineNew)
class SIFU_API USCComboBoxButton : public UButtonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 m_iSelectedItem;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FString> m_Items;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<USCComboScrollList> m_ScrolllistClass;
    
    UFUNCTION()
    void OnRightClick(UButtonUserWidget* _button, bool _bWithMouse);
    
    UFUNCTION()
    void OnListClosed();
    
    UFUNCTION()
    void OnItemSelected(int32 _iIndex);
    
    UFUNCTION()
    void Onclick(UButtonUserWidget* _button, bool _bWithMouse);
    
public:
    UFUNCTION(BlueprintPure)
    bool BPF_IsOpened() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_InitList(TArray<FString> _items);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SelectionChanged();
    
    USCComboBoxButton();
};

