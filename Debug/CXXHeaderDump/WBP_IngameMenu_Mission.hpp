#ifndef UE4SS_SDK_WBP_IngameMenu_Mission_HPP
#define UE4SS_SDK_WBP_IngameMenu_Mission_HPP

class UWBP_IngameMenu_Mission_C : public UPalUIBaseCampTaskBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A0 (size: 0x8)
    class UWidgetAnimation* Anm_LevelUp;                                              // 0x04A8 (size: 0x8)
    class UWidgetAnimation* Anm_CampInfo;                                             // 0x04B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LevelNum;                                          // 0x04B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalNum;                                            // 0x04C0 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton;                                      // 0x04C8 (size: 0x8)
    class UWBP_IngameMenu_MissionLevelEffect_C* WBP_IngameMenu_MissionLevelEffect;    // 0x04D0 (size: 0x8)
    class UWBP_IngameMenu_MissionLevelEffect_C* WBP_IngameMenu_MissionLevelEffect_1;  // 0x04D8 (size: 0x8)
    class UWBP_IngameMenu_MissionList_C* WBP_IngameMenu_MissionList;                  // 0x04E0 (size: 0x8)
    class UWBP_IngameMenu_MissionList_C* WBP_IngameMenu_MissionList_1;                // 0x04E8 (size: 0x8)
    class UWBP_IngameMenu_MissionList_C* WBP_IngameMenu_MissionList_2;                // 0x04F0 (size: 0x8)
    class UWBP_IngameMenu_MissionList_C* WBP_IngameMenu_MissionList_3;                // 0x04F8 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0500 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton;        // 0x0508 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_1;      // 0x0510 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_2;      // 0x0518 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_3;      // 0x0520 (size: 0x8)
    TArray<class UWBP_IngameMenu_MissionList_C*> MissionList;                         // 0x0528 (size: 0x10)
    FPalBaseCampTaskCheckedData ChedckedData;                                         // 0x0538 (size: 0x60)
    FPalBaseCampTaskDataSet TaskData;                                                 // 0x0598 (size: 0x28)
    FDataTableRowHandle BuildOBjectNumTaskInfoMsgID;                                  // 0x05C0 (size: 0x10)
    FDataTableRowHandle WorkerNumTaskInfoMsgID;                                       // 0x05D0 (size: 0x10)
    bool CanLevelup;                                                                  // 0x05E0 (size: 0x1)
    int32 LastLevel;                                                                  // 0x05E4 (size: 0x4)
    FTimerHandle TaskUpdateTimer;                                                     // 0x05E8 (size: 0x8)
    bool ButtonActive;                                                                // 0x05F0 (size: 0x1)
    FDataTableRowHandle PalLimitMsgId;                                                // 0x05F8 (size: 0x10)

    void SequenceEvent__ENTRYPOINTWBP_IngameMenu_Mission();
    class UWidget* BP_GetDesiredFocusTarget();
    void UpdateLevelEffectInfo(int32 Level);
    void UpdateCampInfoMax();
    void UpdateCampInfo();
    void OnUpdateCampStatus(class UPalBaseCampModel* Model);
    void Finished_37D37A8647957B4095DAF6B247AB02F5();
    void SequenceEvent();
    void OnSetup();
    void Construct();
    void ClosePanel();
    void BndEvt__WBP_IngameMenu_Mission_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void Destruct();
    void BndEvt__WBP_IngameMenu_Mission_WBP_Menu_btn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_IngameMenu_Mission(int32 EntryPoint);
}; // Size: 0x608

#endif
