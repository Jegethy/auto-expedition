#ifndef UE4SS_SDK_WBP_MenuESCPlayerBlockListItem_HPP
#define UE4SS_SDK_WBP_MenuESCPlayerBlockListItem_HPP

class UWBP_MenuESCPlayerBlockListItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UImage* Base;                                                               // 0x0288 (size: 0x8)
    class UHorizontalBox* Horizontal_KeyGuide_Equip;                                  // 0x0290 (size: 0x8)
    class UHorizontalBox* Horizontal_KeyGuide_Move;                                   // 0x0298 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x02A0 (size: 0x8)
    class UImage* Image_Icon_MuteBlock;                                               // 0x02A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Equip;                                             // 0x02B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PlayerName;                                        // 0x02B8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02C0 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x02C8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_1;                              // 0x02D0 (size: 0x8)
    FDataTableRowHandle OnlineMsgID;                                                  // 0x02D8 (size: 0x10)
    FDataTableRowHandle OfflineMsgID;                                                 // 0x02E8 (size: 0x10)
    FWBP_MenuESCPlayerBlockListItem_COnClicked OnClicked;                             // 0x02F8 (size: 0x10)
    void OnClicked(class UWBP_Guild_MemberList_C* Widget);
    FPalUIGuildMemberDisplayInfo MyDisplayInfo;                                       // 0x0308 (size: 0x30)
    FWBP_MenuESCPlayerBlockListItem_COnHovered OnHovered;                             // 0x0338 (size: 0x10)
    void OnHovered(class UWBP_Guild_MemberList_C* Widget);
    FString Player UId;                                                               // 0x0348 (size: 0x10)
    FString Player Name;                                                              // 0x0358 (size: 0x10)
    FString User Id;                                                                  // 0x0368 (size: 0x10)
    class UTexture2D* Texture;                                                        // 0x0378 (size: 0x8)
    FWBP_MenuESCPlayerBlockListItem_COnRightClicked OnRightClicked;                   // 0x0380 (size: 0x10)
    void OnRightClicked(class UWBP_MenuESCPlayerListItem_C* ButtonBase);
    FString Display Player Name;                                                      // 0x0390 (size: 0x10)
    FDataTableRowHandle UnBlockPlayerDialogMsgID;                                     // 0x03A0 (size: 0x10)

    void OnClosePlayerUnBlockDialog(bool bResult);
    void OpenPlayerBlockDialog();
    void On Right Clicked Internal();
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void GetFocusTarget(class UWidget*& TargetWidget);
    void GetDisplayInfo(FPalUIGuildMemberDisplayInfo& DisplayInfo);
    void SetPlayerName(FString PlayerName);
    void Setup(FString PlayerName, FString PlayerUId, FString UserId, FString NickName, EPalPlayerPlatform PlayerPlatform, bool bMute);
    void BndEvt__WBP_Guild_MemberList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Guild_MemberList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Guild_MemberList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void カスタムイベント(bool bResult);
    void ExecuteUbergraph_WBP_MenuESCPlayerBlockListItem(int32 EntryPoint);
    void OnRightClicked__DelegateSignature(class UWBP_MenuESCPlayerListItem_C* ButtonBase);
    void OnHovered__DelegateSignature(class UWBP_Guild_MemberList_C* Widget);
    void OnClicked__DelegateSignature(class UWBP_Guild_MemberList_C* Widget);
}; // Size: 0x3B0

#endif
