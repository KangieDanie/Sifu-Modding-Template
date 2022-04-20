#pragma once
#include "CoreMinimal.h"
#include "HUDUserWidget.h"
#include "EMenuEnum.h"
#include "InGameNotification.generated.h"

class ULevelUpNotification;
class UProgressionDoorNotification;
class UBaseNotification;
class UMessageNotification;
class UProgressionRewardNotification;
class UAttackProgressNotification;

UCLASS(EditInlineNew)
class UInGameNotification : public UHUDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UBaseNotification*> m_NotificationStack;
    
    UFUNCTION()
    void OnMenuChanged(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_ShowNextNotification();
    
    UFUNCTION(BlueprintCallable)
    void BPF_PushNotification(UBaseNotification* _notification);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopNotification();
    
    UFUNCTION(BlueprintCallable)
    void BPF_EnableOpenMenu();
    
    UFUNCTION(BlueprintCallable)
    void BPF_DisableOpenMenu();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ClearPendingNotificationOfTypes(TArray<UClass*> _NotificationTypes);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_HideCurrentNotification();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_HandleProgressionRewardNotification(const UProgressionRewardNotification* _rewardNotification);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_HandleProgressionDoorNotification(const UProgressionDoorNotification* _progressionDoorNotification);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_HandleNotification(const UBaseNotification* _messageNotification);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_HandleMessageNotification(const UMessageNotification* _messageNotification);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_HandleLevelUpNotification(const ULevelUpNotification* _levelUpNotification);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_HandleAttackProgressNotification(const UAttackProgressNotification* _attackProgressNotification);
    
    UFUNCTION(BlueprintPure)
    UAttackProgressNotification* BPE_FindOrCreateAttackProgressNotification(const FName& _attackName);
    
public:
    UInGameNotification();
};

