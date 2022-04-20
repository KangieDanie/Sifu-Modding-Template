#pragma once
#include "CoreMinimal.h"
#include "BaseHitDetectionDB.h"
#include "BaseShapeHitDetectionDB.generated.h"

UCLASS()
class SIFU_API UBaseShapeHitDetectionDB : public UBaseHitDetectionDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bApplyOwnerScale;
    
    UBaseShapeHitDetectionDB();
};

