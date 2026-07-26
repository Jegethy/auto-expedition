#ifndef UE4SS_SDK_WBP_PalHUD_InGame_InputListener_HPP
#define UE4SS_SDK_WBP_PalHUD_InGame_InputListener_HPP

class UWBP_PalHUD_InGame_InputListener_C : public UPalUIInGameInputListener
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0468 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0470 (size: 0x8)
    class UWBP_BulletChange_C* WBP_BulletChange;                                      // 0x0478 (size: 0x8)
    class UWBP_Ingame_Chat_Wrapper_C* WBP_Ingame_Chat_Wrapper;                        // 0x0480 (size: 0x8)
    class UWBP_InGame_Quest_StartClearSet_C* WBP_InGame_Quest_StartClearSet;          // 0x0488 (size: 0x8)
    class UWBP_Ingame_WeaponChange_C* WBP_Ingame_WeaponChange;                        // 0x0490 (size: 0x8)
    class UWBP_PalInteractiveObjectIndicatorCanvas_C* WBP_PalInteractiveObjectIndicatorCanvas; // 0x0498 (size: 0x8)
    class UWBP_PlayerRadialMenu_C* WBP_PlayerRadialMenu;                              // 0x04A0 (size: 0x8)
    FPalDataTableRowName_UIInputAction EscapeActionName;                              // 0x04A8 (size: 0x8)
    FPalDataTableRowName_UIInputAction OpenCharacterMenuActionName;                   // 0x04B0 (size: 0x8)
    FPalDataTableRowName_UIInputAction OpenBuildMenuActionName;                       // 0x04B8 (size: 0x8)
    FPalDataTableRowName_UIInputAction OpenTechnologyMenuActionName;                  // 0x04C0 (size: 0x8)
    FPalDataTableRowName_UIInputAction OpenWorldMapActionName;                        // 0x04C8 (size: 0x8)
    FPalDataTableRowName_UIInputAction OpenPalStatusActionName;                       // 0x04D0 (size: 0x8)
    FPalUIActionBindData CharacterMenuActionHandle;                                   // 0x04D8 (size: 0x4)
    FPalDataTableRowName_UIInputAction OpenChatActionName;                            // 0x04DC (size: 0x8)
    FPalUIActionBindData CharacterMenuAnotherActionHandle;                            // 0x04E4 (size: 0x4)
    FPalUIActionBindData WorldMapActionHandle;                                        // 0x04E8 (size: 0x4)
    FPalUIActionBindData TechnologyMenuActionHandle;                                  // 0x04EC (size: 0x4)
    FPalUIActionBindData PalStatusActionHandle;                                       // 0x04F0 (size: 0x4)
    FPalDataTableRowName_UIInputAction BeginAdminSpectateActionName;                  // 0x04F4 (size: 0x8)
    FGuid SpectatorHudGuid;                                                           // 0x04FC (size: 0x10)
    FTimerHandle TimerHandleOnBeginSpectateNextTick;                                  // 0x0510 (size: 0x8)
    FPalUIActionBindData QuestCheckActionHandle;                                      // 0x0518 (size: 0x4)
    FPalDataTableRowName_UIInputAction QuestCheckActionName;                          // 0x051C (size: 0x8)
    FTimerHandle TImerHandle_ClearQuestCheckAction;                                   // 0x0528 (size: 0x8)
    FName CurrentDisplayStartQuestId;                                                 // 0x0530 (size: 0x8)
    FTimerHandle TimerHandle_DisableWeaponChange;                                     // 0x0538 (size: 0x8)
    bool bIsDIsplayingWeaponList;                                                     // 0x0540 (size: 0x1)
    bool bLastEquipedLoadoutWeapon;                                                   // 0x0541 (size: 0x1)
    TSoftObjectPtr<APalWeaponBase> SoftLastEquipedWeapon;                             // 0x0548 (size: 0x30)
    FPalDataTableRowName_UIInputAction ThrowPalActionName;                            // 0x0578 (size: 0x8)
    FPalUIActionBindData ThworPalActionHandle;                                        // 0x0580 (size: 0x4)
    FPalUIActionBindData ThrowPalActionDUmmyPressConsumeHandle;                       // 0x0584 (size: 0x4)
    FPalDataTableRowName_UIInputAction OpenCharacterMenuActionName_Another;           // 0x0588 (size: 0x8)

    void CREATEDELEGATE_PROXYFUNCTION_1(const class APalWeaponBase* WeaponActor, const FName& ReservedBulletItemId);
    void CREATEDELEGATE_PROXYFUNCTION_0(const FPalKeyConfigSettings& PrevSettings, const FPalKeyConfigSettings& NewSettings);
    void CanFastTravel(bool& bCanFastTravel);
    void OnPalSphereLoadoutChanged(EPalPlayerInventoryType inventoryType, int32 Index);
    void SetupPalSphereChangeEvent();
    void OnEndLiftupCampPal();
    void OnLiftupCampPal(class APalCharacter* LiftingPal);
    void SetupLiftupCampPalEvent();
    void IsLoadoutWeapon(class APalWeaponBase* WeaponActor, bool& bLoadoutWeaponOrEmpty);
    void OnUseWeapon();
    void DisableWeaponChangeList();
    void OnChangedWeapon(class APalWeaponBase* Weapon);
    void SetupWeaponChangeEvent();
    void ResetDisableWeaponChangeTimer();
    void OnTimerEvent_DisableWeaponChangeEvent();
    void EnableWeaponChangeList();
    void OnChangeReserveBullet(const class APalWeaponBase*& WeaponActor, const FName& BulletItemId);
    void OnEndSelectingBullet();
    void OnStartSelectingBullet();
    void SetupBulletChangeEvent();
    void OpenChatInternal();
    void SetupOpenChatEvent();
    void OnTriggerThrowPal();
    void OnTriggerWorldMapWithQuestId(FName QuestId);
    void OnRequestOpenMap_ByQuest(FName QuestId);
    void OnRequestOpenQuest_ByMap(FName QuestId);
    void OnTimerEvent_ClearQuestCheckAction();
    void OnStartQuestNotify(FName QuestId);
    void OnInputAction_QuestCheck();
    void OnCompleteQuest(const FName& QuestId);
    void OnOrderedQuest(const FName& QuestId);
    void SetupQuestEvent();
    void On End Arena Spectate();
    void On Begin Arena Spectate();
    void BeginAdminSpectate();
    void OnEndSpectate();
    void OnBeginSpectateNextTick();
    void OnBeginSpectate();
    void SetupSpectateEvent();
    void OnKeyConfigChanged(FPalKeyConfigSettings PreSetting, FPalKeyConfigSettings NewSetting);
    void RequestOpenChat();
    void Can Open Any UI(bool& CanOpenUI);
    void OpenBuildRadialMenuWithSelectedIndex(const int32 SelectedIndex);
    void OpenBuildRadialMenu(const FName BuildObjectId);
    void OnTriggerWorldMap();
    void Setup Input Action();
    void OpenBuildMenu(const int32 BuildObjectTypeA);
    void OpenMenu_Internal(TEnumAsByte<EPalUIInGameMainMenuTabType::Type> TabType, EPalBuildObjectTypeA BuildObjectTypeA, bool bDisableFirstCancelAction, FName QuestId);
    void OnTriggerEscape();
    void OnTriggerOpenPalStatus();
    void OnTriggerOpenTechnologyMenu();
    void OnTriggerOpenBuildMenu();
    void OnTriggerOpenCraftMenu();
    void On Trigger Open Inventory Menu();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnSetup_AfterCreatedPlayer();
    void BndEvt__WBP_PalHUD_InGame_InputListener_WBP_PlayerRadialMenu_K2Node_ComponentBoundEvent_1_OnRequestOpenChat__DelegateSignature();
    void BndEvt__WBP_PalHUD_InGame_InputListener_WBP_InGame_Quest_StartClearSet_K2Node_ComponentBoundEvent_2_OnStartQuestNotify__DelegateSignature(FName QuestId);
    void ExecuteUbergraph_WBP_PalHUD_InGame_InputListener(int32 EntryPoint);
}; // Size: 0x590

#endif
