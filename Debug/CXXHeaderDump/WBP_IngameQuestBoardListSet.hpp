#ifndef UE4SS_SDK_WBP_IngameQuestBoardListSet_HPP
#define UE4SS_SDK_WBP_IngameQuestBoardListSet_HPP

class UWBP_IngameQuestBoardListSet_C : public UPalUserWidget
{
    class UImage* Image_72;                                                           // 0x0450 (size: 0x8)
    class UVerticalBox* VerticalBox_78;                                               // 0x0458 (size: 0x8)
    class UWBP_Ingame_QuestBoard_List_C* WBP_Ingame_QuestBoard_List_Dummy;            // 0x0460 (size: 0x8)
    class UPalQuestData* MyQuestData;                                                 // 0x0468 (size: 0x8)
    FWBP_IngameQuestBoardListSet_COnEndAllBlockCloseAnim OnEndAllBlockCloseAnim;      // 0x0470 (size: 0x10)
    void OnEndAllBlockCloseAnim(class UWBP_IngameQuestBoardListSet_C* Widget);
    TArray<class UWBP_Ingame_QuestBoard_List_C*> CleatedBlockWidget;                  // 0x0480 (size: 0x10)

    void GetSortedQuestBlocks(TArray<class UPalQuestBlock*>& Blocks);
    void AddBlockWidget(class UPalQuestBlock* QuestBlock);
    void UpdateQuest();
    void OnEndBlockEndAnim(class UWBP_Ingame_QuestBoard_List_C* Widget);
    void CompleteQuest();
    void GetQuestId(FName& QuestId);
    void Setup(class UPalQuestData* QuestData);
    void OnEndAllBlockCloseAnim__DelegateSignature(class UWBP_IngameQuestBoardListSet_C* Widget);
}; // Size: 0x490

#endif
