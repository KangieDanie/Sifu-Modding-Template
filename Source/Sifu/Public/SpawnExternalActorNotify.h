#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "SCAnimNotify.h"
#include "SpawnExternalActorNotify.generated.h"

class AActor;

UCLASS(CollapseCategories)
class SIFU_API USpawnExternalActorNotify : public USCAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> m_ActorClassToSpawn;
    
    UPROPERTY(EditAnywhere)
    FName m_CharacterBoneName;
    
    UPROPERTY(EditAnywhere)
    FName m_WeaponBoneName;
    
    UPROPERTY(EditAnywhere)
    FVector m_SpawnOffset;
    
public:
    USpawnExternalActorNotify();
};

