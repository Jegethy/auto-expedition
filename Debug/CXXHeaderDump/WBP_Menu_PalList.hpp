#ifndef UE4SS_SDK_WBP_Menu_PalList_HPP
#define UE4SS_SDK_WBP_Menu_PalList_HPP

class UWBP_Menu_PalList_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0658 (size: 0x8)
    class UWidgetAnimation* Anm_Pal_Alive;                                            // 0x0660 (size: 0x8)
    class UWidgetAnimation* Anm_Pal_Dead;                                             // 0x0668 (size: 0x8)
    class UWidgetAnimation* Anm_EmptyNormalToFocus;                                   // 0x0670 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0678 (size: 0x8)
    class UWidgetAnimation* Anm_Open_normal;                                          // 0x0680 (size: 0x8)
    class UWidgetAnimation* Anm_Normal;                                               // 0x0688 (size: 0x8)
    class UWidgetAnimation* Anm_Focus;                                                // 0x0690 (size: 0x8)
    class UWidgetAnimation* Anm_push;                                                 // 0x0698 (size: 0x8)
    class UWidgetAnimation* Anm_Open_focus;                                           // 0x06A0 (size: 0x8)
    class UImage* Empty;                                                              // 0x06A8 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x06B0 (size: 0x8)
    class UImage* Image_Icon_Locked;                                                  // 0x06B8 (size: 0x8)
    class UProgressBar* ProgressBar_219;                                              // 0x06C0 (size: 0x8)
    class UProgressBar* ProgressBar_Hunger;                                           // 0x06C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Pal_hp_L;                                          // 0x06D0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Pal_hp_R;                                          // 0x06D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Pal_Level;                                         // 0x06E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Pal_LvText;                                        // 0x06E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Pal_name;                                          // 0x06F0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x06F8 (size: 0x8)
    FWBP_Menu_PalList_COnClickedPanel OnClickedPanel;                                 // 0x0700 (size: 0x10)
    void OnClickedPanel(class UPalIndividualCharacterHandle* Handle);
    FWBP_Menu_PalList_COnHoveredPanel OnHoveredPanel;                                 // 0x0710 (size: 0x10)
    void OnHoveredPanel(class UPalIndividualCharacterHandle* Handle);
    EPalWazaID CurrentWazaIdToUse;                                                    // 0x0720 (size: 0x2)
    FWBP_Menu_PalList_COnUnhoveredPanel OnUnhoveredPanel;                             // 0x0728 (size: 0x10)
    void OnUnhoveredPanel();
    bool Interactable;                                                                // 0x0738 (size: 0x1)
    class UAkAudioEvent* ClickEventTmp;                                               // 0x0740 (size: 0x8)

    void OnUpdateSkin(const FName& NewSkinName);
    void SetMuteClickEvent(bool IsMute);
    void SetCurrentWazaId(EPalWazaID WazaID);
    void SetInteractable(bool IsInteractable);
    void UpdateWazaLearnable(class UPalIndividualCharacterParameter* Individual Parameter, EPalWazaID WazaID);
    void Focus();
    void Unbind();
    void BindFromHandle(class UPalIndividualCharacterHandle* targetHandle);
    void UpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void UpdateFavorite(int32 NewIndex);
    void UpdateHunger(double Now, double Max);
    void UpdateNickname(FString NewNickName);
    void Update Level(int32 NewLevel);
    void AnmEvent_Push();
    void AnmEvent_Open();
    void AnmEvent_Focus();
    void AnmEvent_Unfocus();
    void AnmEvent_ResetPush();
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_Menu_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Menu_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Menu_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Menu_PalList(int32 EntryPoint);
    void OnUnhoveredPanel__DelegateSignature();
    void OnHoveredPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle);
    void OnClickedPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle);
}; // Size: 0x748

#endif
