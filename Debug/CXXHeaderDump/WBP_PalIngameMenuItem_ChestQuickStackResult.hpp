#ifndef UE4SS_SDK_WBP_PalIngameMenuItem_ChestQuickStackResult_HPP
#define UE4SS_SDK_WBP_PalIngameMenuItem_ChestQuickStackResult_HPP

class UWBP_PalIngameMenuItem_ChestQuickStackResult_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_InOut;                                                // 0x0288 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton;        // 0x0290 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_1;      // 0x0298 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_2;      // 0x02A0 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_3;      // 0x02A8 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_4;      // 0x02B0 (size: 0x8)
    class UWrapBox* WrapBox;                                                          // 0x02B8 (size: 0x8)
    bool bCurrentDisplaying;                                                          // 0x02C0 (size: 0x1)
    double OutAnmDelay;                                                               // 0x02C8 (size: 0x8)
    FTimerHandle TimerHandle_OutAnm;                                                  // 0x02D0 (size: 0x8)
    TArray<FPalStaticItemIdAndNum> CurrentStackedInfo;                                // 0x02D8 (size: 0x10)
    int32 MaxStackCount;                                                              // 0x02E8 (size: 0x4)

    void RefreshQue();
    void OnTimerEvent_Out();
    void QueStackItemResult(TArray<FPalStaticItemIdAndNum>& StackInfos);
    void Finished_BF11856C4A86E6F362DC7F8358D52602();
    void AnmEvent_In();
    void AnmEvent_Out();
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_PalIngameMenuItem_ChestQuickStackResult(int32 EntryPoint);
}; // Size: 0x2EC

#endif
