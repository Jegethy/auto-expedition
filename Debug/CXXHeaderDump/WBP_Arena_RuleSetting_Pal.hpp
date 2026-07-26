#ifndef UE4SS_SDK_WBP_Arena_RuleSetting_Pal_HPP
#define UE4SS_SDK_WBP_Arena_RuleSetting_Pal_HPP

class UWBP_Arena_RuleSetting_Pal_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UHorizontalBox* Horizontal_Title_Ban_1;                                     // 0x0280 (size: 0x8)
    class UHorizontalBox* HorizontalBox_65;                                           // 0x0288 (size: 0x8)
    class UScrollBox* ScrollBox;                                                      // 0x0290 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton_BanAll;                               // 0x0298 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton_EnableAll;                            // 0x02A0 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x02A8 (size: 0x8)
    class UWrapBox* WrapBox;                                                          // 0x02B0 (size: 0x8)
    FWBP_Arena_RuleSetting_Pal_COnCloseButtonClicked OnCloseButtonClicked;            // 0x02B8 (size: 0x10)
    void OnCloseButtonClicked();
    TMap<class FName, class UWBP_Arena_RuleSetting_PalListButton_C*> PalList;         // 0x02C8 (size: 0x50)
    FWBP_Arena_RuleSetting_Pal_COnToggleCharacterRestrict OnToggleCharacterRestrict;  // 0x0318 (size: 0x10)
    void OnToggleCharacterRestrict(FName CharacterID, class UWBP_Arena_RuleSetting_PalListButton_C* Widget);
    FWBP_Arena_RuleSetting_Pal_COnChangeAll OnChangeAll;                              // 0x0328 (size: 0x10)
    void OnChangeAll(bool IsBan);

    void IsCharacterEncounted(FName CharacterID, bool& Encounted);
    void OnCharacterButtonClick(FName CharacterID);
    void SetupPalList();
    void Setup(TArray<FPalDataTableRowName_PalMonsterData>& RestrictPals, bool Changeable);
    void BndEvt__WBP_Arena_RuleSetting_Pal_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void OnInitialized();
    void BndEvt__WBP_Arena_RuleSetting_Pal_WBP_CommonButton_BanAll_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__WBP_Arena_RuleSetting_Pal_WBP_CommonButton_EnableAll_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_Arena_RuleSetting_Pal(int32 EntryPoint);
    void OnChangeAll__DelegateSignature(bool IsBan);
    void OnToggleCharacterRestrict__DelegateSignature(FName CharacterID, class UWBP_Arena_RuleSetting_PalListButton_C* Widget);
    void OnCloseButtonClicked__DelegateSignature();
}; // Size: 0x338

#endif
