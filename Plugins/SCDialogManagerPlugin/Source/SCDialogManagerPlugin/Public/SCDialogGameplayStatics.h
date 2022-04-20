#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SCDialogGameplayStatics.generated.h"

class ACharacter;

UCLASS(BlueprintType)
class SCDIALOGMANAGERPLUGIN_API USCDialogGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void BPF_PlayDialogLine(ACharacter* _character, FName _line, const bool _bGenericSubtitles);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsPlayingDialogLine(ACharacter* _character);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsInvolvedInConversation(const ACharacter* _character);
    
    USCDialogGameplayStatics();
};

