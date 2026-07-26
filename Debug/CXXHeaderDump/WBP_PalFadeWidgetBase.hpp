#ifndef UE4SS_SDK_WBP_PalFadeWidgetBase_HPP
#define UE4SS_SDK_WBP_PalFadeWidgetBase_HPP

class UWBP_PalFadeWidgetBase_C : public UPalFadeWidgetBase
{
    class UPalHUDDispatchParameter_FadeWidget* FadeParameter;                         // 0x0450 (size: 0x8)

    void NotifyEndFadeIn();
    void NotifyStartFadeIn();
    void NotifyEndFadeOut();
    void NotifyStartFadeOut();
    void Setup_ForOverride();
    void Setup(class UPalHUDDispatchParameter_FadeWidget* FadeParameter);
    void FadeIn();
    void FadeOut();
}; // Size: 0x458

#endif
