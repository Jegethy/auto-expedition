#ifndef UE4SS_SDK_WBP_Ingame_QuestBoard_List_HPP
#define UE4SS_SDK_WBP_Ingame_QuestBoard_List_HPP

class UWBP_Ingame_QuestBoard_List_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Anm_Updated;                                              // 0x0458 (size: 0x8)
    class UWidgetAnimation* Anm_Out;                                                  // 0x0460 (size: 0x8)
    class UWidgetAnimation* Anm_Cleared;                                              // 0x0468 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0470 (size: 0x8)
    class UImage* Image_ClearEff;                                                     // 0x0478 (size: 0x8)
    class UImage* Image_ClearEff_1;                                                   // 0x0480 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_QuestDescription;                          // 0x0488 (size: 0x8)
    class USizeBox* SizeBox_Clear;                                                    // 0x0490 (size: 0x8)
    class USizeBox* SizeBox_Default;                                                  // 0x0498 (size: 0x8)
    class UBP_PalTextBlock_C* Text_TaskDetail_Progress;                               // 0x04A0 (size: 0x8)
    FWBP_Ingame_QuestBoard_List_COnEndCloseAnim OnEndCloseAnim;                       // 0x04A8 (size: 0x10)
    void OnEndCloseAnim(class UWBP_Ingame_QuestBoard_List_C* Widget);
    class UPalQuestData* MyQuest;                                                     // 0x04B8 (size: 0x8)
    FName CachedQuestId;                                                              // 0x04C0 (size: 0x8)
    bool CompleteSound;                                                               // 0x04C8 (size: 0x1)
    FTimerHandle UpdateTextTimerHandle;                                               // 0x04D0 (size: 0x8)
    class UPalQuestBlock* MyQuestBlock;                                               // 0x04D8 (size: 0x8)
    FText CachedDescText;                                                             // 0x04E0 (size: 0x18)
    FText CachedProgressText;                                                         // 0x04F8 (size: 0x18)
    bool bCachedCanCompleteFlag;                                                      // 0x0510 (size: 0x1)
    bool bFirstUpdate;                                                                // 0x0511 (size: 0x1)

    void OnTimerEvent_UpdateText();
    void GetQuestId(FName& QuestId);
    void CompleteQuest();
    void UpdateQuest();
    void Setup(class UPalQuestBlock* QuestBlock);
    void Finished_FF8D72744040101F84C0D59873B7619D();
    void Finished_4B02D5D84C3448AD992E259045BE3FFE();
    void AnmEvent_In();
    void AnmEvent_OutAndRemove();
    void AnmEvent_Update();
    void Destruct();
    void ExecuteUbergraph_WBP_Ingame_QuestBoard_List(int32 EntryPoint);
    void OnEndCloseAnim__DelegateSignature(class UWBP_Ingame_QuestBoard_List_C* Widget);
}; // Size: 0x512

#endif
