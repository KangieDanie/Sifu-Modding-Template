#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCUserWidget.h"
#include "DebugMenu.generated.h"

class ULoadSlot;
class UCharacterBuildDB;
class UCharacterBuildListDB;
class UPanelWidget;

UCLASS(EditInlineNew)
class SIFU_API UDebugMenu : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString m_CharacterBuildPath;
    
    UPROPERTY(EditDefaultsOnly)
    UCharacterBuildDB* m_DummyCharcterBuild;
    
    UPROPERTY(EditDefaultsOnly)
    UCharacterBuildListDB* m_CharacterBuildList;
    
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ULoadSlot> m_LoadingButtonClass;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_ShowSaves(UPanelWidget* _boxToFill);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetVBoxInvisible();
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadEquipmentSelection();
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadBackup(const FString& _backupName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadAndSetFirstSave(ULoadSlot* _loadSlot);
    
    UFUNCTION(BlueprintCallable)
    void BPF_DeleteBackup(const FString& _backupName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CreateNewSave(const FString& _charaName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CreateBackup(const FString& _backupName);
    
    UDebugMenu();
};

