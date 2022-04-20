#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintAsyncActionBase
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SCDialogAsyncActionBase.generated.h"

class ACharacter;
class USCDialogAsyncActionBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSCDialogAsyncActionBaseOnDialogCompleted, int32, DialogNodeId);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSCDialogAsyncActionBaseOnInteractiveChoiceSelected, int32, DialogNodeId);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSCDialogAsyncActionBaseOnDialogCut, int32, DialogNodeId);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSCDialogAsyncActionBaseOnLineEnded, int32, DialogNodeId);

UCLASS()
class SIFU_API USCDialogAsyncActionBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSCDialogAsyncActionBaseOnDialogCompleted OnDialogCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FSCDialogAsyncActionBaseOnDialogCut OnDialogCut;
    
    UPROPERTY(BlueprintAssignable)
    FSCDialogAsyncActionBaseOnLineEnded OnLineEnded;
    
    UPROPERTY(BlueprintAssignable)
    FSCDialogAsyncActionBaseOnInteractiveChoiceSelected OnInteractiveChoiceSelected;
    
    UFUNCTION(BlueprintCallable)
    static USCDialogAsyncActionBase* BPF_StartConversationExtended(ACharacter* _character, FName _startingSegment, const bool _bGenericSubtitles, ACharacter* _secondary, bool _bCutOtherDialogs, bool _bLookAtEnabled);
    
    USCDialogAsyncActionBase();
};

