#pragma once
#include "CoreMinimal.h"
#include "SCCollisionResponseTemplate.h"
#include "SCCollisionProfileDescription.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCCollisionProfileDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponseTemplate m_Template;
    
    FSCCollisionProfileDescription(){};
};

