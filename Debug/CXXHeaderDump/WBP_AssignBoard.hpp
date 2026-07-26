#ifndef UE4SS_SDK_WBP_AssignBoard_HPP
#define UE4SS_SDK_WBP_AssignBoard_HPP

class UWBP_AssignBoard_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UCanvasPanel* Canvas_RemoveGuide;                                           // 0x0458 (size: 0x8)
    class UCanvasPanel* Canvas_SortButton;                                            // 0x0460 (size: 0x8)
    class UImage* Image_860;                                                          // 0x0468 (size: 0x8)
    class UImage* Image_Base_Pal_Select;                                              // 0x0470 (size: 0x8)
    class UImage* Image_Base_WorkList_Select;                                         // 0x0478 (size: 0x8)
    class UImage* Image_Frame_Pal;                                                    // 0x0480 (size: 0x8)
    class UImage* Image_Frame_Pal_Select;                                             // 0x0488 (size: 0x8)
    class UImage* Image_Frame_WorkList;                                               // 0x0490 (size: 0x8)
    class UImage* Image_Frame_WorkList_Select;                                        // 0x0498 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SortType;                                          // 0x04A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_WorkerNum;                                         // 0x04A8 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;        // 0x04B0 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x04B8 (size: 0x8)
    class UWBP_NoData_C* WBP_NoData;                                                  // 0x04C0 (size: 0x8)
    class UWBP_PalCharacterScrollList_C* WBP_PalCharacterScrollList_Worker;           // 0x04C8 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList_WorkList;               // 0x04D0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Sort;                     // 0x04D8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x04E0 (size: 0x8)
    TSoftObjectPtr<UPalIndividualCharacterContainer> SoftWorkerCharacterContainer;    // 0x04E8 (size: 0x30)
    FWBP_AssignBoard_COnClickedWorkerSlot OnClickedWorkerSlot;                        // 0x0518 (size: 0x10)
    void OnClickedWorkerSlot(class UWBP_PalCharacterSlotButtonBase_C* SlotButtonBase);
    bool IsSelectingWorker;                                                           // 0x0528 (size: 0x1)
    FWBP_AssignBoard_COnClickedWork OnClickedWork;                                    // 0x0530 (size: 0x10)
    void OnClickedWork(class UWBP_AssignBoard_WorkListBase_C* Widget);
    TMap<class EPalWorkType, class TSubclassOf<UUserWidget>> WorkTypeWidgetMap;       // 0x0540 (size: 0x50)
    class UWBP_AssignBoard_WorkListBase_C* SelectedWorkWidget;                        // 0x0590 (size: 0x8)
    FPalUIActionBindData RemoveAssignActionHandle;                                    // 0x0598 (size: 0x4)
    FWBP_AssignBoard_COnTriggerRemoveAssignShortcut OnTriggerRemoveAssignShortcut;    // 0x05A0 (size: 0x10)
    void OnTriggerRemoveAssignShortcut();
    FPalDataTableRowName_UIInputAction RemoveAssignInputAction;                       // 0x05B0 (size: 0x8)
    FWBP_AssignBoard_COnHoveredWork OnHoveredWork;                                    // 0x05B8 (size: 0x10)
    void OnHoveredWork(class UWBP_AssignBoard_WorkListBase_C* Widget);
    FWBP_AssignBoard_COnUnhoveredWork OnUnhoveredWork;                                // 0x05C8 (size: 0x10)
    void OnUnhoveredWork(class UWBP_AssignBoard_WorkListBase_C* Widget);
    TMap<class FGuid, class UWBP_AssignBoard_WorkListBase_C*> WorkListWidgetMap;      // 0x05D8 (size: 0x50)
    FWBP_AssignBoard_COnClickedSortButton OnClickedSortButton;                        // 0x0628 (size: 0x10)
    void OnClickedSortButton();
    FWBP_AssignBoard_COnClickedCloseButton OnClickedCloseButton;                      // 0x0638 (size: 0x10)
    void OnClickedCloseButton();

    void CreateWorkListWidget(FPalUIBaseCampWorkFixedAssignInfo AssignInfo, class UWBP_AssignBoard_WorkListBase_C*& createdWidget);
    void IsExistWorkListWidget(class UWBP_AssignBoard_WorkListBase_C* Widget, bool& IsExist);
    void Set Sort Name(FText SortNameText);
    void RegisterAction_RemoveAssignShortcut();
    void OnUnhoveredWork_Internal(class UWBP_AssignBoard_WorkListBase_C* Widget);
    void OnHoveredWork_Internal(class UWBP_AssignBoard_WorkListBase_C* Widget);
    void OnTriggerRemoveAssignShortcut_Internal();
    void OnSelectedWork_Internal(class UWBP_AssignBoard_WorkListBase_C* Widget);
    void IsSelectiongWorkerMode(bool& IsSelecting);
    void EndSelectWorker();
    void StartSelectWorker(class UWBP_AssignBoard_WorkListBase_C* TargetWorkWIdget);
    void GetWorkerTopButton(class UWidget*& Widget);
    void GetWorkListTopButton(class UWidget*& Widget);
    void SetAssignInfo(TArray<FPalUIBaseCampWorkFixedAssignInfo>& AssignInfo, bool ForceRefresh);
    void OnUpdateAssignInfo(class UPalUIBaseCampWorkFixedAssignManageModel* Model);
    void OnUnhoveredWorkerButton_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnHoveredWorkerButton_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnUpdateWorkerSlots_Internal(class UPalIndividualCharacterContainer* Container);
    void OnClickedWorkerButton_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void ResetWorkerContainerEvent();
    void SetupWorkerContainerEvent(class UPalIndividualCharacterContainer* Container);
    void SetWorkerCharacterContainer(class UPalIndividualCharacterContainer* Container);
    void Setup();
    void AnmEvent_SelectWork(class UWBP_AssignBoard_WorkListBase_C* SelectWidget);
    void AnmEvent_UnselectWork();
    void Destruct();
    void BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_0_OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* createdSlot);
    void BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_1_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_3_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_4_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_AssignBoard_WBP_PalInvisibleButton_Sort_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_AssignBoard_WBP_Menu_btn_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_AssignBoard(int32 EntryPoint);
    void OnClickedCloseButton__DelegateSignature();
    void OnClickedSortButton__DelegateSignature();
    void OnUnhoveredWork__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget);
    void OnHoveredWork__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget);
    void OnTriggerRemoveAssignShortcut__DelegateSignature();
    void OnClickedWork__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget);
    void OnClickedWorkerSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButtonBase);
}; // Size: 0x648

#endif
