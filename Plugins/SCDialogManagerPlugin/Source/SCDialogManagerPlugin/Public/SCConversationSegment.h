#pragma once
#include "CoreMinimal.h"
#include "SCConversationRule.h"
#include "SCConversationSegment.generated.h"

USTRUCT(BlueprintType)
struct SCDIALOGMANAGERPLUGIN_API FSCConversationSegment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSCConversationRule> Rules;
    
    UPROPERTY(EditAnywhere)
    float m_fPlaySegmentProbability;
    
    UPROPERTY(EditAnywhere)
    bool m_bValidOnlyInGroup;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName DialogLine;
    
    UPROPERTY(EditAnywhere)
    FName NextSegment;
    
    UPROPERTY(EditAnywhere)
    float MinDelayAtEnd;
    
    UPROPERTY(EditAnywhere)
    float MaxDelayAtEnd;
    
    UPROPERTY(EditAnywhere)
    bool bDontSwitchListenerAndSpeaker;
    
    FSCConversationSegment();
};

