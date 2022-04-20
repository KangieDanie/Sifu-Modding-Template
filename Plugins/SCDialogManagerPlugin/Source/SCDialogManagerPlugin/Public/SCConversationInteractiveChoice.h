#pragma once
#include "CoreMinimal.h"
#include "SCConversationInteractiveReply.h"
#include "SCConversationInteractiveChoice.generated.h"

USTRUCT(BlueprintType)
struct SCDIALOGMANAGERPLUGIN_API FSCConversationInteractiveChoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Timer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSCConversationInteractiveReply> Replies;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName TimerExpiredNextSegment;
    
    FSCConversationInteractiveChoice();
};

