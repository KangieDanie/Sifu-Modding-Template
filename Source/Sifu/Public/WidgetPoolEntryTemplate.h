#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "WidgetPoolEntryTemplate.generated.h"

class USCUserWidget;

USTRUCT(BlueprintType)
struct SIFU_API FWidgetPoolEntryTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSCUserDefinedEnumHandler m_LayerEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<USCUserWidget> m_WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_iNumberOfInstances;
    
    FWidgetPoolEntryTemplate();
};

