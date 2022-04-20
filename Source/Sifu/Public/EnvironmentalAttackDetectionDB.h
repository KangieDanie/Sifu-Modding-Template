#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: Engine ECollisionChannel
#include "EnvironmentalAttackDetectionDB.generated.h"

class UTakedownAnimRequest;

UCLASS()
class SIFU_API UEnvironmentalAttackDetectionDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTakedownAnimRequest> m_DefaultAnimRequest;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTakedownAnimRequest> m_WallAnimRequest;
    
    UPROPERTY(EditAnywhere)
    float m_fDetectionRadius;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_eCollisionChannel;
    
    UEnvironmentalAttackDetectionDB();
};

