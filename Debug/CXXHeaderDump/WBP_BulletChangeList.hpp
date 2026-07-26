#ifndef UE4SS_SDK_WBP_BulletChangeList_HPP
#define UE4SS_SDK_WBP_BulletChangeList_HPP

class UWBP_BulletChangeList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_DetailDisplay_Fade;                                   // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_DetailDisplay_Force;                                  // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_SimpleDisplay_Fade;                                   // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_SimpleDisplay_Force;                                  // 0x0298 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x02A0 (size: 0x8)
    class UImage* Image_Frame;                                                        // 0x02A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Name;                                              // 0x02B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Num;                                               // 0x02B8 (size: 0x8)
    class UWBP_PalInGameMenuItemIcon_C* WBP_PalInGameMenuItemIcon;                    // 0x02C0 (size: 0x8)
    FName MyBulletItemId;                                                             // 0x02C8 (size: 0x8)

    void GetBulletItemId(FName& ItemId);
    void Setup(FName BulletItemId);
    void AnmEvent_Focus();
    void AnmEvent_Unfocus();
    void AnmEvent_SimpleDisplay(bool bSkipAnimation);
    void AnmEvent_DetailDisplay(bool bSkipAnimatio);
    void ExecuteUbergraph_WBP_BulletChangeList(int32 EntryPoint);
}; // Size: 0x2D0

#endif
