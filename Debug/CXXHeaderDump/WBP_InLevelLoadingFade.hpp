#ifndef UE4SS_SDK_WBP_InLevelLoadingFade_HPP
#define UE4SS_SDK_WBP_InLevelLoadingFade_HPP

class UWBP_InLevelLoadingFade_C : public UWBP_PalFadeWidgetBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0458 (size: 0x8)
    class UWidgetAnimation* Fade;                                                     // 0x0460 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Crossplay;                              // 0x0468 (size: 0x8)
    class UWBP_LoadingScreen_C* WBP_LoadingScreen;                                    // 0x0470 (size: 0x8)
    class UWBP_Title_ProgressBar_C* WBP_Title_ProgressBar;                            // 0x0478 (size: 0x8)
    int32 Step;                                                                       // 0x0480 (size: 0x4)
    bool ProgressDisplay;                                                             // 0x0484 (size: 0x1)

    void FadeIn();
    void FadeOut();
    void Setup_ForOverride();
    void Finished_50648C2D41952F044CFD8F9629D4027A();
    void Finished_BCA2D9DB46EBD8925174F885E2A96DAA();
    void AnmEvent_FadeOut();
    void AnmEvent_FadeIn();
    void Construct();
    void Destruct();
    void Setup(class UPalHUDDispatchParameter_FadeWidget* FadeParameter);
    void UpdateProgressStep(int32 AddStep, int32 MaxStep);
    void ExecuteUbergraph_WBP_InLevelLoadingFade(int32 EntryPoint);
}; // Size: 0x485

#endif
