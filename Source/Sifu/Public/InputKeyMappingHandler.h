#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: InputCore Key
#include "InputKeyMappingHandler.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FInputKeyMappingHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKey m_Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bAlt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bCmd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fScale;
    
    FInputKeyMappingHandler();
};

