#pragma once
#include "CoreMinimal.h"
#include "BaseHitDetectionDB.h"
#include "BoneHitDBInfo.h"
//CROSS-MODULE INCLUDE: Engine BoneReferenceContainerInterface
#include "BoneContainer.h"

#include "SkeletalMeshHitDetectionDB.generated.h"

UCLASS()
class SIFU_API USkeletalMeshHitDetectionDB : public UBaseHitDetectionDB{
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FBoneHitDBInfo> m_bonesToWatch;
    
public:
    USkeletalMeshHitDetectionDB();
    
    // Fix for true pure virtual functions not being implemented
};

