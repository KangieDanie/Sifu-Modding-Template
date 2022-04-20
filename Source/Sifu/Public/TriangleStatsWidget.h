#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG Widget
//CROSS-MODULE INCLUDE: SlateCore SlateBrush
#include "Styling/SlateBrush.h"
#include "Components/Widget.h"

//CROSS-MODULE INCLUDE: CoreUObject Color
#include "TriangleStatsWidget.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(float, FTriangleStatsWidgetDownLeftStatDelegate);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(float, FTriangleStatsWidgetUpStatDelegate);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(float, FTriangleStatsWidgetDownRightStatDelegate);

UCLASS()
class UTriangleStatsWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSlateBrush m_Brush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DownLeftStat;
    
    UPROPERTY()
    FTriangleStatsWidgetDownLeftStatDelegate DownLeftStatDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UpStat;
    
    UPROPERTY()
    FTriangleStatsWidgetUpStatDelegate UpStatDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DownRightStat;
    
    UPROPERTY()
    FTriangleStatsWidgetDownRightStatDelegate DownRightStatDelegate;
    
    UPROPERTY(EditAnywhere)
    FColor m_color;
    
    UPROPERTY(EditAnywhere)
    FColor m_TriangleColor;
    
    UPROPERTY(EditAnywhere)
    FColor m_CrossColor;
    
    UPROPERTY(EditAnywhere)
    float m_fTriangleLineWidth;
    
    UPROPERTY(EditAnywhere)
    float m_fCrossLineWidth;
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetUpValue(float _fValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetDownRightValue(float _fValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetDownLeftValue(float _fValue);
    
    UTriangleStatsWidget();
};

