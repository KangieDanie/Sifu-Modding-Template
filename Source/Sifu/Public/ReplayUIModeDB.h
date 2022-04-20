#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "ReplayUIModeDB.generated.h"

class UReplayUIModeUserWidget;

UCLASS()
class SIFU_API UReplayUIModeDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UReplayUIModeUserWidget>> m_UIModeUserWidgets;
    
    UReplayUIModeDB();
};

