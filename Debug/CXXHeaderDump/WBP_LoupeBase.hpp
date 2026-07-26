#ifndef UE4SS_SDK_WBP_LoupeBase_HPP
#define UE4SS_SDK_WBP_LoupeBase_HPP

class UWBP_LoupeBase_C : public UPalUIOffScreenLoupeBase
{
    FVector2D targetPosition;                                                         // 0x04B0 (size: 0x10)
    FVector2D NowPosition;                                                            // 0x04C0 (size: 0x10)
    bool isFirstUpdate;                                                               // 0x04D0 (size: 0x1)
    bool isInterpolationTranslate;                                                    // 0x04D1 (size: 0x1)
    double interpolationRate;                                                         // 0x04D8 (size: 0x8)

    void AdjustAlpha(FVector2D finalScreenPos, double& Alpha);
    void GetTranslationTarget(class UWidget*& Widget);
    void SetFinalWidgetOpacity(double calcedOpacity);
    void RoundScreenPosition(FVector2D ScreenPosition, FVector2D& calcedPosition);
    void UpdateLoupeTranslation();
    void GetLoupeWidgetSize(FVector2D& widgetSize);
    void UpdateArrowImageAngle(double newAngle);
    void UpdatePositionAndVisibility(double Dot, FVector rootLocation, FVector TargetLocation);
}; // Size: 0x4E0

#endif
