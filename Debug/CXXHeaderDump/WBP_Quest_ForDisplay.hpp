#ifndef UE4SS_SDK_WBP_Quest_ForDisplay_HPP
#define UE4SS_SDK_WBP_Quest_ForDisplay_HPP

class UWBP_Quest_ForDisplay_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWBP_Quest_C* WBP_Quest;                                                    // 0x0480 (size: 0x8)
    FPalDataTableRowName_UIInputAction InputActionName_QuestTracking;                 // 0x0488 (size: 0x8)
    FPalUIActionBindData InputActionHandle_QuestTracking;                             // 0x0490 (size: 0x4)
    FPalDataTableRowName_UIInputAction InputActionName_QuestShowMap;                  // 0x0494 (size: 0x8)
    FPalUIActionBindData InputActionHandle_QuestShowMap;                              // 0x049C (size: 0x4)
    FWBP_Quest_ForDisplay_COnRequestShowMap OnRequestShowMap;                         // 0x04A0 (size: 0x10)
    void OnRequestShowMap(FName QuestId);
    FPalDataTableRowName_UIInputAction NextTabAction;                                 // 0x04B0 (size: 0x8)
    FPalDataTableRowName_UIInputAction PrevTabAction;                                 // 0x04B8 (size: 0x8)

    void GetTopMainQuest(TArray<class UPalQuestData*>& QuestDataArray, class UPalQuestData*& DisplayQuest);
    void OnInputAction_PrevTab();
    void OnInputAction_NextTab();
    void OnInputAction_ShowMap();
    void UnregisterShowMapAction();
    void RegisterQuestShowMap();
    void OnUpdateTrackingQuestId(const FName& QuestId);
    void On Input Action Quest Tracking();
    void UnregisterQuestTracingAction();
    void RegisterQuestTrackingAction();
    void Setup(FName DisplayQuestId);
    class UWidget* BP_GetDesiredFocusTarget();
    void Construct();
    void BndEvt__WBP_Quest_ForDisplay_WBP_Quest_K2Node_ComponentBoundEvent_0_OnClickedQuestButton__DelegateSignature(class UWBP_Quest_ListButton_C* QuestWidget);
    void Destruct();
    void ExecuteUbergraph_WBP_Quest_ForDisplay(int32 EntryPoint);
    void OnRequestShowMap__DelegateSignature(FName QuestId);
}; // Size: 0x4C0

#endif
