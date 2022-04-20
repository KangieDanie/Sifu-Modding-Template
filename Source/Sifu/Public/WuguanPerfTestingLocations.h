#pragma once
#include "CoreMinimal.h"
#include "SCTestingLocationsBase.h"
#include "WuguanPerfTestingLocations.generated.h"

class AAISituationActor;

UCLASS()
class SIFU_API AWuguanPerfTestingLocations : public ASCTestingLocationsBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    TArray<TSoftObjectPtr<AAISituationActor>> m_situationsToSpawn;
    
public:
    AWuguanPerfTestingLocations();
};

