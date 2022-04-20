#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "SCComboScrollList.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSCComboScrollListOnItemSelected, int32, SelectedIndex);

UCLASS(EditInlineNew)
class SIFU_API USCComboScrollList : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSCComboScrollListOnItemSelected OnItemSelected;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_InitFromStrings(const TArray<FString>& _list, int32 _iSelectedItem);
    
    USCComboScrollList();
};

