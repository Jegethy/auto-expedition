#ifndef UE4SS_SDK_WBP_BaseCampWorkFixedAssignManage_HPP
#define UE4SS_SDK_WBP_BaseCampWorkFixedAssignManage_HPP

class UWBP_BaseCampWorkFixedAssignManage_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0480 (size: 0x8)
    class UWBP_AssignBoard_C* WBP_AssignBoard;                                        // 0x0488 (size: 0x8)
    TSoftObjectPtr<UWBP_AssignBoard_WorkListBase_C> LastSelectedWorkListContentWidget; // 0x0490 (size: 0x30)
    TSoftObjectPtr<UWBP_AssignBoard_WorkListBase_C> LastHoveredWorkListContentWidget; // 0x04C0 (size: 0x30)
    EPalUIFixedAssignManageListSortType NowSortType;                                  // 0x04F0 (size: 0x1)
    TArray<EPalUIFixedAssignManageListSortType> SortTypeOrder;                        // 0x04F8 (size: 0x10)
    TMap<class EPalUIFixedAssignManageListSortType, class FDataTableRowHandle> SortTypeNameMap; // 0x0508 (size: 0x50)
    FPalDataTableRowName_UIInputAction SortInputAction;                               // 0x0558 (size: 0x8)

    void UpdateWidgetList(bool ForceReferesh);
    void OnTriggerSort();
    void GetRestoreFocusTarget_WorkList(class UWidget*& TargetWidget);
    void OnUpdateAssignInfo(class UPalUIBaseCampWorkFixedAssignManageModel* Model);
    void RemoveAssign(FPalUIBaseCampWorkFixedAssignInfo AssignInfo);
    void ProccessAssign(FPalUIBaseCampWorkFixedAssignInfo AssignInfo, class UPalIndividualCharacterSlot* Slot);
    void AlreadyFixedAssign(FPalUIBaseCampWorkFixedAssignInfo AssignInfo, class UPalIndividualCharacterSlot* TargetSlot, bool& IsAlreadyFixedAssign);
    void CanAssign(FPalUIBaseCampWorkFixedAssignInfo AssignInfo, class UPalIndividualCharacterSlot* TargetSlot, bool& CanAssign);
    void OnCancelAction();
    void GetModel(class UPalUIBaseCampWorkFixedAssignManageModel*& Model);
    class UWidget* BP_GetDesiredFocusTarget();
    void BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_0_OnClickedWorkerSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButtonBase);
    void OnSetup();
    void BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_1_OnClickedWork__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget);
    void Destruct();
    void OnClose();
    void BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_2_OnTriggerRemoveAssignShortcut__DelegateSignature();
    void BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_3_OnHoveredWork__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget);
    void BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_4_OnUnhoveredWork__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget);
    void BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_6_OnClickedSortButton__DelegateSignature();
    void BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_5_OnClickedCloseButton__DelegateSignature();
    void ExecuteUbergraph_WBP_BaseCampWorkFixedAssignManage(int32 EntryPoint);
}; // Size: 0x560

#endif
