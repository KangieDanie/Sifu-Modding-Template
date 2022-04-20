#pragma once
#include "CoreMinimal.h"
#include "WGAiAction.h"
#include "Engine/DataTable.h"

//CROSS-MODULE INCLUDE: Engine DataTableRowHandle
#include "AIActionPlayDialogLine.generated.h"
class AActor;
class UAnimSequence;

UCLASS()
class SIFU_API UAIActionPlayDialogLine : public UWGAiAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    FDataTableRowHandle m_Dialog;
    
    UPROPERTY(BlueprintReadWrite)
    FText m_DialogText;
    
    UPROPERTY(BlueprintReadWrite)
    float m_fDuration;
    
    UPROPERTY(BlueprintReadWrite)
    AActor* m_SecondaryActor;
    
    UPROPERTY(BlueprintReadWrite)
    UAnimSequence* m_animation;
    
public:
    UAIActionPlayDialogLine();
};

