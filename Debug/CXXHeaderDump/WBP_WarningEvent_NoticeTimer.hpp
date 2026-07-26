#ifndef UE4SS_SDK_WBP_WarningEvent_NoticeTimer_HPP
#define UE4SS_SDK_WBP_WarningEvent_NoticeTimer_HPP

class UWBP_WarningEvent_NoticeTimer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToSimple;                                       // 0x0280 (size: 0x8)
    class UImage* Image;                                                              // 0x0288 (size: 0x8)
    class UImage* Image_104;                                                          // 0x0290 (size: 0x8)
    class UImage* Image_CautionIcon;                                                  // 0x0298 (size: 0x8)
    class UImage* Image_Line_L;                                                       // 0x02A0 (size: 0x8)
    class UImage* Image_Line_R;                                                       // 0x02A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Timer;                                             // 0x02B0 (size: 0x8)
    bool bSimpleDetail;                                                               // 0x02B8 (size: 0x1)
    bool bFirstAnimation;                                                             // 0x02B9 (size: 0x1)

    void SetRemainTime(double remainTime);
    void AnmEvent_ForceSimpleDetail();
    void AnmEvent_SimpleToNormal();
    void AnmEvent_NormalToSimple();
    void ExecuteUbergraph_WBP_WarningEvent_NoticeTimer(int32 EntryPoint);
}; // Size: 0x2BA

#endif
