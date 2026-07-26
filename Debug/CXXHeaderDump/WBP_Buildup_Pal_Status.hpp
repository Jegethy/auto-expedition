#ifndef UE4SS_SDK_WBP_Buildup_Pal_Status_HPP
#define UE4SS_SDK_WBP_Buildup_Pal_Status_HPP

class UWBP_Buildup_Pal_Status_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UCanvasPanel* Canvas_ResetInfo;                                             // 0x0280 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Overall;                                          // 0x0288 (size: 0x8)
    class UImage* Image_44;                                                           // 0x0290 (size: 0x8)
    class UOverlay* Overlay_BlockReset;                                               // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Info;                                              // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PossessedMoney_Num;                                // 0x02A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RequireMoney_Num;                                  // 0x02B0 (size: 0x8)
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item;                              // 0x02B8 (size: 0x8)
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item_1;                            // 0x02C0 (size: 0x8)
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item_2;                            // 0x02C8 (size: 0x8)
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item_3;                            // 0x02D0 (size: 0x8)
    class UWBP_Buildup_Pal_StatusContent_C* WBP_Buildup_Pal_StatusContent;            // 0x02D8 (size: 0x8)
    class UWBP_Buildup_Pal_StatusContent_C* WBP_Buildup_Pal_StatusContent_1;          // 0x02E0 (size: 0x8)
    class UWBP_Buildup_Pal_StatusContent_C* WBP_Buildup_Pal_StatusContent_2;          // 0x02E8 (size: 0x8)
    class UWBP_Buildup_Pal_StatusContent_C* WBP_Buildup_Pal_StatusContent_3;          // 0x02F0 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton;                                      // 0x02F8 (size: 0x8)
    TArray<class UWBP_Buildup_Pal_StatusContent_C*> StatusContents;                   // 0x0300 (size: 0x10)
    TMap<EPalCharacterStatusOperationName, int32> TargetStatusRankMap;                // 0x0310 (size: 0x50)
    FDataTableRowHandle RankupMsgId;                                                  // 0x0360 (size: 0x10)
    FDataTableRowHandle ResetMsgId;                                                   // 0x0370 (size: 0x10)
    FDataTableRowHandle RankupButtonMsgID;                                            // 0x0380 (size: 0x10)
    FDataTableRowHandle ResetButtonMsgID;                                             // 0x0390 (size: 0x10)
    FDataTableRowHandle ResetResultMsgId;                                             // 0x03A0 (size: 0x10)
    FWBP_Buildup_Pal_Status_CInvokeRankUp InvokeRankUp;                               // 0x03B0 (size: 0x10)
    void InvokeRankup(TMap<EPalCharacterStatusOperationName, int32> Status);
    bool BlockInvoke;                                                                 // 0x03C0 (size: 0x1)
    bool Is Upgrade;                                                                  // 0x03C1 (size: 0x1)
    TArray<class UWBP_Buildup_Pal_Item_C*> Upgrade Items;                             // 0x03C8 (size: 0x10)
    int32 RequiredMoney;                                                              // 0x03D8 (size: 0x4)
    FWBP_Buildup_Pal_Status_CInvokeReset InvokeReset;                                 // 0x03E0 (size: 0x10)
    void InvokeReset();
    TArray<FName> Item Ids;                                                           // 0x03F0 (size: 0x10)
    class UPalIndividualCharacterParameter* CurrentIndividualParam;                   // 0x0400 (size: 0x8)
    TArray<EPalCharacterStatusOperationName> Status;                                  // 0x0408 (size: 0x10)
    TMap<EPalCharacterStatusOperationName, int32> CurrentRankMap;                     // 0x0418 (size: 0x50)
    FDataTableRowHandle ReturnPalSoulMsgId;                                           // 0x0468 (size: 0x10)
    FDataTableRowHandle ConsumePalSoulMsgId;                                          // 0x0478 (size: 0x10)
    TMap<FName, int32> ReturnItems;                                                   // 0x0488 (size: 0x50)
    FDataTableRowHandle RankupMsgId_ImportedPal;                                      // 0x04D8 (size: 0x10)

    class UWidget* DoCustomNavigation(EUINavigation Navigation);
    void UpdateRequiredItemSufficiency();
    void Refresh Info();
    void Predict Status(EPalCharacterStatusOperationName Status, int32 TargetRank);
    void Update Confirm Button State();
    void GetFocusTarget(class UUserWidget*& Widget);
    void On Money Changed(int64 NewMoney);
    void Setup(class UPalIndividualCharacterHandle* Handle, const TArray<FName>& ItemIds);
    void SwitchPanel(bool IsUpgrade);
    void Construct();
    void BndEvt__WBP_Buildup_Pal_Status_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ConfirmDialog(bool Confirmed);
    void EmptyEvent(bool bResult);
    void ShowResult();
    void OnInvisible(ESlateVisibility InVisibility);
    void ExecuteUbergraph_WBP_Buildup_Pal_Status(int32 EntryPoint);
    void InvokeReset__DelegateSignature();
    void InvokeRankup__DelegateSignature(TMap<EPalCharacterStatusOperationName, int32> Status);
}; // Size: 0x4E8

#endif
