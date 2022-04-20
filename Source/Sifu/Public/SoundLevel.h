#pragma once
#include "CoreMinimal.h"
#include "ThePlainesLevel.h"
#include "EGlobalBehaviors.h"
#include "SoundMoodState.h"
#include "SoundLevel.generated.h"

class ABaseCharacter;

UCLASS()
class SIFU_API ASoundLevel : public AThePlainesLevel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(SaveGame)
    TArray<uint8> m_SoundManagerSaveData;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnMoodChanged(FSoundMoodState _previousState, FSoundMoodState _newState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnAIGlobalBehaviorChanged(const ABaseCharacter* _AICharacter, EGlobalBehaviors _ePreviousBehavior, EGlobalBehaviors _eNewBehavior);
    
    ASoundLevel();
};

