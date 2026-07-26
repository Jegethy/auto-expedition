#ifndef UE4SS_SDK_WBP_Quest_List_HPP
#define UE4SS_SDK_WBP_Quest_List_HPP

class UWBP_Quest_List_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UVerticalBox* Vertical_CompletedQuest;                                      // 0x0280 (size: 0x8)
    class UVerticalBox* Vertical_OrderedQuest;                                        // 0x0288 (size: 0x8)
    class UWBP_Quest_ListButton_C* WBP_Dummy1;                                        // 0x0290 (size: 0x8)
    class UWBP_Quest_ListButton_C* WBP_Dummy2;                                        // 0x0298 (size: 0x8)
    FWBP_Quest_List_COnClickedQuestButton OnClickedQuestButton;                       // 0x02A0 (size: 0x10)
    void OnClickedQuestButton(class UWBP_Quest_ListButton_C* Widget);
    FWBP_Quest_List_COnHoveredQuestButton OnHoveredQuestButton;                       // 0x02B0 (size: 0x10)
    void OnHoveredQuestButton(class UWBP_Quest_ListButton_C* Widget);
    FWBP_Quest_List_COnUnhoveredQuestButton OnUnhoveredQuestButton;                   // 0x02C0 (size: 0x10)
    void OnUnhoveredQuestButton(class UWBP_Quest_ListButton_C* Widget);
    TArray<class UPalQuestData*> CompletedQuestDataArray;                             // 0x02D0 (size: 0x10)

    void GetAllQuestWidget(TArray<class UWBP_Quest_ListButton_C*>& NewParam);
    void GetTopQuestWidget(class UWBP_Quest_ListButton_C*& Widget);
    void GetCompletedQuestWidgetByType(EPalQuestType QuestType, TArray<class UWBP_Quest_ListButton_C*>& widgets);
    void GetOrderedQuestWidgetByType(EPalQuestType QuestType, TArray<class UWBP_Quest_ListButton_C*>& widgets);
    void GetTopQuestData(class UPalQuestData*& QuestData);
    void GetTopFocusTarget(class UWidget*& Widget);
    void FilteringInternal(EPalQuestType QuestType);
    void GetTopFocusTarget_CompletedQuest(class UWidget*& Widget);
    void GetTopFocusTarget_OrderedQuest(class UWidget*& Widget);
    void FIlteringSubQuest();
    void FilteringMainQuest();
    void GetCompletedQuestWidget(TArray<class UWBP_Quest_ListButton_C*>& widgets);
    void GetOrderedQuestWidget(TArray<class UWBP_Quest_ListButton_C*>& widgets);
    void SetTrackingQuestId(FName QuestId);
    void AddCompletedQuestId(TArray<FName>& QuestIdArray);
    void OnUnhoveredQuestButton_Binded(class UWBP_Quest_ListButton_C* Widget);
    void OnHoveredQuestButton_Binded(class UWBP_Quest_ListButton_C* Widget);
    void OnClickedQuestButton_Binded(class UWBP_Quest_ListButton_C* Widget);
    void AddOrderedQuest(TArray<class UPalQuestData*>& QuestDataArray);
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_Quest_List(int32 EntryPoint);
    void OnUnhoveredQuestButton__DelegateSignature(class UWBP_Quest_ListButton_C* Widget);
    void OnHoveredQuestButton__DelegateSignature(class UWBP_Quest_ListButton_C* Widget);
    void OnClickedQuestButton__DelegateSignature(class UWBP_Quest_ListButton_C* Widget);
}; // Size: 0x2E0

#endif
