#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "Blueprint/UserWidget.h"
#include "MovieWidget.generated.h"

class UMediaTexture;
class UImage;
class UMediaPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMovieWidgetOnEndReached);

UCLASS(EditInlineNew)
class SIFU_API UMovieWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    UMediaTexture* m_MediaTexture;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UImage* m_WidgetTorender;
    
    UPROPERTY(BlueprintAssignable)
    FMovieWidgetOnEndReached OnEndReached;
    
private:
    UPROPERTY(Transient)
    UMediaPlayer* m_MediaPlayer;
    
    UFUNCTION()
    void MediaOpenedCallback(const FString& _url);
    
    UFUNCTION()
    void MediaEndCallback();
    
public:
    UFUNCTION(BlueprintCallable)
    bool BPF_OpenMovie(const FString& _url, bool _bLooping);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CloseMovie();
    
    UMovieWidget();
};

