#ifndef UE4SS_SDK_WBP_Buildup_Pal_HPP
#define UE4SS_SDK_WBP_Buildup_Pal_HPP

class UWBP_Buildup_Pal_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Tab;                                          // 0x0480 (size: 0x8)
    class UImage* Select;                                                             // 0x0488 (size: 0x8)
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item;                              // 0x0490 (size: 0x8)
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item_1;                            // 0x0498 (size: 0x8)
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item_2;                            // 0x04A0 (size: 0x8)
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item_3;                            // 0x04A8 (size: 0x8)
    class UWBP_Buildup_Pal_Status_C* WBP_Buildup_Pal_Status;                          // 0x04B0 (size: 0x8)
    class UWBP_Buildup_TabButton_C* WBP_Buildup_TabButton_Reset;                      // 0x04B8 (size: 0x8)
    class UWBP_Buildup_TabButton_C* WBP_Buildup_TabButton_Upgrade;                    // 0x04C0 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;        // 0x04C8 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x04D0 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList;                                      // 0x04D8 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_1;                                    // 0x04E0 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_2;                                    // 0x04E8 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_3;                                    // 0x04F0 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_4;                                    // 0x04F8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_1;                              // 0x0500 (size: 0x8)
    TArray<class UWBP_Menu_PalList_C*> PalList;                                       // 0x0508 (size: 0x10)
    TArray<class UWBP_Buildup_Pal_Item_C*> UpgradeItems;                              // 0x0518 (size: 0x10)
    TArray<FName> UpgradeItemIds;                                                     // 0x0528 (size: 0x10)
    FDataTableRowHandle PreTabMsgId;                                                  // 0x0538 (size: 0x10)
    FDataTableRowHandle NextTabMsgId;                                                 // 0x0548 (size: 0x10)
    class UPalIndividualCharacterHandle* CurrentHandle;                               // 0x0558 (size: 0x8)
    bool PinDetail;                                                                   // 0x0560 (size: 0x1)
    bool Hovering;                                                                    // 0x0561 (size: 0x1)
    int32 CurrentTab;                                                                 // 0x0564 (size: 0x4)
    bool ResultSuccess;                                                               // 0x0568 (size: 0x1)
    bool Replicate_Status;                                                            // 0x0569 (size: 0x1)
    bool Requested;                                                                   // 0x056A (size: 0x1)
    FTimerHandle ItemUpdateTimer;                                                     // 0x0570 (size: 0x8)

    void UpdateItemInfo();
    class UWidget* BP_GetDesiredFocusTarget();
    void ReciveResult(EPalCharacterStatusOperationResult Result);
    void Refresh Info();
    void InvokeReset();
    void Invoke Rankup(TMap<EPalCharacterStatusOperationName, int32> StatusMap);
    void CloseAction();
    void On Click Pal List(class UPalIndividualCharacterHandle* Handle);
    void OnUnhoverPalList();
    void OnHoverPalList(class UPalIndividualCharacterHandle* Handle);
    void Setup();
    void OnSetup();
    void Destruct();
    void SwitchUpgrade();
    void SwitchReset();
    void SwitchTab(int32 Tab);
    void SynchroCheck();
    void Replicated_Status();
    void BndEvt__WBP_Buildup_Pal_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_Buildup_Pal(int32 EntryPoint);
}; // Size: 0x578

#endif
