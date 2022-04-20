#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine AnimMetaData
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "SCAnimOrderServiceSettings.h"
//CROSS-MODULE INCLUDE: Engine BoneReferenceContainerInterface
#include "PropertyFloorBoneRepartition.h"
#include "WeaponAnimInfo.h"
#include "Animation/AnimMetaData.h"
#include "SCAnimMetaData.generated.h"


class ABaseWeapon;
class ABaseCharacter;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API USCAnimMetaData : public UAnimMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSCAnimOrderServiceSettings> m_CustomOrderServiceSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bUseWeaponAnimInfos;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FWeaponAnimInfo m_WeaponAnimInfos;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<TSubclassOf<ABaseWeapon>, FWeaponAnimInfo> m_WeaponAnimInfosPerClass;
    
    UPROPERTY(EditAnywhere)
    FName m_SlopeCurveName;
    
    UPROPERTY(EditAnywhere)
    bool m_bShowSyncedAnimDebug;
    
    UPROPERTY(EditAnywhere)
    bool m_bRotateTargetBoneLocationOnFloorOrientation;
    
    UPROPERTY(EditAnywhere)
    bool m_bLockSpineXAxisRotation;
    
    UPROPERTY(EditAnywhere)
    bool m_bLockSpineYAxisRotation;
    
    UPROPERTY(EditAnywhere)
    float m_fFloorSpineRepartitionBlendInOut;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_FloorSpineRepartitionFrameRange;
    
    UPROPERTY(EditAnywhere)
    bool m_bOverrideSlopeBoneRepartition;
    
    UPROPERTY(EditAnywhere)
    TArray<FPropertyFloorBoneRepartition> m_OverrideSlopeBoneRepartition;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnPlay(uint8 _uiOrderId, ABaseCharacter* _character) const;
    
    USCAnimMetaData();
    
    // Fix for true pure virtual functions not being implemented
};

