#pragma once
#include "CoreMinimal.h"
#include "SCBPComponentsMap.generated.h"

class UEnum;

USTRUCT()
struct SCCORE_API FSCBPComponentsMap {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UEnum*> m_ComponentsEnums;
    
public:
    FSCBPComponentsMap(){};
};

