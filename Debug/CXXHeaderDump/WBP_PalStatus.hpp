#ifndef UE4SS_SDK_WBP_PalStatus_HPP
#define UE4SS_SDK_WBP_PalStatus_HPP

class UWBP_PalStatus_C : public UPalUICharacterStatus
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UCanvasPanel* Canvas_CaptureImage;                                          // 0x0480 (size: 0x8)
    class UImage* Image_Floor;                                                        // 0x0488 (size: 0x8)
    class UImage* Image_Floor_1;                                                      // 0x0490 (size: 0x8)
    class UImage* Image_PalReflection;                                                // 0x0498 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NothingPal;                                        // 0x04A0 (size: 0x8)
    class UWBP_MainMenu_Pal_00_C* WBP_MainMenu_Pal_00;                                // 0x04A8 (size: 0x8)
    class UWBP_PalMonsterInframeRender_C* WBP_PalInframeRender;                       // 0x04B0 (size: 0x8)
    TArray<class UPalIndividualCharacterHandle*> displayHandles;                      // 0x04B8 (size: 0x10)
    class UTextureRenderTarget2D* Render Target;                                      // 0x04C8 (size: 0x8)
    int32 lastShowHandleIndex;                                                        // 0x04D0 (size: 0x4)
    int32 lastShowRenderPalIndex;                                                     // 0x04D4 (size: 0x4)
    FPalDataTableRowName_UIInputAction ToParameterDetailAction;                       // 0x04D8 (size: 0x8)
    FPalUIActionBindData ToParameterDetailActionHandle;                               // 0x04E0 (size: 0x4)
    FPalDataTableRowName_UIInputAction ToSkillDetailAction;                           // 0x04E4 (size: 0x8)
    FPalUIActionBindData ToSkillDetailActionHandle;                                   // 0x04EC (size: 0x4)
    bool IsOnePalModel;                                                               // 0x04F0 (size: 0x1)
    FPalDataTableRowName_UIInputAction FavoritePalAction;                             // 0x04F4 (size: 0x8)
    FPalDataTableRowName_UIInputAction DropPalAction;                                 // 0x04FC (size: 0x8)
    FPalUIActionBindData FavoritePalActionHandle;                                     // 0x0504 (size: 0x4)
    FPalUIActionBindData DropPalActionHandle;                                         // 0x0508 (size: 0x4)
    class UPalIndividualCharacterHandle* LastHoveredPalHandle;                        // 0x0510 (size: 0x8)
    FDataTableRowHandle DropPalDialogMsgID;                                           // 0x0518 (size: 0x10)
    FDataTableRowHandle CannotDropPalMsgID;                                           // 0x0528 (size: 0x10)

    void OnClosedCannotDropPalDialog(bool bResult);
    void OnClosedDropPalDialog(bool bResult);
    void OnTriggerDropPal();
    void UnhoveredAnyPalPanel_Internal();
    void HoveredAnyPalPanel_Internal(class UPalIndividualCharacterHandle* Handle);
    void ToSkillDetail();
    void Toggle Favorite Pal by Action();
    void ToParameterDetail();
    void Setup Input Action();
    void UnbindInputAction();
    void Is Editing Nick Name(bool& IsEditing);
    void BackToList();
    void ShouldBackList(bool& shouldBack);
    void Setup One Pal(class UPalIndividualCharacterHandle* CharacterHandle, bool Editable);
    class UWidget* BP_GetDesiredFocusTarget();
    void Get Panel Index from Handle(class UPalIndividualCharacterHandle* Handle, int32& Index, bool& IsValid);
    void Setup_MultiPal();
    void Setup_NothingPal();
    void Setup(TArray<class UPalIndividualCharacterHandle*>& Handles);
    void ClampInputNickName(FText InText, FText& clampedNickName);
    void NickNameFinalCheck(FText InText, TEnumAsByte<ETextCommit::Type> textCommit, FText& finalNickName);
    void Construct();
    void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_0_OnClickedAnyPalPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle);
    void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_1_OnHoveredAnyPalPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle);
    void Destruct();
    void OnCompletedCaptureActorSetup();
    void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_3_OnCommitedNickName__DelegateSignature(FText NewNickName);
    void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_5_OnSelectedChangeActiveSkill__DelegateSignature(class UPalIndividualCharacterHandle* targetHandle, EPalWazaID changeWazaID, EPalWazaID newWazaID);
    void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_4_OnRequestedRemoveWaza__DelegateSignature(EPalWazaID WazaID, class UPalIndividualCharacterHandle* targetHandle);
    void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_2_OnUnhoveredAnyPalPanel__DelegateSignature();
    void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_6_OnToggleFavoritePal__DelegateSignature(class UPalIndividualCharacterHandle* CharacterHandle);
    void ExecuteUbergraph_WBP_PalStatus(int32 EntryPoint);
}; // Size: 0x538

#endif
