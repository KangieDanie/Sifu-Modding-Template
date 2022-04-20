#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//#include "EquipmentCategoryInfos.h"
//#include "ControllerIcons.h"
#include "MenuIconsDB.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class SIFU_API UMenuIconsDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_EquipmentSlotDefaultIcons[11];
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_EquipmentSlotSelectedIcons[11];
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UTexture2D>> m_ItemDefaultIcons;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UTexture2D>> m_ItemSelectedIcons;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_EmptyMiniWeaponIcon;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UTexture2D>> m_FightingStyleMiniIcons;
    
    //UPROPERTY(EditAnywhere)
    //TArray<FControllerIcons> m_ControllerIcons;
    //
    //UPROPERTY(EditAnywhere)
    //FControllerIcons m_DefaultControllerIcons;
    
   /* UPROPERTY(EditAnywhere)
    FEquipmentCategoryInfos m_EmptyWeaponFamilyInfos;
    
    UFUNCTION(BlueprintPure)
    FControllerIcons GetControllerIcons(FName _controllerType) const;*/
    
    UMenuIconsDB();
};

