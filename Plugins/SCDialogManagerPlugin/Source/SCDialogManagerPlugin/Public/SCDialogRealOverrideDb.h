#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DialogActionArrayContainer.h"
#include "SCDialogRealOverrideDb.generated.h"

UCLASS()
class SCDIALOGMANAGERPLUGIN_API USCDialogRealOverrideDb : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FDialogActionArrayContainer> m_FirstLinesActions;
    
    UPROPERTY(EditAnywhere)
    FDialogActionArrayContainer m_LastLineActions;
    
    USCDialogRealOverrideDb();
};

