#ifndef UE4SS_SDK_WBP_Ingame_WeaponChange_HPP
#define UE4SS_SDK_WBP_Ingame_WeaponChange_HPP

class UWBP_Ingame_WeaponChange_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0458 (size: 0x8)
    class UVerticalBox* VerticalBox_List;                                             // 0x0460 (size: 0x8)
    class UWBP_Ingame_WeaponChangeList_C* WBP_Ingame_WeaponChangeList;                // 0x0468 (size: 0x8)
    class UWBP_Ingame_WeaponChangeList_C* WBP_Ingame_WeaponChangeList_1;              // 0x0470 (size: 0x8)
    class UWBP_Ingame_WeaponChangeList_C* WBP_Ingame_WeaponChangeList_2;              // 0x0478 (size: 0x8)
    class UWBP_Ingame_WeaponChangeList_C* WBP_Ingame_WeaponChangeList_3;              // 0x0480 (size: 0x8)
    class UWBP_Ingame_WeaponChangeList_C* WBP_Ingame_WeaponChangeList_4;              // 0x0488 (size: 0x8)
    class UWBP_Ingame_WeaponChangeList_C* WBP_Ingame_WeaponChangeList_5;              // 0x0490 (size: 0x8)
    FPalDataTableRowName_UIInputAction ChangeWeaponNextAction;                        // 0x0498 (size: 0x8)
    FPalDataTableRowName_UIInputAction ChangeWeaponPrevAction;                        // 0x04A0 (size: 0x8)
    FPalUIActionBindData ChangeWeaponNextActionHandle;                                // 0x04A8 (size: 0x4)
    FPalUIActionBindData ChangeWeaponPrevHandle;                                      // 0x04AC (size: 0x4)
    TMap<int32, UWBP_Ingame_WeaponChangeList_C*> WeaponListWidgetMap;                 // 0x04B0 (size: 0x50)
    class UWBP_Ingame_WeaponChangeList_C* NonWeaponWidget;                            // 0x0500 (size: 0x8)
    class UWBP_Ingame_WeaponChangeList_C* CachedSelectedWeaponListWidget;             // 0x0508 (size: 0x8)
    TMap<class UWBP_Ingame_WeaponChangeList_C*, class UPalItemSlot*> WeaponListToSlotMap; // 0x0510 (size: 0x50)
    class UPalItemContainer* BoundLoadoutConatiner;                                   // 0x0560 (size: 0x8)
    class APalWeaponBase* LastSelectedWeaponActor;                                    // 0x0568 (size: 0x8)
    bool bRefreshPending;                                                             // 0x0570 (size: 0x1)

    void RefreshWeaponList();
    void UpdateAllBulletCount();
    void OnInputAction_PrevWeapon();
    void OnInputAction_NextWeapon();
    void SelectWeapon(class APalWeaponBase* WeaponActor);
    void UnregisterWeaponChangeAction();
    void RegisterWeaponChangeAction();
    void Setup Weapon List();
    void AnmEvent_In();
    void AnmEvent_Out();
    void OnWeaponLoadoutContaierUpdated(class UPalItemContainer* Container);
    void ExecuteUbergraph_WBP_Ingame_WeaponChange(int32 EntryPoint);
}; // Size: 0x571

#endif
