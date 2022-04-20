#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG Image
#include "Components/Image.h"

#include "AsyncImage.generated.h"

class UMaterialInterface;
class UAsyncImage;
class UTexture2D;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncImageOnLoaded, UAsyncImage*, _image);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncImageOnLoadingStarted, UAsyncImage*, _image);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncImageOnLoadingCanceled, UAsyncImage*, _image);

UCLASS()
class UAsyncImage : public UImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncImageOnLoadingStarted OnLoadingStarted;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncImageOnLoadingCanceled OnLoadingCanceled;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncImageOnLoaded OnLoaded;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_AsyncAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fApparitionDuration;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UMaterialInterface> m_AsyncMaterial;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bMatchSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bHideOnLoadStart;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetTexture(UTexture2D* _asset, bool _bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetMaterial(UMaterialInterface* _asset);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadTextureAssetAsync(TSoftObjectPtr<UTexture2D> _asset, bool _bMatchSize, int32 _iQueueID, bool _bForce);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadMaterialAssetAsync(TSoftObjectPtr<UMaterialInterface> _asset);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Clear();
    
    UAsyncImage();
};

