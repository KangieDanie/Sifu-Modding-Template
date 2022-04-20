#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "SCConditionnalAnimContainer.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "RandomAnimDB.generated.h"

class AActor;

UCLASS(BlueprintType)
class SIFU_API URandomAnimDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSCConditionnalAnimContainer> m_Anims;
    
    UFUNCTION(BlueprintCallable)
    FAnimContainer BPF_PickRandomAnim(AActor* _requester);
    
    URandomAnimDB();
};

