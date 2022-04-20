#pragma once
#include "CoreMinimal.h"
#include "StreamingLevelStateBase.h"
#include "SCStreamingActorStateId.h"
#include "SCStreamingActorState.h"
#include "SCStreamingLevelStateSavable.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct SCCORE_API FSCStreamingLevelStateSavable : public FStreamingLevelStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TMap<FSCStreamingActorStateId, FSCStreamingActorState> m_ActorsState;

    friend uint32 GetTypeHash(const FSCStreamingLevelStateSavable& Other) {
        return GetTypeHash(Other.m_ActorsState.Num());
    }
    
    FSCStreamingLevelStateSavable(){};
};

