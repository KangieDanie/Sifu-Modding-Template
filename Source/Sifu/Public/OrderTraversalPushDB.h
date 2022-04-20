#pragma once
#include "CoreMinimal.h"
#include "OrderDB.h"
#include "HitBox.h"
#include "OrderTraversalPushDB.generated.h"

UCLASS()
class SIFU_API UOrderTraversalPushDB : public UOrderDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fMarginAfterTraversalEnd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FHitBox m_HitOnLandedWithoutFall;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FHitBox m_HitOnLethalFall;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxLandingDistanceFromNavmesh;
    
    UPROPERTY(EditAnywhere)
    float m_fFallVelocityVariation;
    
    UOrderTraversalPushDB();
};

