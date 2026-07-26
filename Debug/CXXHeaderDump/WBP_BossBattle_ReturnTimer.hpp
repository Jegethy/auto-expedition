#ifndef UE4SS_SDK_WBP_BossBattle_ReturnTimer_HPP
#define UE4SS_SDK_WBP_BossBattle_ReturnTimer_HPP

class UWBP_BossBattle_ReturnTimer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Count;                                                // 0x0280 (size: 0x8)
    class UImage* Image;                                                              // 0x0288 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0290 (size: 0x8)
    class UImage* Image_69;                                                           // 0x0298 (size: 0x8)
    class UImage* Image_156;                                                          // 0x02A0 (size: 0x8)
    class UImage* Image_190;                                                          // 0x02A8 (size: 0x8)
    class UOverlay* Overlay_KeyGuide;                                                 // 0x02B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Timer;                                             // 0x02B8 (size: 0x8)

    void StartDisplayTimer(int32 RemainingSeconds);
    void EndDisplayTimer();
    void SetRemainSecond(int32 RemainSecond);
    void ExecuteUbergraph_WBP_BossBattle_ReturnTimer(int32 EntryPoint);
}; // Size: 0x2C0

#endif
