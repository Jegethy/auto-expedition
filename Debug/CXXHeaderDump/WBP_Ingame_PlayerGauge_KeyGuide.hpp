#ifndef UE4SS_SDK_WBP_Ingame_PlayerGauge_KeyGuide_HPP
#define UE4SS_SDK_WBP_Ingame_PlayerGauge_KeyGuide_HPP

class UWBP_Ingame_PlayerGauge_KeyGuide_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0280 (size: 0x8)
    class UImage* Base;                                                               // 0x0288 (size: 0x8)
    class UImage* Image_Grd;                                                          // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_KeyGuide;                                          // 0x0298 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon_ChangeBallAiming_1; // 0x02A0 (size: 0x8)
    FName bindActionName;                                                             // 0x02A8 (size: 0x8)
    TMap<class FName, class FDataTableRowHandle> MsgIDMap;                            // 0x02B0 (size: 0x50)
    bool OverrideActionName;                                                          // 0x0300 (size: 0x1)

    void SetTitleText(FText newText);
    void AnmEvent_In();
    void OnInitialized();
    void OverrideUIText(FName OverrideActionName);
    void ResetUIText();
    void ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide(int32 EntryPoint);
}; // Size: 0x301

#endif
