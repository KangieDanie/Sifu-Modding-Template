#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "SCPoolableActorsContainerPoolEntry.h"
#include "SCPoolableActorsContainer.generated.h"

class ASCCharacterImpostor;

UCLASS()
class SCCORE_API ASCPoolableActorsContainer : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    TArray<FSCPoolableActorsContainerPoolEntry> m_Pools;
    
public:
    UFUNCTION(BlueprintCallable)
    int32 BPF_GetActorsCount(TSubclassOf<AActor> _class);
    
    UFUNCTION(BlueprintCallable)
    ASCCharacterImpostor* BPF_AddCharacterImpostor(FName _poolName, bool _bRenameWithPoolName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddActors(TSubclassOf<AActor> _class, int32 _iCount, TArray<AActor*>& _outCreatedActors, FName _poolName);
    
    UFUNCTION(BlueprintCallable)
    AActor* BPF_AddActor(TSubclassOf<AActor> _class, FName _poolName, bool _bRenameWithPoolName);
    
    ASCPoolableActorsContainer();
};

