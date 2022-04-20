#pragma once
#include "CoreMinimal.h"
#include "BaseShapeHitDetectionDB.h"
#include "SphereHitDetectionDB.generated.h"

UCLASS()
class SIFU_API USphereHitDetectionDB : public UBaseShapeHitDetectionDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fRadius;
    
    USphereHitDetectionDB();
};

