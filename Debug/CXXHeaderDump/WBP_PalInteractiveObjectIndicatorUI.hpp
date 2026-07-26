#ifndef UE4SS_SDK_WBP_PalInteractiveObjectIndicatorUI_HPP
#define UE4SS_SDK_WBP_PalInteractiveObjectIndicatorUI_HPP

class UWBP_PalInteractiveObjectIndicatorUI_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0458 (size: 0x8)
    class UWBP_Ingame_Interact_C* WBP_Ingame_Interact;                                // 0x0460 (size: 0x8)
    FVector Offset;                                                                   // 0x0468 (size: 0x18)
    TMap<class EPalInteractiveObjectActionType, class FDataTableRowHandle> InteractKeyTextIdMap; // 0x0480 (size: 0x50)
    EPalInteractiveObjectActionType Action Type;                                      // 0x04D0 (size: 0x1)
    TMap<class EPalInteractiveObjectActionType, class FPalDataTableRowName_UIInputAction> ActionTypeNameMap; // 0x04D8 (size: 0x50)
    TScriptInterface<class IPalInteractiveObjectComponentInterface> InteractiveObject; // 0x0528 (size: 0x10)
    EPalInteractiveObjectButtonType buttonType;                                       // 0x0538 (size: 0x1)
    double longPushTime;                                                              // 0x0540 (size: 0x8)
    FPalUIActionBindData TriggerActionHandle;                                         // 0x0548 (size: 0x4)
    FPalUIActionBindData EndTriggerActionhandle;                                      // 0x054C (size: 0x4)
    bool CachedIsValidInteract;                                                       // 0x0550 (size: 0x1)
    bool bIsRegisteredActionInput;                                                    // 0x0551 (size: 0x1)
    bool IsEnableSelf;                                                                // 0x0552 (size: 0x1)
    FDataTableRowHandle LockedByRideMSGID;                                            // 0x0558 (size: 0x10)
    bool CanToggle;                                                                   // 0x0568 (size: 0x1)
    bool IsInteractInterval;                                                          // 0x0569 (size: 0x1)
    bool bConflictingCoopAction;                                                      // 0x056A (size: 0x1)
    double DiscardInteractTimer;                                                      // 0x0570 (size: 0x8)
    FPalInteractiveObjectActionInfoData CachedActionInfo;                             // 0x0578 (size: 0x10)
    bool bDisablingSelectingBullet;                                                   // 0x0588 (size: 0x1)

    void SetActionInfo(FPalInteractiveObjectActionInfoData ActionInfo);
    void IsConflictingWeaponChangeNext(bool& bConflicted);
    void IsConflictingCoopAction(bool& bConflicted);
    bool IsInteracting();
    void IsSameTriggeringActionType(EPalInteractiveObjectActionType ActionType, bool& IsSame);
    void ResetInteractInterval();
    void ReleaseInteractButton();
    void PressInteractButton();
    void SetEnable(bool IsEnable);
    void RegisterAction(bool isInputConsume, class UPalUserWidget* Parent);
    void Update Button Type(EPalInteractiveObjectButtonType newButtonType, double newLongPushTime, bool IsValidInteract, bool CanToggle);
    void Unregister Action(class UPalUserWidget* Parent);
    void EndTriggerInteract();
    void StartTriggerInteract();
    void Deactivate(class UPalUserWidget* Parent);
    void Activate(bool isInputConsume, class UPalUserWidget* Parent);
    void Update Interactable(bool bInteractable, class UPalUserWidget* Parent);
    void UpdateVisible(bool Visible);
    void UpdateText(FText InText, bool IsLockedByRide);
    void Setup(EPalInteractiveObjectActionType ActionType, TScriptInterface<class IPalInteractiveObjectComponentInterface> Interface);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_PalInteractiveObjectIndicatorUI(int32 EntryPoint);
}; // Size: 0x589

#endif
