#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "SCWorldSettings.generated.h"

UCLASS()
class SCCORE_API ASCWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_bUseLegacyCollisionSystem;
    
public:
    ASCWorldSettings();
};

