#pragma once
#include "CoreMinimal.h"
#include "OrderServiceNotifyState.h"
#include "TranslationOSNotifyState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UTranslationOSNotifyState : public UOrderServiceNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool m_bUseAnimRootMotion;
    
public:
    UTranslationOSNotifyState();
};

