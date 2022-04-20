#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
#include "BoneContainer.h"

//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: Engine BoneReferenceContainerInterface
//CROSS-MODULE INCLUDE: Engine EBoneTranslationRetargetingMode
#include "WGRetargetingOverrideData.generated.h"

class USkeleton;

UCLASS()
class SIFU_API UWGRetargetingOverrideData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    USkeleton* m_Skeleton;
  /*  
    UPROPERTY(EditAnywhere)
    TMap<FBoneReference, TEnumAsByte<EBoneTranslationRetargetingMode::Type>> m_BoneRetargetingOverrideMap;*/
    
    UWGRetargetingOverrideData();
    
    // Fix for true pure virtual functions not being implemented
};

