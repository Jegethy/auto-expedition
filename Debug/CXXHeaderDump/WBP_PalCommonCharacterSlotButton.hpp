#ifndef UE4SS_SDK_WBP_PalCommonCharacterSlotButton_HPP
#define UE4SS_SDK_WBP_PalCommonCharacterSlotButton_HPP

class UWBP_PalCommonCharacterSlotButton_C : public UWBP_PalCharacterSlotButtonBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0520 (size: 0x8)
    class UWidgetAnimation* Anm_UnselectToSelect;                                     // 0x0528 (size: 0x8)
    class UWidgetAnimation* Anm_push;                                                 // 0x0530 (size: 0x8)
    class UCanvasPanel* CanvasPanel_36;                                               // 0x0538 (size: 0x8)
    class UImage* Check_0;                                                            // 0x0540 (size: 0x8)
    class UImage* Check_1;                                                            // 0x0548 (size: 0x8)
    class UImage* Check_2;                                                            // 0x0550 (size: 0x8)
    class UImage* FocusedFrame;                                                       // 0x0558 (size: 0x8)
    class UOverlay* Overlay_Select;                                                   // 0x0560 (size: 0x8)
    class UImage* PushEff;                                                            // 0x0568 (size: 0x8)
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot;                  // 0x0570 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0578 (size: 0x8)
    bool bIsDisplayDopingEffect;                                                      // 0x0580 (size: 0x1)
    bool bCheckAnimPlayed;                                                            // 0x0581 (size: 0x1)

    void SetEnable_GreyoutOnly(bool IsEnable);
    void SetSearchResultActive(bool bAvtive);
    void SetEnable(bool IsEnable);
    void SetOverrideSize(FVector2D NewSize);
    void RegisterCharacterSlotWidget(class UWBP_PalCharacterSlotBase_C*& characterSlotWidget);
    void RegisterButton(class UCommonButtonBase*& Button);
    void OnInitialized();
    void PlayFocusAnim(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void PlayUnfocusAnim(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void Destruct();
    void AnmEvent_BasePal(bool Enable);
    void AnmEvent_ConsumePal(bool Enable);
    void AnmEvent_SelectPal(bool IsEnable);
    void AnmEvent_RedCheck(bool bIsChecked);
    void AnmEvent_Check(bool bCheck);
    void AnmEvent_ForceUncheck();
    void ExecuteUbergraph_WBP_PalCommonCharacterSlotButton(int32 EntryPoint);
}; // Size: 0x582

#endif
