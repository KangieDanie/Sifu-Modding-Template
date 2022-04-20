#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SCCollisionResponseTemplate.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCCollisionResponseTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionEnabled::Type> m_eCollisionEnabled;
    
    UPROPERTY()
    TEnumAsByte<EObjectTypeQuery> m_eObjectType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_eCollisionType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCollisionResponseContainer m_ResponseToChannels;
    
    FSCCollisionResponseTemplate(){};
};

