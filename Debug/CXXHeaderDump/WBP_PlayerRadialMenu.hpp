#ifndef UE4SS_SDK_WBP_PlayerRadialMenu_HPP
#define UE4SS_SDK_WBP_PlayerRadialMenu_HPP

class UWBP_PlayerRadialMenu_C : public UPalUIPlayerRadialMenuBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0458 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0460 (size: 0x8)
    class UWBP_CommonRadialMenuBase_C* WBP_CommonRadialMenuBase;                      // 0x0468 (size: 0x8)
    bool isAnyRadialMenuOpened;                                                       // 0x0470 (size: 0x1)
    FName cameraModifierName;                                                         // 0x0474 (size: 0x8)
    TEnumAsByte<EPlayerRadialMenuOpenType::Type> OpenedRadialType;                    // 0x047C (size: 0x1)
    int32 OtomoIndex;                                                                 // 0x0480 (size: 0x4)
    FPalDataTableRowName_UIInputAction DecideMenuAction;                              // 0x0484 (size: 0x8)
    FPalUIActionBindData Action Handle;                                               // 0x048C (size: 0x4)
    FDataTableRowHandle FeedMsgID;                                                    // 0x0490 (size: 0x10)
    FDataTableRowHandle FeedWithNameMsgID;                                            // 0x04A0 (size: 0x10)
    FDataTableRowHandle CareMsgID;                                                    // 0x04B0 (size: 0x10)
    FDataTableRowHandle CareWithNameMsgID;                                            // 0x04C0 (size: 0x10)
    FDataTableRowHandle EmoteTitleMsgID;                                              // 0x04D0 (size: 0x10)
    class UWBP_IngameMenuConstruction_Radial_C* ConstructionMenu;                     // 0x04E0 (size: 0x8)
    FName InteractDIsableFlagName;                                                    // 0x04E8 (size: 0x8)
    FDataTableRowHandle InstructionAttackMsgID;                                       // 0x04F0 (size: 0x10)
    FDataTableRowHandle InstructionAssistMsgID;                                       // 0x0500 (size: 0x10)
    FDataTableRowHandle InstructionEscapetMsgID;                                      // 0x0510 (size: 0x10)
    FDataTableRowHandle EmoteMsgID_0;                                                 // 0x0520 (size: 0x10)
    FDataTableRowHandle EmoteMsgID_1;                                                 // 0x0530 (size: 0x10)
    FDataTableRowHandle EmoteMsgID_2;                                                 // 0x0540 (size: 0x10)
    FDataTableRowHandle EmoteMsgID_3;                                                 // 0x0550 (size: 0x10)
    FDataTableRowHandle EmoteMsgID_4;                                                 // 0x0560 (size: 0x10)
    FDataTableRowHandle EmoteMsgID_5;                                                 // 0x0570 (size: 0x10)
    FDataTableRowHandle EmoteMsgID_6;                                                 // 0x0580 (size: 0x10)
    FDataTableRowHandle EmoteMsgID_7;                                                 // 0x0590 (size: 0x10)
    FDataTableRowHandle EmoteMsgID_8;                                                 // 0x05A0 (size: 0x10)
    FDataTableRowHandle SlaughterMsgID;                                               // 0x05B0 (size: 0x10)
    FWBP_PlayerRadialMenu_COnRequestOpenChat OnRequestOpenChat;                       // 0x05C0 (size: 0x10)
    void OnRequestOpenChat();
    FDataTableRowHandle OpenChatMsgID;                                                // 0x05D0 (size: 0x10)
    TArray<FName> RadialIgnoreTribeList;                                              // 0x05E0 (size: 0x10)
    TMap<class EPalOtomoPalOrderType, class UWBP_PlayerRadialMenu_MenuContent_C*> OtomoInstructionWidgetMap; // 0x05F0 (size: 0x50)

    void HiglightCurrentOrderWidget();
    void OpenBuildObjectList();
    void ShouldDisplayOpenChatPanel(bool& bShouldDisplay);
    void IsPlayerDying(bool& IsDying);
    void IsAnyMenuOpened(bool& IsOpened);
    void SetInteractEnable(bool IsInteractEnable);
    void EmptyFunction();
    void HasConstructionMenu(bool& HasMenu);
    void IsPlayerRiding(bool& IsRiding);
    void CloseConstructionMenu();
    void CreateConstructionMenu(class UWBP_IngameMenuConstruction_Radial_C*& createdWidget);
    void OpenConstructionMenu(FName SelectMapObjectId, int32 SelectedIndex);
    void OnPressConstructionMenuButton();
    void OnDecidedEmoteMenu(int32 Index);
    void CreateEmoteMenu();
    void Open Emote Menu();
    void OnPlayerRideOn(class AActor* RideActor);
    void On Decided Instruction Care(bool& ShouldClose);
    void OnDecidedInstruction_Feed(bool& ShouldClose);
    void OnDecidedPlayerActionMenu(int32 Index);
    void OnOtomoChanged_Inactivated();
    void OnOtomoChanged_Activated();
    void UnbindPlayerActionMenuEvent();
    void BindPlayerActionMenuEvent();
    void CreateInstructionsAdditionalWidget(FText InText, class UWBP_PlayerRadialMenu_MenuContent_C*& createdWidget);
    void OnDamagedPlayer(FPalDamageResult DamageResult);
    void CloseSetup();
    void CloseMenu();
    void CreatePlayerActionMenu();
    void Can Open Player Action Menu(bool& Result);
    void OpenSetup();
    void OpenMenu();
    void OpenPlayerActionMenu();
    void OnPushedAnyWidget(const FGuid& pushedWidgetID);
    void BindOpenPlayerActionMenu();
    void UnbindOpenPlayerActionMenu();
    void SetupEvent();
    void ExecuteUbergraph_WBP_PlayerRadialMenu(int32 EntryPoint);
    void OnRequestOpenChat__DelegateSignature();
}; // Size: 0x640

#endif
