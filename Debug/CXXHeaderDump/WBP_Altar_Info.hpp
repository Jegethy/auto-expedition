#ifndef UE4SS_SDK_WBP_Altar_Info_HPP
#define UE4SS_SDK_WBP_Altar_Info_HPP

class UWBP_Altar_Info_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Battle;                                               // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Preparing;                                            // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_DetailToSimple;                                       // 0x0290 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Minute;              // 0x0298 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Minute_1;            // 0x02A0 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Second;              // 0x02A8 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Second_1;            // 0x02B0 (size: 0x8)
    class UCanvasPanel* Canvas_ItemIcon;                                              // 0x02B8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_RemainTime;                                   // 0x02C0 (size: 0x8)
    class UImage* Image;                                                              // 0x02C8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02D0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02D8 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02E0 (size: 0x8)
    class UImage* Image_110;                                                          // 0x02E8 (size: 0x8)
    class UImage* Image_317;                                                          // 0x02F0 (size: 0x8)
    class UImage* Image_556;                                                          // 0x02F8 (size: 0x8)
    class UImage* Image_Base_Frame;                                                   // 0x0300 (size: 0x8)
    class UImage* Image_TimerIcon;                                                    // 0x0308 (size: 0x8)
    class UOverlay* Overlay<Name;                                                     // 0x0310 (size: 0x8)
    class UOverlay* Overlay_Battle;                                                   // 0x0318 (size: 0x8)
    class UOverlay* Overlay_PrefixName;                                               // 0x0320 (size: 0x8)
    class UOverlay* Overlay_Preparing;                                                // 0x0328 (size: 0x8)
    class UImage* StatusBase;                                                         // 0x0330 (size: 0x8)
    class UImage* StatusBase_1;                                                       // 0x0338 (size: 0x8)
    class UImage* StatusBase_2;                                                       // 0x0340 (size: 0x8)
    class UImage* StatusBase_3;                                                       // 0x0348 (size: 0x8)
    class UImage* StatusBase_4;                                                       // 0x0350 (size: 0x8)
    class UImage* StatusBase_5;                                                       // 0x0358 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalName;                                           // 0x0360 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PrefixName;                                        // 0x0368 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Status;                                            // 0x0370 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Status_1;                                          // 0x0378 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;                            // 0x0380 (size: 0x8)

    void SetTowerBossInfo(EPalBossType BossType, FName BossId);
    void SetRaidBossInfo(FName StaticItemId);
    void SetTimeText(class URichTextBlock* TargetText1, class URichTextBlock* TargetText2, int32 TimeInteger);
    void SetRemainingTime(int32 Minutes, int32 Seconds);
    void PlayAnimation_Phase_Preparing();
    void PlayAnimation_Phase_Battle();
    void ExecuteUbergraph_WBP_Altar_Info(int32 EntryPoint);
}; // Size: 0x388

#endif
