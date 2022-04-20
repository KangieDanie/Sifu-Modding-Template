#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ThrowObjectNotify.h"
#include "ThrowMultipleObjectsNotify.generated.h"

class AThrowableActor;

UCLASS(CollapseCategories)
class SIFU_API UThrowMultipleObjectsNotify : public UThrowObjectNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fHorizontalAngleRange;
    
    UPROPERTY(EditAnywhere)
    uint8 m_uiNbThrowables;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AThrowableActor> m_ThrowableClass;
    
    UPROPERTY(EditAnywhere)
    bool m_bBreakThrowableAfterThrow;
    
    UPROPERTY(EditAnywhere)
    float m_fVerticalOffsetSpawnPosition;
    
    UPROPERTY(EditAnywhere)
    float m_fVerticalOffsetTargetDirection;
    
    UThrowMultipleObjectsNotify();
};

