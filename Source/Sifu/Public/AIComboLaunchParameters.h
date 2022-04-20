#pragma once
#include "CoreMinimal.h"
#include "SCAITicketEnum.h"
#include "AIComboLaunchParameters.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAIComboLaunchParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bCheckCanAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bCheckTicketAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSCAITicketEnum m_Ticket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bMoveToTargetRange;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    AActor* m_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_iRepeats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bCancelPendingActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bTestInputActionAvailable;
    
    SIFU_API FAIComboLaunchParameters();
};

