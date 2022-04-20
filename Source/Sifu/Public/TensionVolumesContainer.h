#pragma once
#include "CoreMinimal.h"
#include "TensionVolumesContainer.generated.h"

class ASoundTensionVolume;
class ASoundTensionPortal;

USTRUCT()
struct FTensionVolumesContainer {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<TWeakObjectPtr<ASoundTensionVolume>> m_overlappedTensionVolumes;
    
    UPROPERTY(SaveGame)
    TMap<TWeakObjectPtr<ASoundTensionPortal>, bool> m_TensionPortalsCrossed;
    
    SIFU_API FTensionVolumesContainer();
};

