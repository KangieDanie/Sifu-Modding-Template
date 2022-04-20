#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HitBoxMetaDataClassInstance.generated.h"

class UHitBoxMetaData;

USTRUCT(BlueprintType)
struct SIFU_API FHitBoxMetaDataClassInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UHitBoxMetaData> m_DefaultClassObject;
    
    UPROPERTY(EditAnywhere, Instanced)
    UHitBoxMetaData* m_Instance;
    
    FHitBoxMetaDataClassInstance();
};

