#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCVolume
#include "SCVolume.h"
#include "EAlertLevel.h"
#include "AISanctuaryVolume.generated.h"

class UAISanctuaryComponent;

UCLASS()
class SIFU_API AAISanctuaryVolume : public ASCVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAISanctuaryComponent* m_SanctuaryComponent;
    
private:
    UFUNCTION()
    void OnSanctuaryAssignmentUpdated();
    
    UFUNCTION()
    void OnAlertLevelChanged(EAlertLevel _eNewLevel);
    
public:
    AAISanctuaryVolume();
};

