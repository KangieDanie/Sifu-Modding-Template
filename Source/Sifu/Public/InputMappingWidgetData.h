#pragma once
#include "CoreMinimal.h"
#include "WidgetData.h"
#include "InputMappingProfileData.h"
#include "EInputMappingForceController.h"
#include "InputMappingWidgetData.generated.h"

UCLASS()
class SIFU_API UInputMappingWidgetData : public UWidgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FInputMappingProfileData m_InputContext;
    
    UPROPERTY(BlueprintReadWrite)
    EInputMappingForceController m_eControllerType;
    
    UInputMappingWidgetData();
};

