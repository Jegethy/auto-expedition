#ifndef UE4SS_SDK_WBP_Ingame_Incubator_MultipleSlot_HPP
#define UE4SS_SDK_WBP_Ingame_Incubator_MultipleSlot_HPP

class UWBP_Ingame_Incubator_MultipleSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime;                     // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Complete;                               // 0x0288 (size: 0x8)
    class UImage* CircleGauge_Complete;                                               // 0x0290 (size: 0x8)
    class UImage* CircleGauge_Progress;                                               // 0x0298 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;                            // 0x02A0 (size: 0x8)
    class UPalWorkProgress* Work Progress;                                            // 0x02A8 (size: 0x8)
    class UPalItemSlot* TargetSlot;                                                   // 0x02B0 (size: 0x8)

    void On Update Work Amount(class UPalWorkProgress* WorkProgress);
    void SetSlot(class UPalItemSlot* Slot);
    void UpdateSlotProgress(class UPalWorkProgress* Work Progress);
    void Unbind();
    void ExecuteUbergraph_WBP_Ingame_Incubator_MultipleSlot(int32 EntryPoint);
}; // Size: 0x2B8

#endif
