#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "ComboStartStateOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboStartStateOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_ComboStartName;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FName m_ComboStartPostOrderName;
    
    UComboStartStateOrderService();
};

