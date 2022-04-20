#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: SCCore SCPoolableActorComponent
#include "SCPoolableActorComponent.h"
#include "GeneratedWallInfos.h"
#include "WallJumpGeneratorComponent.generated.h"

class AActor;

UCLASS(BlueprintType)
class SIFU_API UWallJumpGeneratorComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fMinWallLength;
    
    UPROPERTY(EditAnywhere)
    float m_fDetectionDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxSegmentVerticalAngle;
    
    UPROPERTY(EditAnywhere)
    float m_fLeanHeight;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxWallAngleDegree;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iWallActorCount;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> m_ActorClass;
    
private:
    UPROPERTY()
    TArray<FGeneratedWallInfos> m_Walls;
    
public:
    UWallJumpGeneratorComponent();
    
    // Fix for true pure virtual functions not being implemented
};

