#ifndef UE4SS_SDK_WBP_ResearchMenu_HPP
#define UE4SS_SDK_WBP_ResearchMenu_HPP

class UWBP_ResearchMenu_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UCanvasPanel* Canvas_Progress;                                              // 0x0480 (size: 0x8)
    class UCanvasPanel* Canvas_ResearchDetail;                                        // 0x0488 (size: 0x8)
    class UCanvasPanel* CanvasPanel_DetailRequire;                                    // 0x0490 (size: 0x8)
    class UCanvasPanel* CanvasPanel_OverView;                                         // 0x0498 (size: 0x8)
    class UProgressBar* ProgressBar_Progress;                                         // 0x04A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_BuffText;                                          // 0x04A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ManMonth_Value;                                    // 0x04B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalWork;                                           // 0x04B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalWork_CompNum_0;                                 // 0x04C0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalWork_CompNum_1;                                 // 0x04C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RearchName;                                        // 0x04D0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ResearchName;                                      // 0x04D8 (size: 0x8)
    class UVerticalBox* Vertical_Buff;                                                // 0x04E0 (size: 0x8)
    class UVerticalBox* Vertical_BuffList;                                            // 0x04E8 (size: 0x8)
    class UVerticalBox* Vertical_Research_List;                                       // 0x04F0 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton;                                      // 0x04F8 (size: 0x8)
    class UWBP_IconPalWork_C* WBP_IconPalWork;                                        // 0x0500 (size: 0x8)
    class UWBP_InventoryEquipment_ItemInfo_Tecnology_C* WBP_InventoryEquipment_ItemInfo_Tecnology; // 0x0508 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0510 (size: 0x8)
    class UWBP_Research_AllBuff_C* WBP_Research_AllBuff;                              // 0x0518 (size: 0x8)
    class UWBP_Research_Buff_C* WBP_Research_Buff;                                    // 0x0520 (size: 0x8)
    class UWBP_Research_PalWorkList_C* WBP_Research_PalWorkList;                      // 0x0528 (size: 0x8)
    class UWBP_Research_Tree_C* WBP_Research_Tree;                                    // 0x0530 (size: 0x8)
    class UWBP_ResearchEffectIcon_C* WBP_ResearchEffectIcon;                          // 0x0538 (size: 0x8)
    class UPalUIGuildLabModel* LabModel;                                              // 0x0540 (size: 0x8)
    EPalWorkSuitability CurrentResearchType;                                          // 0x0548 (size: 0x1)
    bool Pined;                                                                       // 0x0549 (size: 0x1)
    bool PinedDetail;                                                                 // 0x054A (size: 0x1)
    FName CurrentResearch;                                                            // 0x054C (size: 0x8)
    bool BlockButton;                                                                 // 0x0554 (size: 0x1)
    TMap<class EPalWorkSuitability, class UWBP_Research_PalWorkList_C*> EntryMap;     // 0x0558 (size: 0x50)
    FTimerHandle ProgressUpdateTimer;                                                 // 0x05A8 (size: 0x8)

    void GetResearchCompleteCount(TArray<FPalUIGuildLabResearchInfo>& ResearchInfo, int32& Count);
    void ShowAllBuff();
    void UpdateCurrentResearchProgress();
    void OnCurrentResearchChanged();
    class UWidget* BP_GetDesiredFocusTarget();
    void Check Research Require Satisfy(TArray<FPalStaticItemIdAndNum>& Materials, bool& IsSatisfy);
    void Switch Right Panel(bool ToDetail);
    void SetupResearchDetail(FName ResearchId);
    void OnCancelAction();
    void Setup Research Overview(EPalWorkSuitability ResearchType);
    void OnResearchEntryUnhovered(EPalWorkSuitability WorkType);
    void OnResearchEntryHovered(EPalWorkSuitability WorkType);
    void OnResearchEntryClicked(EPalWorkSuitability WorkType);
    void Setup();
    void OnSetup();
    void BndEvt__WBP_ResearchMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_ResearchMenu_WBP_Research_Tree_K2Node_ComponentBoundEvent_1_OnResearchSelectDelegate__DelegateSignature(FName ResearchId);
    void BndEvt__WBP_ResearchMenu_WBP_Research_Tree_K2Node_ComponentBoundEvent_2_OnResearchHoveredDelegate__DelegateSignature(FName ResearchId);
    void BndEvt__WBP_ResearchMenu_WBP_Research_Tree_K2Node_ComponentBoundEvent_3_OnResearchUnhoveredDelegate__DelegateSignature();
    void BndEvt__WBP_ResearchMenu_WBP_CommonButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void OnConfirmChangeResearch(bool bResult);
    void BndEvt__WBP_ResearchMenu_WBP_Research_Tree_K2Node_ComponentBoundEvent_5_OnTreeNodeCreate__DelegateSignature(class UWBP_Research_TreeIcon_C* NewNode);
    void Destruct();
    void BndEvt__WBP_ResearchMenu_WBP_Research_AllBuff_K2Node_ComponentBoundEvent_6_OnAllBuffPanelClose__DelegateSignature();
    void ExecuteUbergraph_WBP_ResearchMenu(int32 EntryPoint);
}; // Size: 0x5B0

#endif
