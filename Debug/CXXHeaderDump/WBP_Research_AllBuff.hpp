#ifndef UE4SS_SDK_WBP_Research_AllBuff_HPP
#define UE4SS_SDK_WBP_Research_AllBuff_HPP

class UWBP_Research_AllBuff_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UPalScrollBox* PalScrollBox_0;                                              // 0x0280 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0288 (size: 0x8)
    class UWrapBox* WrapBox_BuffList;                                                 // 0x0290 (size: 0x8)
    FWBP_Research_AllBuff_COnAllBuffPanelClose OnAllBuffPanelClose;                   // 0x0298 (size: 0x10)
    void OnAllBuffPanelClose();

    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void Setup(const TArray<FPalUIGuildLabPassiveEffectInfo>& Effects);
    void BndEvt__WBP_Research_AllBuff_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_Research_AllBuff(int32 EntryPoint);
    void OnAllBuffPanelClose__DelegateSignature();
}; // Size: 0x2A8

#endif
