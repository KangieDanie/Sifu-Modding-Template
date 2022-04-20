#pragma once
#include "CoreMinimal.h"
#include "WeaponSituationDescription.h"
#include "ThePlainesLevel.h"
#include "ArchetypeSituationDescription.h"
#include "ThePlainesLDLevel.generated.h"

class UDataTable;
class UArchetypeSituationDB;

UCLASS()
class SIFU_API AThePlainesLDLevel : public AThePlainesLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* m_dynamicPropsDataTable;
    
private:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_uiEncouterZone;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iLastManGaugeThresold;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FArchetypeSituationDescription> m_ArchetypesInSituation;
    
    UPROPERTY(EditDefaultsOnly)
    UArchetypeSituationDB* m_ArchetypesInSituationDB;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FWeaponSituationDescription> m_WeaponsInSituation;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMinMaxGenericWeapons;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxMaxGenericWeapons;
    
public:
    AThePlainesLDLevel();
};

