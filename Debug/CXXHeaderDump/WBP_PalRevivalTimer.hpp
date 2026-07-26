#ifndef UE4SS_SDK_WBP_PalRevivalTimer_HPP
#define UE4SS_SDK_WBP_PalRevivalTimer_HPP

class UWBP_PalRevivalTimer_C : public UUserWidget
{
    class UImage* Image_229;                                                          // 0x0278 (size: 0x8)
    class UImage* Image_Arrow;                                                        // 0x0280 (size: 0x8)
    class UImage* Image_Buff_0;                                                       // 0x0288 (size: 0x8)
    class UImage* Image_Buff_1;                                                       // 0x0290 (size: 0x8)
    class UImage* Image_Buff_2;                                                       // 0x0298 (size: 0x8)
    class UImage* Image_RoundProgress;                                                // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ReviveTimer;                                       // 0x02A8 (size: 0x8)

    void SetProgressRate(double Rate);
    void SetResurrectAbility(double ResurrectSpeedMultiplier);
    void SetRemainingTime(double RemainingSeconds);
}; // Size: 0x2B0

#endif
