#pragma once
#include "CoreMinimal.h"
#include "WGAiAction.h"
#include "AIActionStartConversation.generated.h"

class ACharacter;

UCLASS()
class SIFU_API UAIActionStartConversation : public UWGAiAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_StartingSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bCutOtherDialogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bGenericSubtitles;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    ACharacter* m_SecondaryActor;
    
public:
    UAIActionStartConversation();
};

