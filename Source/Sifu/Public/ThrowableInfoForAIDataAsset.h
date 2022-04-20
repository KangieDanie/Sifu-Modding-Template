#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "ThrowableInfoForAIDataAsset.generated.h"

class AThrowableActor;

UCLASS()
class SIFU_API UThrowableInfoForAIDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<AThrowableActor>> m_ThrowableInfo;
    
    UThrowableInfoForAIDataAsset();
};

