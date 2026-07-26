#ifndef UE4SS_SDK_WBP_IngameConstruction_Paint_ColorPicker_HPP
#define UE4SS_SDK_WBP_IngameConstruction_Paint_ColorPicker_HPP

class UWBP_IngameConstruction_Paint_ColorPicker_C : public UUserWidget
{
    class UImage* Image_190;                                                          // 0x0278 (size: 0x8)
    class UImage* Image_229;                                                          // 0x0280 (size: 0x8)
    class UImage* Image_Color;                                                        // 0x0288 (size: 0x8)
    class UImage* Image_Line;                                                         // 0x0290 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x0298 (size: 0x8)

    void UpdateTarget(class UPalUIPaintModel* UIModel);
    void Deactivate();
    void ActivateTargetInfo(FLinearColor TargetColor);
    void SetupKeyGuide();
    void InitUI();
}; // Size: 0x2A0

#endif
