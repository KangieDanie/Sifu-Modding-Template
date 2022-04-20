#pragma once
#include "CoreMinimal.h"
#include "AsyncTextureStruct.h"
#include "Blueprint/UserWidget.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "BindableAsyncImage.generated.h"

class UAsyncImage;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(FAsyncTextureStruct, FBindableAsyncImageAsyncTextureDelegate);

UCLASS(EditInlineNew)
class UBindableAsyncImage : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UAsyncImage* m_AsyncImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAsyncTextureStruct AsyncTexture;
    
    UPROPERTY()
    FBindableAsyncImageAsyncTextureDelegate AsyncTextureDelegate;
    
public:
    UBindableAsyncImage();
};

