#ifndef UE4SS_SDK_WBP_PalCommonItemSlotButton_HPP
#define UE4SS_SDK_WBP_PalCommonItemSlotButton_HPP

class UWBP_PalCommonItemSlotButton_C : public UWBP_PalItemSlotButtonBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0610 (size: 0x8)
    class UWidgetAnimation* Anm_UnselectToSelect;                                     // 0x0618 (size: 0x8)
    class UWidgetAnimation* Anm_Unlock;                                               // 0x0620 (size: 0x8)
    class UWidgetAnimation* Anm_Lock;                                                 // 0x0628 (size: 0x8)
    class UWidgetAnimation* Anm_push;                                                 // 0x0630 (size: 0x8)
    class UWidgetAnimation* Anm_Unfocus;                                              // 0x0638 (size: 0x8)
    class UWidgetAnimation* Anm_Focus;                                                // 0x0640 (size: 0x8)
    class UImage* FocusedFrame;                                                       // 0x0648 (size: 0x8)
    class UImage* FocusedFrame_1;                                                     // 0x0650 (size: 0x8)
    class UImage* PushEff;                                                            // 0x0658 (size: 0x8)
    class UImage* PushEff_1;                                                          // 0x0660 (size: 0x8)
    class UWBP_PalCommonItemSlot_C* WBP_PalCommonItemSlot;                            // 0x0668 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0670 (size: 0x8)

    void RegisterItemSlotWidget(class UWBP_PalItemSlotBase_C*& itemSlotWidget);
    void RegisterButton(class UCommonButtonBase*& Button);
    void AnmEvent_Lock();
    void AnmEvent_Unlock();
    void AnmEvent_Focus();
    void AnmEvent_Unfocus();
    void AnmEvent_Push();
    void OnInitialized();
    void PlayFocusAnim(class UWBP_PalItemSlotButtonBase_C* Widget);
    void PlayUnfocusAnim(class UWBP_PalItemSlotButtonBase_C* Widget);
    void PlayPushAnim(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void PlayDropAnim(class UWBP_PalItemSlotButtonBase_C* Widget);
    void LiftedEvent(int32 LiftNum, class UWBP_PalItemSlotButtonBase_C* Widget);
    void DraggedEvent(class UWBP_PalItemSlotButtonBase_C* Widget);
    void ExecuteUbergraph_WBP_PalCommonItemSlotButton(int32 EntryPoint);
}; // Size: 0x678

#endif
