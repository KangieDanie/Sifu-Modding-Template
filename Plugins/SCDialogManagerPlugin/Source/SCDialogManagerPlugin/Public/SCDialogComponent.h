#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "SCPoolableActorComponent.h"
#include "SCDialogComponent.generated.h"

class UBlackboardData;
class UDataTable;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSCDialogComponentOnGenericDialogEvent, FName, EventTriggered);

UCLASS()
class SCDIALOGMANAGERPLUGIN_API USCDialogComponent : public UBlackboardComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSCDialogComponentOnGenericDialogEvent OnGenericDialogEvent;
    
private:
    UPROPERTY(Transient)
    UDataTable* m_ContextualDb;
    
public:
    UFUNCTION(BlueprintPure)
    bool BPF_InitBlackBoardFromAsset(UBlackboardData* _data);
    
    USCDialogComponent();
    
    // Fix for true pure virtual functions not being implemented
};

