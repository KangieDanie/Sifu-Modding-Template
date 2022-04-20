#pragma once
#include "CoreMinimal.h"
#include "BaseHitDetectionDB.h"
#include "LineHitDetectionDB.generated.h"

UCLASS()
class SIFU_API ULineHitDetectionDB : public UBaseHitDetectionDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fHalfHeight;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iNumLines;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bOneSided;
    
public:
    ULineHitDetectionDB();
};

