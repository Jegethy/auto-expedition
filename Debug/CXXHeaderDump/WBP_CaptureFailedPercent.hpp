#ifndef UE4SS_SDK_WBP_CaptureFailedPercent_HPP
#define UE4SS_SDK_WBP_CaptureFailedPercent_HPP

class UWBP_CaptureFailedPercent_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UCanvasPanel* Canvas_PercentNumDecimal;                                     // 0x0458 (size: 0x8)
    class UBP_PalTextBlock_C* Text_1;                                                 // 0x0460 (size: 0x8)
    class UBP_PalTextBlock_C* Text_10;                                                // 0x0468 (size: 0x8)
    class UBP_PalTextBlock_C* Text_100;                                               // 0x0470 (size: 0x8)
    class UBP_PalTextBlock_C* text_Capturerate_SneakBonus;                            // 0x0478 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Deci_0;                                            // 0x0480 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Deci_00;                                           // 0x0488 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Pecent;                                            // 0x0490 (size: 0x8)
    FTimerHandle ClearSelfTimerHandle;                                                // 0x0498 (size: 0x8)
    FWBP_CaptureFailedPercent_COnOverClearTimer OnOverClearTimer;                     // 0x04A0 (size: 0x10)
    void OnOverClearTimer(class UWBP_CaptureFailedPercent_C* SelfWidget);
    double TargetDisplayPercent;                                                      // 0x04B0 (size: 0x8)
    double NowDisplayPercent;                                                         // 0x04B8 (size: 0x8)

    void UpdatePercent();
    void Set Percent(double Percent);
    void NotifyClearSelf();
    void Setup(double DisplayPercent);
    void Construct();
    void ExecuteUbergraph_WBP_CaptureFailedPercent(int32 EntryPoint);
    void OnOverClearTimer__DelegateSignature(class UWBP_CaptureFailedPercent_C* SelfWidget);
}; // Size: 0x4C0

#endif
