#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
//CROSS-MODULE INCLUDE: Engine BoneReferenceContainerInterface
//CROSS-MODULE INCLUDE: Engine CollisionProfileName
//CROSS-MODULE INCLUDE: Engine BoneReference
#include "Engine/CollisionProfile.h"
#include "BoneContainer.h"
#include "PhysicAnimOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UPhysicAnimOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bEnabled;
    
    UPROPERTY(EditAnywhere)
    FCollisionProfileName m_CollisionProfileName;
    
    UPROPERTY(EditAnywhere)
    FName m_PhysicAnimProfile;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> m_BaseBones;
    
    UPROPERTY(EditAnywhere)
    bool m_bRequireCurve;
    
    UPROPERTY(EditAnywhere)
    FName m_CurveName;
    
    UPROPERTY(EditAnywhere)
    float m_fBlendOutDuration;
    
    UPhysicAnimOrderService();
    
    // Fix for true pure virtual functions not being implemented
};

