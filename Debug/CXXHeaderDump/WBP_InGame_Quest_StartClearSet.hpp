#ifndef UE4SS_SDK_WBP_InGame_Quest_StartClearSet_HPP
#define UE4SS_SDK_WBP_InGame_Quest_StartClearSet_HPP

class UWBP_InGame_Quest_StartClearSet_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWBP_InGame_Quest_StartClear_Main_C* WBP_InGame_Quest_StartClear_Main;      // 0x0458 (size: 0x8)
    class UWBP_InGame_Quest_StartClear_Sub_C* WBP_InGame_Quest_StartClear_Sub;        // 0x0460 (size: 0x8)
    TMap<class EPalQuestType, class UWBP_InGame_Quest_StartClearBase_C*> WidgetMap;   // 0x0468 (size: 0x50)
    TArray<FF_PalQuestStartClearNotifyQueData> NotifyQue;                             // 0x04B8 (size: 0x10)
    FName CurrentQuestId;                                                             // 0x04C8 (size: 0x8)
    FWBP_InGame_Quest_StartClearSet_COnStartQuestNotify OnStartQuestNotify;           // 0x04D0 (size: 0x10)
    void OnStartQuestNotify(FName QuestId);
    class UWBP_InGame_Quest_StartClearBase_C* CurrentWidget;                          // 0x04E0 (size: 0x8)

    void SetActionBindData(FPalUIActionBindData BindData);
    void GetCurrentQuestNotifyTime(double& NotifyTime);
    void TryNextNotify();
    void StartQuest(FName QuestId);
    void CompleteQuest(FName QuestId);
    void OnEndWidgetSequence();
    void OnInitialized();
    void ExecuteUbergraph_WBP_InGame_Quest_StartClearSet(int32 EntryPoint);
    void OnStartQuestNotify__DelegateSignature(FName QuestId);
}; // Size: 0x4E8

#endif
