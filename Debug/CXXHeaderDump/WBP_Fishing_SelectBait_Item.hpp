#ifndef UE4SS_SDK_WBP_Fishing_SelectBait_Item_HPP
#define UE4SS_SDK_WBP_Fishing_SelectBait_Item_HPP

class UWBP_Fishing_SelectBait_Item_C : public UUserWidget
{
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0278 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x0280 (size: 0x8)
    class UImage* Image_Base_Focus;                                                   // 0x0288 (size: 0x8)
    class UImage* Image_Frame;                                                        // 0x0290 (size: 0x8)
    class UImage* Image_Frame_Focus;                                                  // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemNum;                                           // 0x02A0 (size: 0x8)
    class UWBP_PalInGameMenuItemIcon_C* WBP_PalInGameMenuItemIcon;                    // 0x02A8 (size: 0x8)
    FName Static Item Id;                                                             // 0x02B0 (size: 0x8)

    void UnSelect();
    void Select();
    void Setup(FPalStaticItemIdAndNum ItemInfo);
}; // Size: 0x2B8

#endif
