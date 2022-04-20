#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "ReplayKeyWidgetVisualData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FReplayKeyWidgetVisualData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* m_Texture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D m_vSize;
    
    friend uint32 GetTypeHash(const FReplayKeyWidgetVisualData& Other) {
        return GetTypeHash(Other.m_Texture);
    }

    SIFU_API FReplayKeyWidgetVisualData();
};

