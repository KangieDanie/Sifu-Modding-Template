#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "SCUserDefinedEnumBinding.generated.h"

class UEnum;

UCLASS()
class SCCORE_API USCUserDefinedEnumBinding : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UEnum* m_CppEnum;
    
    UPROPERTY(EditAnywhere)
    UEnum* m_BPEnum;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FName> m_CppToBPBinding;
    
    USCUserDefinedEnumBinding();
};

