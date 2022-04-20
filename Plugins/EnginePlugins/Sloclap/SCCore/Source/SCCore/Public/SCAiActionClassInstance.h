#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCAiActionClassInstance.generated.h"

class USCAiAction;

USTRUCT()
struct SCCORE_API FSCAiActionClassInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<USCAiAction> m_DefaultClassObject;
    
    UPROPERTY(EditAnywhere, Instanced)
    USCAiAction* m_Instance;
    
    FSCAiActionClassInstance(){};
};

