#ifndef UE4SS_SDK_WBP_Expedition_PalList_HPP
#define UE4SS_SDK_WBP_Expedition_PalList_HPP

class UWBP_Expedition_PalList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UImage* Icon_NonOwnership;                                                  // 0x0288 (size: 0x8)
    class UImage* Icon_Target;                                                        // 0x0290 (size: 0x8)
    class UImage* Image_Focus_CloseBtn;                                               // 0x0298 (size: 0x8)
    class UImage* Image_Focus_Flare;                                                  // 0x02A0 (size: 0x8)
    class UImage* Image_Focus_Frame;                                                  // 0x02A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalLevel_Value;                                    // 0x02B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalName;                                           // 0x02B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PowerNum;                                          // 0x02C0 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x02C8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02D0 (size: 0x8)
    FWBP_Expedition_PalList_COnClicked OnClicked;                                     // 0x02D8 (size: 0x10)
    void OnClicked(class UWBP_Expedition_PalList_C* Widget);
    FPalUIMapObjectCharacterTeamMissionIndividual MyInfo;                             // 0x02E8 (size: 0x50)
    FWBP_Expedition_PalList_COnHovered OnHovered;                                     // 0x0338 (size: 0x10)
    void OnHovered(class UWBP_Expedition_PalList_C* Widget);

    void GetAssignInfo(FPalUIMapObjectCharacterTeamMissionIndividual& AssignInfo);
    void Setup(FPalUIMapObjectCharacterTeamMissionIndividual AssignInfo);
    void BndEvt__WBP_Expedition_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Expedition_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Expedition_PalList(int32 EntryPoint);
    void OnHovered__DelegateSignature(class UWBP_Expedition_PalList_C* Widget);
    void OnClicked__DelegateSignature(class UWBP_Expedition_PalList_C* Widget);
}; // Size: 0x348

#endif
