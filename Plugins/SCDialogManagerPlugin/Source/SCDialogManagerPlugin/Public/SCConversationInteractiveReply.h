#pragma once
#include "CoreMinimal.h"
#include "SCConversationRule.h"
#include "SCConversationInteractiveReply.generated.h"

USTRUCT(BlueprintType)
struct SCDIALOGMANAGERPLUGIN_API FSCConversationInteractiveReply {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName NextSegment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText TextWithGender;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IconType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSCConversationRule> Rules;
    
    FSCConversationInteractiveReply();
};

