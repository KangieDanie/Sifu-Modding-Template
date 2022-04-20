#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "EButtonNotificationType.h"
#include "EAttackLearningState.h"
#include "InventorySearchFilter.h"
#include "ECharacterProgressionRewardTypes.h"
#include "NewNotificationWidget.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UNewNotificationWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAttackLearningState m_eAttackLearningState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FInventorySearchFilter m_InventoryItemFilter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<ECharacterProgressionRewardTypes> m_eProgressionRewards;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bAlwaysVisible;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_displayedText;
    
public:
    UFUNCTION()
    void OnStatsChanged();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetNotifyProgressionRewards(const TArray<ECharacterProgressionRewardTypes>& _rewards);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetNotifyNewSparePoints(bool _bNewSparePoints);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetNotifyNewAttacks(bool _bNotify);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Initialize(const TArray<ECharacterProgressionRewardTypes>& _rewards, const FInventorySearchFilter& _inventoryFilter, const TArray<EButtonNotificationType>& _notifications);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Init(TArray<ECharacterProgressionRewardTypes> _rewards, FInventorySearchFilter _inventoryFilter, bool _bNewSparePoints, bool _bNewAttacks, bool _bNewInventoryItems, bool _bNewEmotes, bool _bNewIntros);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_Show();
    
    UNewNotificationWidget();
};

