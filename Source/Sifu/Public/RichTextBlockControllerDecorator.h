#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: UMG RichTextBlockDecorator
#include "Components/RichTextBlockDecorator.h"
#include "EControllerIconStyles.h"
#include "EControllerIconAxisTypes.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "RichTextBlockControllerDecorator.generated.h"

class UUserWidget;

UCLASS(Abstract)
class URichTextBlockControllerDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EControllerIconStyles m_eDefaultIconStyle;
    
    UPROPERTY(EditAnywhere)
    EControllerIconAxisTypes m_eDefaultAxisType;
    
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_DefaultDrawingStyle;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> m_WidgetClass;
    
    UPROPERTY(EditAnywhere)
    int32 m_iBaselineOffset;
    
    UPROPERTY(EditAnywhere)
    FString m_MetaData;
    
    URichTextBlockControllerDecorator();
};

