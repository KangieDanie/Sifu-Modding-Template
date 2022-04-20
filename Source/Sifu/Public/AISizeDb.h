#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "AISizeDb.generated.h"

UCLASS()
class SIFU_API UAISizeDb : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector m_vScale;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> m_TargetRelativeLocation;
    
    UAISizeDb();
};

