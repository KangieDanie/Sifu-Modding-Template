#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "SCCheatManager.generated.h"

class UGameInstance;
class UCheatDB;

UCLASS(BlueprintType)
class SIFU_API USCCheatManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UCheatDB* m_cheatDB;
    
public:
    UFUNCTION(BlueprintPure)
    static bool SkipMovesetTutorial(UGameInstance* _gameInstance);
    
    UFUNCTION(BlueprintPure)
    static bool FillInventoryWithEquipment(UGameInstance* _gameInstance);
    
    UFUNCTION(BlueprintPure)
    static bool AreAllAttacksUnlocked(UGameInstance* _gameInstance);
    
    USCCheatManager();
};

