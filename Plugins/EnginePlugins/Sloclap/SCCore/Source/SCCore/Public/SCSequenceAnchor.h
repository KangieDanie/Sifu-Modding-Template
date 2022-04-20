#pragma once
#include "CoreMinimal.h"
#include "SCActor.h"
#include "SCSequenceAnchor.generated.h"

class USkeletalMeshComponent;

UCLASS()
class SCCORE_API ASCSequenceAnchor : public ASCActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* m_ComponentSkeletalMesh;
    
public:
    ASCSequenceAnchor();
};

