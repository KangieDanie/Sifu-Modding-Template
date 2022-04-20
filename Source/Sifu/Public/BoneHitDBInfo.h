#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
#include "EHitShapeType.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "BoneHitDBInfo.generated.h"

USTRUCT(BlueprintType)
struct FBoneHitDBInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference m_boneRef;
    
    UPROPERTY(EditAnywhere)
    EHitShapeType m_eShapeType;
    
    UPROPERTY(EditAnywhere)
    float m_fHalfHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iNumLines;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bOneSided;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_Extent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator m_RotationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_vPositionOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fChainHitBoxSpacing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fChainValidDistance;
    
    /*UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FBoneReference> m_bonesInChain;*/
    
    SIFU_API FBoneHitDBInfo();
};

