#ifndef UE4SS_SDK_WBP_IngameMenu_ChestSetting_SecurityBlock_HPP
#define UE4SS_SDK_WBP_IngameMenu_ChestSetting_SecurityBlock_HPP

class UWBP_IngameMenu_ChestSetting_SecurityBlock_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWBP_PalInvisibleButton_C* ButtonPrivateLockToggle;                         // 0x0458 (size: 0x8)
    class UCheckBox* CheckBox_80;                                                     // 0x0460 (size: 0x8)
    class UCheckBox* CheckBox_Guest;                                                  // 0x0468 (size: 0x8)
    class UCheckBox* CheckBox_Member;                                                 // 0x0470 (size: 0x8)
    class UCheckBox* CheckBox_SubMaster;                                              // 0x0478 (size: 0x8)
    class UCheckBox* CheckBoxPrivateLock;                                             // 0x0480 (size: 0x8)
    class UHorizontalBox* HorizontalBox;                                              // 0x0488 (size: 0x8)
    class UHorizontalBox* HorizontalBox_0;                                            // 0x0490 (size: 0x8)
    class UHorizontalBox* HorizontalBox_PrivateLock;                                  // 0x0498 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton;                                      // 0x04A0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x04A8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Guest;                    // 0x04B0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Member;                   // 0x04B8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_SubMaster;                // 0x04C0 (size: 0x8)
    class UPalMapObjectPasswordLockModule* PasswordLockModule;                        // 0x04C8 (size: 0x8)
    FWBP_IngameMenu_ChestSetting_SecurityBlock_COnGetLockedNotLocal OnGetLockedNotLocal; // 0x04D0 (size: 0x10)
    void OnGetLockedNotLocal();
    class UPalHUDDispatchParameter_MapObject* As Pal HUDDispatch Parameter Map Object; // 0x04E0 (size: 0x8)

    void GetRoleCheckBox(EPalGuildRole Role, class UCheckBox*& CheckBox);
    void OnUpdateGuildSecurityAllowedRoles(class UPalMapObjectGuildSecurityModule* Module, const TArray<EPalGuildRole>& NewRoles);
    bool IsCheckedBox(class UCheckBox* ターゲット);
    void RequestApplyGuildSecurityLevel(EPalGuildRole TargetRole, bool bCurrentDisplayChecked);
    class UWidget* Custom Navigation To Bottom(EUINavigation Navigation);
    void OnUpdateItemChestPrivateLock(class UPalMapObjectItemChestModel* ConcreteModel);
    void SetupForGuildSecurity(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void SetupForPrivateLock(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void SetupForPassword(class UPalMapObjectConcreteModelBase* ConcreteModel);
    class UWidget* BP_GetDesiredFocusTarget();
    void BndEvt__WBP_IngameMenu_Chest_LockSettings_WBP_CommonButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_LockSettings_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Chest_LockSettings_WBP_PalInvisibleButton_1_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Chest_LockSettings_WBP_PalInvisibleButton_SubMaster_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Chest_LockSettings_WBP_PalInvisibleButton_Member_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Chest_LockSettings_WBP_PalInvisibleButton_Guest_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Setup(class UPalHUDDispatchParameterBase* Param);
    void ExecuteUbergraph_WBP_IngameMenu_ChestSetting_SecurityBlock(int32 EntryPoint);
    void OnGetLockedNotLocal__DelegateSignature();
}; // Size: 0x4E8

#endif
