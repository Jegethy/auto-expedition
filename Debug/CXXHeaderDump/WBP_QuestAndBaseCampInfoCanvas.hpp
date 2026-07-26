#ifndef UE4SS_SDK_WBP_QuestAndBaseCampInfoCanvas_HPP
#define UE4SS_SDK_WBP_QuestAndBaseCampInfoCanvas_HPP

class UWBP_QuestAndBaseCampInfoCanvas_C : public UPalUIInsideBaseCampCanvas
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0598 (size: 0x8)
    class UCanvasPanel* CanvasPanel_WorkerSimpleInfo;                                 // 0x05A0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Border_Bottom;                                // 0x05A8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Border_Top;                                   // 0x05B0 (size: 0x8)
    class UOverlay* Overlay_QuestInfo;                                                // 0x05B8 (size: 0x8)
    class UVerticalBox* VerticalBox;                                                  // 0x05C0 (size: 0x8)
    class UWBP_BattleEntry_Member_C* WBP_BattleEntry_Member;                          // 0x05C8 (size: 0x8)
    class UWBP_Ingame_QuestBoard_C* WBP_Ingame_QuestBoard;                            // 0x05D0 (size: 0x8)
    class UWBP_IngameMenu_CampLevelUp_C* WBP_IngameMenu_CampLevelUp;                  // 0x05D8 (size: 0x8)
    class UWBP_IngameMenu_Task_Simple_C* WBP_IngameMenu_Task_Simple;                  // 0x05E0 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon;                // 0x05E8 (size: 0x8)
    class UWBP_WorkerSimpleDetail_C* WBP_WorkerSimpleDetail;                          // 0x05F0 (size: 0x8)
    FTimerHandle tackCheckTimerHandle;                                                // 0x05F8 (size: 0x8)
    double TraceLength;                                                               // 0x0600 (size: 0x8)
    TSoftObjectPtr<APalCharacter> NowDisplayInfoCharacter;                            // 0x0608 (size: 0x30)
    FTimerHandle CollectWorkerDirectorModelTimer;                                     // 0x0638 (size: 0x8)
    FTimerHandle LoopCheckTimer;                                                      // 0x0640 (size: 0x8)
    FTimerHandle NewVar;                                                              // 0x0648 (size: 0x8)
    FTimerHandle TimerHandle_UpdateQuestDetail;                                       // 0x0650 (size: 0x8)

    void CREATEDELEGATE_PROXYFUNCTION_0(const FName& QuestId);
    void SetActiveSimpleInfoMode(bool bActiveSimpleInfo);
    void OnTimerEvent_UpdateQuestDetail();
    void OnUpdatedTrackingQuest(const FName& QuestId);
    void OnCompletedQuest(const FName& QuestId);
    void OnUpdatedQuest(FName QuestId);
    void OnChangedUISettings(const FPalOptionUISettings& PrevSettings, const FPalOptionUISettings& NewSettings);
    void OnUpdateBaseCampWorkHard(EPalBaseCampPassiveEffectWorkHardType WorkHardType);
    void OnUpdateWorkerBattleType(EPalBaseCampWorkerDirectionBattleType BattleType);
    void OnTimer_CollectWorkerDirectorModel();
    void ShowLevelUp(class UPalBaseCampModel* Model);
    void UpdateWindowBorder();
    void Show Base Camp Info();
    void HideBaseCampInfo();
    void Trace Worker Pal();
    void OnLeavePalBoxArea();
    void On Enter Pal Box Area();
    void Update Item Detail();
    void UpdatePalDetail();
    void UpdateTask();
    void On Update Base Camp Detail();
    void On Leave Base Camp();
    void On Enter Base Camp(class UPalBaseCampModel* Model);
    void OnInitialized();
    void Construct();
    void Destruct();
    void OnSetup_AfterCreatedPlayer();
    void SetVerticalBoxVisible(bool IsVisible);
    void LoopCheck();
    void ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas(int32 EntryPoint);
}; // Size: 0x658

#endif
