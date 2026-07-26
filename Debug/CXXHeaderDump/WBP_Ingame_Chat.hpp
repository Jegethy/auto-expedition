#ifndef UE4SS_SDK_WBP_Ingame_Chat_HPP
#define UE4SS_SDK_WBP_Ingame_Chat_HPP

class UWBP_Ingame_Chat_C : public UPalUIChat
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0470 (size: 0x8)
    class UWidgetAnimation* Anm_OpenToClose;                                          // 0x0478 (size: 0x8)
    class UWidgetAnimation* Anm_SendToLog;                                            // 0x0480 (size: 0x8)
    class UVerticalBox* InputVisualBox;                                               // 0x0488 (size: 0x8)
    class UOverlay* Overlay_InputText;                                                // 0x0490 (size: 0x8)
    class UOverlay* Overlay_SendChatGuide;                                            // 0x0498 (size: 0x8)
    class UPalMultiLineEditableTextBox* PalMultiLineEditableTextBox_220;              // 0x04A0 (size: 0x8)
    class UOverlay* SelectCategoryButton;                                             // 0x04A8 (size: 0x8)
    class USizeBox* SelectedCategory;                                                 // 0x04B0 (size: 0x8)
    class USizeBox* SizeBox_ControlGuide;                                             // 0x04B8 (size: 0x8)
    class USizeBox* SizeBox_RecievedText;                                             // 0x04C0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ChatSendCategory;                                  // 0x04C8 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList;                        // 0x04D0 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x04D8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_1;                              // 0x04E0 (size: 0x8)
    FWBP_Ingame_Chat_COnCompleteInput OnCompleteInput;                                // 0x04E8 (size: 0x10)
    void OnCompleteInput();
    FPalUIActionBindData OpenInventoryActionHandle;                                   // 0x04F8 (size: 0x4)
    EPalChatCategory SelectCategory;                                                  // 0x04FC (size: 0x1)
    FTimerHandle ChatCloseTimer;                                                      // 0x0500 (size: 0x8)
    FDataTableRowHandle ChatHintTextMsgID;                                            // 0x0508 (size: 0x10)
    bool IsShowChatInputUI;                                                           // 0x0518 (size: 0x1)
    class UDiscordRelationshipHandle* DiscordFriend;                                  // 0x0520 (size: 0x8)
    EPalChatCategory DefaultSelectCategory;                                           // 0x0528 (size: 0x1)
    bool ShouldCloseOnEscapeRelease;                                                  // 0x0529 (size: 0x1)
    float RightStickAnalogValue;                                                      // 0x052C (size: 0x4)
    FTimerHandle FlushTimerHandle;                                                    // 0x0530 (size: 0x8)
    TArray<FPalChatMessage> PendingFlushMessages;                                     // 0x0538 (size: 0x10)
    class UPalCutsceneComponent* BoundCutsceneComponent;                              // 0x0548 (size: 0x8)
    int32 MessageMax;                                                                 // 0x0550 (size: 0x4)
    int32 FlushMessageMaxByTick;                                                      // 0x0554 (size: 0x4)
    bool IsInsideFlushCallback;                                                       // 0x0558 (size: 0x1)

    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void GetGlobalChatColor(FPalChatMessage ChatMessage, FLinearColor& OutColor);
    void ResetFocus();
    void ShouldLoadChatMessage(FPalChatMessage ChatMessage, bool& bShouldLoad);
    void LoadChatMessages();
    void AddChatMessage(const FPalChatMessage& Message);
    void OnChangedInputType(ECommonInputType bNewInputType);
    void OnTextCommittedInternal(FText InText, TEnumAsByte<ETextCommit::Type> InTextCommit);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Can Chat(bool& Result);
    void ChangeCategory();
    void Hide Chat Log UI();
    void On Recived Chat(const FPalChatMessage& Message);
    void Construct();
    void ShowChatInputUI();
    void HideChatInputUI();
    void OpenChatUI();
    void Destruct();
    void BndEvt__WBP_Ingame_Chat_PalMultiLineEditableTextBox_220_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ScrollEndNextTick();
    void OnFlushTick();
    void OnPlayCutsceneStart();
    void OnFinishCutscene(bool IsSkipped );
    void ExecuteUbergraph_WBP_Ingame_Chat(int32 EntryPoint);
    void OnCompleteInput__DelegateSignature();
}; // Size: 0x559

#endif
