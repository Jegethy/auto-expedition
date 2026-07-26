#ifndef UE4SS_SDK_WBP_Common_NumArrow_HPP
#define UE4SS_SDK_WBP_Common_NumArrow_HPP

class UWBP_Common_NumArrow_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Anm_SelectArrow;                                          // 0x0458 (size: 0x8)
    class UImage* ArrowHover;                                                         // 0x0460 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0468 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher;                                            // 0x0470 (size: 0x8)
    FWBP_Common_NumArrow_COnClicked OnClicked;                                        // 0x0478 (size: 0x10)
    void OnClicked(int32 Progress);
    FName InputActionName;                                                            // 0x0488 (size: 0x8)
    bool DoubleArrow;                                                                 // 0x0490 (size: 0x1)
    int32 ProgressValue;                                                              // 0x0494 (size: 0x4)
    FTimerHandle PressedTimer;                                                        // 0x0498 (size: 0x8)
    double ProgressMultiplier;                                                        // 0x04A0 (size: 0x8)
    int32 HoldCount;                                                                  // 0x04A8 (size: 0x4)

    void AnmEvent_Trigger();
    void OnArrowClicked();
    void BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void PreConstruct(bool IsDesignTime);
    void OnArrowPressed();
    void OnArrowReleased();
    void ArrowClicked_Progressive();
    void ExecuteUbergraph_WBP_Common_NumArrow(int32 EntryPoint);
    void OnClicked__DelegateSignature(int32 Progress);
}; // Size: 0x4AC

#endif
