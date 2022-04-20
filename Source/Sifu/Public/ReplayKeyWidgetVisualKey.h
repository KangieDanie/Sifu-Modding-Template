#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyCameraMode.h"
#include "EReplayKeyCutType.h"
#include "ReplayKeyWidgetVisualKey.generated.h"

USTRUCT(BlueprintType)
struct FReplayKeyWidgetVisualKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EReplayKeyCameraMode m_eCameraMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EReplayKeyCutType m_eCutType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iKeyTypeFlag;
    
    friend uint32 GetTypeHash(const FReplayKeyWidgetVisualKey& Other) {
        return GetTypeHash(Other.m_eCameraMode);
    }

    SIFU_API FReplayKeyWidgetVisualKey();
};

