#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "EQuadrantTypes.h"
#include "ControllerIcons.h"
#include "EquipmentCategoryInfos.h"
#include "IconTextures.h"
#include "EIconStyle.h"
#include "EGameModeTypes.h"
#include "ControllerKeyIcons.h"
#include "ControllerAxisIcons.h"
#include "EParrySide.h"
#include "EAvoidType.h"
#include "MenuDB.generated.h"

//class UAkAudioEvent;
class UTexture2D;

UCLASS(BlueprintType)
class SIFU_API UMenuDB : public UDataAsset {
    GENERATED_BODY()
public:
    /*UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* m_AudioMove;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* m_AudioValidate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* m_AudioBack;*/
    
    UPROPERTY(EditAnywhere)
    FEquipmentCategoryInfos m_EquipmentSlotInfos[11];
    
    UPROPERTY(EditAnywhere)
    TArray<FEquipmentCategoryInfos> m_ItemSlotInfos;
    
    UPROPERTY(EditAnywhere)
    FEquipmentCategoryInfos m_EmptyCategoryInfos;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_AvoidIcons[7];
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_ParryIcons[2];
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_AbsorIcon;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_GuardBreakIcon;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_DiscipleIcon;
    
    UPROPERTY(EditAnywhere)
    FEquipmentCategoryInfos m_GameModeInfos[3];
    
    UPROPERTY(EditAnywhere)
    TArray<FControllerIcons> m_ControllerIcons;
    
    UPROPERTY(EditAnywhere)
    FControllerIcons m_DefaultControllerIcons;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* m_QuadrantSelectionIcons[4];
    
    UPROPERTY(EditAnywhere)
    FIconTextures m_QuadrantIcons[4];
    
    UPROPERTY(EditAnywhere)
    FIconTextures m_StanceIcons[4];
    
    UFUNCTION(BlueprintPure)
    UTexture2D* BPF_GetStanceIcon(EQuadrantTypes _eQuadrant, EIconStyle _eIconStyle) const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* BPF_GetQuadrantSelectionIcon(EQuadrantTypes _eQuadrant) const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* BPF_GetQuadrantIcon(EQuadrantTypes _eQuadrant, EIconStyle _eIconStyle) const;
    
    UFUNCTION(BlueprintPure)
    void BPF_GetGameModeInfos(const EGameModeTypes _eGameMode, FEquipmentCategoryInfos& _outInfos) const;
    
    UFUNCTION()
    static FString BPF_GetControllerKeyIconDesc(const FControllerKeyIcons& _slot);
    
    UFUNCTION()
    static FString BPF_GetControllerIconsDesc(const FControllerIcons& _icons);
    
    UFUNCTION()
    static FString BPF_GetControllerAxisIconDesc(const FControllerAxisIcons& _slot);
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> BPF_GetAttackParryIcon(EParrySide _eParrySide) const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> BPF_GetAttackAvoidIcon(EAvoidType _eAvoidType) const;
    
    UMenuDB();
};

