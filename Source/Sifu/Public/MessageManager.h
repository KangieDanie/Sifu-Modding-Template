#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "MessageManager.generated.h"

class UMessengerComponent;

UCLASS()
class SIFU_API UMessageManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UMessengerComponent* m_MessengerComponent;
    
public:
    UMessageManager();
};

