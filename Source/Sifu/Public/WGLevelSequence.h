#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCLevelSequence
#include "SCLevelSequence.h"
#include "WGLevelSequence.generated.h"

class UWGLevelSequenceDirectorData;

UCLASS()
class SIFU_API UWGLevelSequence : public USCLevelSequence {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_SetCharacterPickedObjectVisibility(FName _roleName, bool _bVisible);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PushInputContext();
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopInputContext();
    
public:
    UFUNCTION(BlueprintPure)
    UWGLevelSequenceDirectorData* BPF_GetWGData() const;
    
    UWGLevelSequence();
};

