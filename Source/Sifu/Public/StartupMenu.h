#pragma once
#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "EStartupMenuState.h"
#include "EMenuEnum.h"
#include "EPlayerScreenSide.h"
#include "StartupMenu.generated.h"

class AActor;

UCLASS(EditInlineNew)
class SIFU_API UStartupMenu : public UMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    EStartupMenuState m_eCurrentState;
    
    UPROPERTY(EditAnywhere)
    EMenuEnum m_eEnumType;
    
    UPROPERTY(EditAnywhere)
    int32 m_iShowPopupOnLoadResultMask;
    
private:
    UFUNCTION()
    void OnSequenceFinished();
    
    UFUNCTION()
    void OnContinueWithoutSavingConfirm();
    
    UFUNCTION()
    void OnConfirmGeneric();
    
    UFUNCTION()
    void OnConfirmCancel();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_SetCanLaunchDirectly(bool _bLaunchDirectly);
    
    UFUNCTION(BlueprintCallable)
    void BPF_NewGame();
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsCameraShakeNeeded() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_HasSaveGames();
    
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetStartSpot() const;
    
    UFUNCTION(BlueprintPure)
    EPlayerScreenSide BPF_GetPlayerScreenSide() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ContinueGame();
    
    UFUNCTION(BlueprintPure)
    bool BPF_CanLaunchDirectly(bool _bLaunchDirectly) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_UserNameChanged(const FString& _name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ShowState(EStartupMenuState _eState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnUserPressedStart(int32 UserIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnSaveLoaded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnSaveCreated();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_HandleNavigationBack();
    
public:
    UStartupMenu();
};

