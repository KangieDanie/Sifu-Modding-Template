#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "DialogActionBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class SCDIALOGMANAGERPLUGIN_API UDialogActionBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_OnNodeStart;
    
    UDialogActionBase();
};

