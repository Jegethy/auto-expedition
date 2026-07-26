#ifndef UE4SS_SDK_WBP_Altar_SelectStage_HPP
#define UE4SS_SDK_WBP_Altar_SelectStage_HPP

class UWBP_Altar_SelectStage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Image_Dot;                                                          // 0x0280 (size: 0x8)
    class UImage* Image_Dot_1;                                                        // 0x0288 (size: 0x8)
    class UImage* Image_Dot_2;                                                        // 0x0290 (size: 0x8)
    class UImage* Image_Dot_3;                                                        // 0x0298 (size: 0x8)
    class UImage* Image_Title_Base;                                                   // 0x02A0 (size: 0x8)
    class UImage* Image_Title_Dot;                                                    // 0x02A8 (size: 0x8)
    class UImage* Image_Title_Dot_1;                                                  // 0x02B0 (size: 0x8)
    class UImage* Image_Title_Dot_2;                                                  // 0x02B8 (size: 0x8)
    class UImage* Image_Title_Dot_3;                                                  // 0x02C0 (size: 0x8)
    class UImage* Image_Title_Line;                                                   // 0x02C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Title;                                             // 0x02D0 (size: 0x8)
    class UWBP_Altar_SelectStage_Button_C* WBP_Altar_SelectStage_Button_0;            // 0x02D8 (size: 0x8)
    class UWBP_Altar_SelectStage_Button_C* WBP_Altar_SelectStage_Button_1;            // 0x02E0 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x02E8 (size: 0x8)
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;                                // 0x02F0 (size: 0x8)
    FWBP_Altar_SelectStage_COnClickedCloseButton OnClickedCloseButton;                // 0x02F8 (size: 0x10)
    void OnClickedCloseButton();
    FWBP_Altar_SelectStage_COnClickedBattleTypeButton OnClickedBattleTypeButton;      // 0x0308 (size: 0x10)
    void OnClickedBattleTypeButton(EPalRaidBossBattleType BattleType);
    FWBP_Altar_SelectStage_COnClickedSubmitButton OnClickedSubmitButton;              // 0x0318 (size: 0x10)
    void OnClickedSubmitButton();

    void SetUnselectAll();
    void Setup();
    void BndEvt__WBP_Altar_SelectStage_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_Altar_SelectStage(int32 EntryPoint);
    void OnClickedSubmitButton__DelegateSignature();
    void OnClickedBattleTypeButton__DelegateSignature(EPalRaidBossBattleType BattleType);
    void OnClickedCloseButton__DelegateSignature();
}; // Size: 0x328

#endif
