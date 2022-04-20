#pragma once
#include "CoreMinimal.h"
#include "BaseShapeHitDetectionDB.h"
#include "CapsuleHitDetectionDB.generated.h"

UCLASS()
class SIFU_API UCapsuleHitDetectionDB : public UBaseShapeHitDetectionDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fRadius;
    
    UPROPERTY(EditAnywhere)
    float m_fHalfHeight;
    
    UCapsuleHitDetectionDB();
};

