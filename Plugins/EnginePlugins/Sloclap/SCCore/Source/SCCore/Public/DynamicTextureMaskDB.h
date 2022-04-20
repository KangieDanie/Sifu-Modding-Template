#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DynamicTextureMaskDB.generated.h"

class UTextureRenderTarget2D;
class ASCPositionBakeSceneCapture;
class UMaterialInterface;

UCLASS(BlueprintType)
class SCCORE_API UDynamicTextureMaskDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ASCPositionBakeSceneCapture* m_PositionBakingActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_BakedPositionHitDrawer_SimpleStaticMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_BakedPositionHitDrawer_ComplexSkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_BakedPositionHitDrawer_SimpleSkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_Drawer_TexProj_OpaqueAlpha_Standard;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_Drawer_TexProj_OpaqueAlpha_Atlas;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_Drawer_TexProj_OpaqueColor_Standard;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_Drawer_TexProj_OpaqueColor_Atlas;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_Drawer_TexProj_Additive_Standard;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_Drawer_TexProj_Additive_Atlas;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_Drawer_SphereMask_Additive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_Drawer_SphereMask_OpaqueAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_Drawer_SphereMask_OpaqueColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_Drawer_CapsuleMask_Additive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_Drawer_CapsuleMask_OpaqueAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_Drawer_CapsuleMask_OpaqueColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_TextureDilation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* M_TextureCopy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTextureRenderTarget2D* m_ProxyDilationTexture;
    
    UDynamicTextureMaskDB();
};

