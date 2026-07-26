#ifndef UE4SS_SDK_WBP_IngameMenu_Monitoring_HPP
#define UE4SS_SDK_WBP_IngameMenu_Monitoring_HPP

class UWBP_IngameMenu_Monitoring_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_WorkInfo;                       // 0x0480 (size: 0x8)
    class UWBP_IngameMenu_Monitoring_WorkButton_C* WBP_IngameMenu_Monitoring_WorkButton; // 0x0488 (size: 0x8)
    class UWBP_IngameMenu_Monitoring_WorkButton_C* WBP_IngameMenu_Monitoring_WorkButton1; // 0x0490 (size: 0x8)
    class UWBP_IngameMenu_Monitoring_WorkButton_C* WBP_IngameMenu_Monitoring_WorkButton2; // 0x0498 (size: 0x8)
    class UWBP_IngameMenu_Monitoring_WorkButton_C* WBP_IngameMenu_Monitoring_WorkButton3; // 0x04A0 (size: 0x8)
    class UWBP_IngameMenu_Monitoring_WorkInfo_C* WBP_IngameMenu_Monitoring_WorkInfo;  // 0x04A8 (size: 0x8)
    class UWBP_IngameMenu_Monitoring_WorkInfo_C* WBP_IngameMenu_Monitoring_WorkInfo_1; // 0x04B0 (size: 0x8)
    class UWBP_IngameMenu_Monitoring_WorkInfo_C* WBP_IngameMenu_Monitoring_WorkInfo_2; // 0x04B8 (size: 0x8)
    class UWBP_IngameMenu_Monitoring_WorkInfo_C* WBP_IngameMenu_Monitoring_WorkInfo_3; // 0x04C0 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x04C8 (size: 0x8)
    EPalBaseCampPassiveEffectWorkHardType WorkHardLevel;                              // 0x04D0 (size: 0x1)
    TMap<class EPalBaseCampPassiveEffectWorkHardType, class UWBP_IngameMenu_Monitoring_WorkButton_C*> WorkHardButtonMap; // 0x04D8 (size: 0x50)
    class UPalMapObjectBaseCampPassiveWorkHardModel* PalWorkHardModel;                // 0x0528 (size: 0x8)
    TArray<class UWBP_IngameMenu_Monitoring_WorkInfo_C*> WorkInfos;                   // 0x0530 (size: 0x10)
    bool IsHovering;                                                                  // 0x0540 (size: 0x1)
    TArray<FDataTableRowHandle> WorkHardMsgIds;                                       // 0x0548 (size: 0x10)

    void UpdateWorkHardInfoPermission();
    void DisplayHoverWorkHardInfo(int32 WorkHardLevel);
    void DisplayCurrentWorkHardInfo();
    void UpdateWorkHardInfo(int32 WorkHardLevel);
    class UWidget* BP_GetDesiredFocusTarget();
    void RequestChangeHardWorkLevel(int32 Level);
    void OnUpdateWorkHardType(class UPalBaseCampPassiveEffect_WorkHard* EffectWorkHard);
    void BndEvt__WBP_IngameMenu_Monitoring_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void OnSetup();
    void Construct();
    void ExecuteUbergraph_WBP_IngameMenu_Monitoring(int32 EntryPoint);
}; // Size: 0x558

#endif
