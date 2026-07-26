#ifndef UE4SS_SDK_WBP_OtomoLoupe_HPP
#define UE4SS_SDK_WBP_OtomoLoupe_HPP

class UWBP_OtomoLoupe_C : public UWBP_LoupeBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    class UWBP_PalLoupe_C* WBP_PalLoupe;                                              // 0x04E8 (size: 0x8)
    class UPalIndividualCharacterHandle* targetHandle;                                // 0x04F0 (size: 0x8)

    void GetLoupeWidgetSize(FVector2D& widgetSize);
    void GetTranslationTarget(class UWidget*& Widget);
    void RoundScreenPosition(FVector2D ScreenPosition, FVector2D& calcedPosition);
    void UpdateArrowImageAngle(double newAngle);
    void SetFinalWidgetOpacity(double calcedOpacity);
    void CalcScreenPosition();
    bool IsEnableLoupe();
    void GetTargetWidgetSize(FVector2D& outVector);
    void GetTargetWorldLocation(FVector& outVector);
    void Setup();
    void OnInactiveOtomo();
    void OnActivateOtomo();
    void OnInitialized();
    void ExecuteUbergraph_WBP_OtomoLoupe(int32 EntryPoint);
}; // Size: 0x4F8

#endif
