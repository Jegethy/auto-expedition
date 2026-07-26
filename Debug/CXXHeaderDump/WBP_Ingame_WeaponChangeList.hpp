#ifndef UE4SS_SDK_WBP_Ingame_WeaponChangeList_HPP
#define UE4SS_SDK_WBP_Ingame_WeaponChangeList_HPP

class UWBP_Ingame_WeaponChangeList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UHorizontalBox* HorizontalBox_NowBulletNum_1;                               // 0x0288 (size: 0x8)
    class UImage* Icon_Weapon;                                                        // 0x0290 (size: 0x8)
    class UImage* Image_Infinity_1;                                                   // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowBulletNum_1;                                    // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_WeaponName;                                        // 0x02A8 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon_4;              // 0x02B0 (size: 0x8)
    FDataTableRowHandle NoWeaponMsgId;                                                // 0x02B8 (size: 0x10)

    void GetDisplayBulletCount(class UPalItemSlot* WeaponSlot, int32& BulletCount);
    void UpdateDisplayBulletCount(class UPalItemSlot* WeaponSlot);
    void SetWeaponSlot(class UPalItemSlot* WeaponSlot);
    void AnmEvent_Focus();
    void AnmEvent_Unfocus();
    void ExecuteUbergraph_WBP_Ingame_WeaponChangeList(int32 EntryPoint);
}; // Size: 0x2C8

#endif
