#ifndef UE4SS_SDK_WBP_MainMenu_PalSkillSwap_HPP
#define UE4SS_SDK_WBP_MainMenu_PalSkillSwap_HPP

class UWBP_MainMenu_PalSkillSwap_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0480 (size: 0x8)
    class UImage* BaseBlack;                                                          // 0x0488 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Title;                                  // 0x0490 (size: 0x8)
    class UScrollBox* ScrollBox_141;                                                  // 0x0498 (size: 0x8)
    class UVerticalBox* VerticalBox_SkillList;                                        // 0x04A0 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Active_C* WBP_MainMenu_Pal_Skill_Active;            // 0x04A8 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Active_C* WBP_MainMenu_Pal_Skill_Active_1;          // 0x04B0 (size: 0x8)
    class UWBP_MainMenu_PalSkillInfo_C* WBP_MainMenu_PalSkillInfo;                    // 0x04B8 (size: 0x8)
    FWBP_MainMenu_PalSkillSwap_COnSelected OnSelected;                                // 0x04C0 (size: 0x10)
    void OnSelected(EPalWazaID SelectedWazaId);
    FDataTableRowHandle SkillSwapMsgID;                                               // 0x04D0 (size: 0x10)
    FDataTableRowHandle SkillSwapNothingMsgID;                                        // 0x04E0 (size: 0x10)

    class UWidget* BP_GetDesiredFocusTarget();
    FEventReply On_BaseBlack_MouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnClicked_Internal(class UWBP_MainMenu_Pal_Skill_Active_C* SkillWidget);
    void OnUnhovered_Internal(class UWBP_MainMenu_Pal_Skill_Active_C* SkillWidget);
    void OnHovered_Internal(class UWBP_MainMenu_Pal_Skill_Active_C* SkillWidget);
    void Setup(TArray<EPalWazaID>& MasteredSkills, TArray<EPalWazaID>& EquipedSkills);
    void Construct();
    void OnSetup();
    void OnClosed();
    void Destruct();
    void ExecuteUbergraph_WBP_MainMenu_PalSkillSwap(int32 EntryPoint);
    void OnSelected__DelegateSignature(EPalWazaID SelectedWazaId);
}; // Size: 0x4F0

#endif
