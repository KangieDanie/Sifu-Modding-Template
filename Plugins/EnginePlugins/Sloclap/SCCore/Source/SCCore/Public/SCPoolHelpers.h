#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "Math/TransformNonVectorized.h"
#include "SCPoolHelpers.generated.h"

class AActor;

UCLASS(BlueprintType)
class SCCORE_API USCPoolHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static AActor* BPF_SpawnPoolableActor(AActor* _worldCtxt, UClass* _class, const FTransform& _transform, FName _poolName, bool _bGrow, bool _bFailIfNoPoolFound);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsActorValid(const AActor* _actor);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_IsActorPooled(const AActor* _actor, bool& _bOutIsActive);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_GetPoolContextInfos(UClass* _class, int32& _iActiveCount, int32& _iInativeActiveCount);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_DestroyPoolableActor(AActor* _actor, bool& _bOutWasPooled);
    
    USCPoolHelpers();
};

