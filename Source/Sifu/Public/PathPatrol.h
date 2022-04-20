#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "PatrolControlPoint.h"
#include "EPatrolType.h"
#include "PathPatrol.generated.h"

UCLASS()
class SIFU_API APathPatrol : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FPatrolControlPoint> m_patrolControlPoints;
    
    UPROPERTY(EditAnywhere)
    EPatrolType m_ePatrolType;
    
    UPROPERTY(EditAnywhere)
    AActor* m_lookAtTarget;
    
    APathPatrol();
};

