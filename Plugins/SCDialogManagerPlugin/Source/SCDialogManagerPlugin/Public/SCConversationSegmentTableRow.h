#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SCConversationSegment.h"
#include "SCConversationInteractiveChoice.h"
#include "SCConversationSegmentTableRow.generated.h"

class UDialogActionBase;

USTRUCT()
struct SCDIALOGMANAGERPLUGIN_API FSCConversationSegmentTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    bool m_bIsBarkContainer;
    
    UPROPERTY(EditAnywhere)
    TArray<FSCConversationSegment> ConversationSegments;
    
    UPROPERTY()
    TArray<UDialogActionBase*> m_DialogActions;
    
    UPROPERTY(EditAnywhere)
    FName SpeakerId;
    
    UPROPERTY(EditAnywhere)
    FName ListenerId;
    
    UPROPERTY(EditAnywhere)
    FSCConversationInteractiveChoice InteractiveChoices;
    
    FSCConversationSegmentTableRow();
};

