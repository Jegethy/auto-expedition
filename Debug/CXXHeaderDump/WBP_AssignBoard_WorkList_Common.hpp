#ifndef UE4SS_SDK_WBP_AssignBoard_WorkList_Common_HPP
#define UE4SS_SDK_WBP_AssignBoard_WorkList_Common_HPP

class UWBP_AssignBoard_WorkList_Common_C : public UWBP_AssignBoard_WorkListBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class UWidgetAnimation* Anm_Unselect;                                             // 0x02D0 (size: 0x8)
    class UWidgetAnimation* Anm_Selected;                                             // 0x02D8 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToDisable;                                      // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x02E8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_AssignedPal;                                  // 0x02F0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Suitability;                                  // 0x02F8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_WorkNum;                                      // 0x0300 (size: 0x8)
    class UImage* Image_BuildingIcon;                                                 // 0x0308 (size: 0x8)
    class UImage* Image_RecipeIcon;                                                   // 0x0310 (size: 0x8)
    class UImage* Image_WorkStatus_Base;                                              // 0x0318 (size: 0x8)
    class UOverlay* Overlay_Recipe;                                                   // 0x0320 (size: 0x8)
    class UOverlay* Overlay_WorkStatus;                                               // 0x0328 (size: 0x8)
    class USizeBox* SizeBox_WorkIcon_0;                                               // 0x0330 (size: 0x8)
    class USizeBox* SizeBox_WorkIcon_1;                                               // 0x0338 (size: 0x8)
    class USizeBox* SizeBox_WorkIcon_2;                                               // 0x0340 (size: 0x8)
    class UBP_PalTextBlock_C* Text_AssignTargetName;                                  // 0x0348 (size: 0x8)
    class UWBP_IconPalWork_C* WBP_IconPalWork_0;                                      // 0x0350 (size: 0x8)
    class UWBP_IconPalWork_C* WBP_IconPalWork_1;                                      // 0x0358 (size: 0x8)
    class UWBP_IconPalWork_C* WBP_IconPalWork_2;                                      // 0x0360 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0368 (size: 0x8)
    bool IsSelectingAnm;                                                              // 0x0370 (size: 0x1)
    bool IsEnableAnm;                                                                 // 0x0371 (size: 0x1)
    TArray<class UWBP_IconPalWork_C*> WorkIconArray;                                  // 0x0378 (size: 0x10)
    TArray<class USizeBox*> WorkIconSizeBoxArray;                                     // 0x0388 (size: 0x10)
    FTimerHandle UpdateAssignedCharacterDetailTimerHandle;                            // 0x0398 (size: 0x8)
    int32 AssignableMaxNum;                                                           // 0x03A0 (size: 0x4)

    void OnTimer_UpdateAssignedCharacterDetail();
    void GetFocusTarget(class UWidget*& TargetWidget);
    void Unbind();
    void ResetAssignedChaarcterSlotDetail();
    void OnUpdateAssignedCharacter(class UPalWorkBase* Work);
    void SetupAssignedCharacterSlot();
    void SetupWorkSuitability();
    void SetupTitle();
    void SetupWorkNum();
    void OnUpdateWorkState(class UPalWorkBase* Work);
    void SetupWorkStatus();
    void Setup();
    void SetupRecipeDetail();
    void SetupAssignTargetName();
    void AnmEvent_Hover();
    void AnmEvent_Unhover();
    void AnmEvent_Select();
    void AnmEvent_Unselect();
    void AnmEvent_Enable();
    void AnmEvent_DIsable();
    void Construct();
    void BndEvt__WBP_AssignBoard_WorkList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_AssignBoard_WorkList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_AssignBoard_WorkList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void Destruct();
    void ExecuteUbergraph_WBP_AssignBoard_WorkList_Common(int32 EntryPoint);
}; // Size: 0x3A4

#endif
