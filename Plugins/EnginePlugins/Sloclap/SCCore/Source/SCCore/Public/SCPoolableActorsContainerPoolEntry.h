#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCPoolableActorsContainerPoolEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SCCORE_API FSCPoolableActorsContainerPoolEntry {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName m_Name;
    
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<AActor> m_Class;
    
    UPROPERTY(VisibleAnywhere)
    TArray<AActor*> m_Actors;
    
    FSCPoolableActorsContainerPoolEntry(){};
};

