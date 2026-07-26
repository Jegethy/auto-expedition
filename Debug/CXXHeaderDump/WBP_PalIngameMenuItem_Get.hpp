#ifndef UE4SS_SDK_WBP_PalIngameMenuItem_Get_HPP
#define UE4SS_SDK_WBP_PalIngameMenuItem_Get_HPP

class UWBP_PalIngameMenuItem_Get_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Rarity_Legendary;                                     // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Rarity_Epic;                                          // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Rarity_Rare;                                          // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_Rarity_Uncommon;                                      // 0x0298 (size: 0x8)
    class UWidgetAnimation* Anm_Rarity_Common;                                        // 0x02A0 (size: 0x8)
    class UWidgetAnimation* Anm_Out;                                                  // 0x02A8 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x02B0 (size: 0x8)
    class UImage* Image_BGBloom;                                                      // 0x02B8 (size: 0x8)
    class UImage* Image_BGDark;                                                       // 0x02C0 (size: 0x8)
    class UImage* Image_BGGrd;                                                        // 0x02C8 (size: 0x8)
    class UImage* Image_BGScroll_B;                                                   // 0x02D0 (size: 0x8)
    class UImage* Image_BGScroll_B_1;                                                 // 0x02D8 (size: 0x8)
    class UImage* Image_BGScroll_T;                                                   // 0x02E0 (size: 0x8)
    class UImage* Image_BGScroll_T_1;                                                 // 0x02E8 (size: 0x8)
    class UImage* Image_Flash;                                                        // 0x02F0 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton;        // 0x02F8 (size: 0x8)
    FTimerHandle DelayInAnmTimerHandle;                                               // 0x0300 (size: 0x8)

    void OnTimerEvent_InAnm();
    void SetDelayInAnmTimer(double StartDelay);
    void Setup(FPalItemAndNum ItemData);
    void AnmEvent_In();
    void AnmEvent_Out();
    void AnmEvent_Rarity(int32 RarityIndex);
    void Destruct();
    void ExecuteUbergraph_WBP_PalIngameMenuItem_Get(int32 EntryPoint);
}; // Size: 0x308

#endif
