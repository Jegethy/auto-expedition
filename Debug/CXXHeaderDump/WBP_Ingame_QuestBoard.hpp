#ifndef UE4SS_SDK_WBP_Ingame_QuestBoard_HPP
#define UE4SS_SDK_WBP_Ingame_QuestBoard_HPP

class UWBP_Ingame_QuestBoard_C : public UUserWidget
{
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_C_50;                           // 0x0278 (size: 0x8)
    class UCanvasPanel* Canvas_Quest_Title;                                           // 0x0280 (size: 0x8)
    class UVerticalBox* VerticalBox_List;                                             // 0x0288 (size: 0x8)
    TMap<class FName, class UWBP_IngameQuestBoardListSet_C*> CreatedWidgetMap;        // 0x0290 (size: 0x50)

    void UpdateQuestName(FName QuestId);
    void UpdateQuestDetail(FName QuestId);
    void CompleteQuest(FName QuestId);
    void UpdateTrackingQuestDetail(bool bIgnoreAlreadyCreatedWidget);
    void GetNowDisplayQuestWidgetNum(int32& Num);
    void OnClosedQuestWidget(class UWBP_IngameQuestBoardListSet_C* Widget);
}; // Size: 0x2E0

#endif
