#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCSkeletalMeshVLogDebugDrawComponent.generated.h"

UCLASS()
class SCCORE_API USCSkeletalMeshVLogDebugDrawComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSet<FName> m_SetAllowDebugBones;
    
    UPROPERTY(EditAnywhere)
    bool m_bRecordVLog;
    
public:
    USCSkeletalMeshVLogDebugDrawComponent();
};

