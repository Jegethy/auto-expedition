#ifndef UE4SS_SDK_WBP_BossDemoBase_HPP
#define UE4SS_SDK_WBP_BossDemoBase_HPP

class UWBP_BossDemoBase_C : public UPalUserWidget
{

    void CheckCutsceneLength();
    void GetOpenWidgetAnimation(class UWidgetAnimation*& OpenWidgetAnimation);
    void OnStartEvent();
    void SetupText();
}; // Size: 0x450

#endif
