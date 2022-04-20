#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "AIDebugSpawnerInstance.h"
#include "AIDebugSpawnerComponent.generated.h"

UCLASS(BlueprintType)
class SIFU_API UAIDebugSpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAIDebugSpawnerInstance> m_Spawners;
    
    UFUNCTION(BlueprintCallable)
    void BPF_SpawnAIs(int32 _iCoun);
    
    UAIDebugSpawnerComponent();
};

