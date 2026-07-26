#ifndef UE4SS_SDK_WBP_PalIngameMenuItem_GetGroup_HPP
#define UE4SS_SDK_WBP_PalIngameMenuItem_GetGroup_HPP

class UWBP_PalIngameMenuItem_GetGroup_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_InOut;                                                // 0x0280 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Items;                                        // 0x0288 (size: 0x8)
    class UImage* Image_BlurBG;                                                       // 0x0290 (size: 0x8)
    class UWBP_PalIngameMenuItem_Get_C* WBP_PalIngameMenuItem_Get;                    // 0x0298 (size: 0x8)
    class UWBP_PalIngameMenuItem_Get_C* WBP_PalIngameMenuItem_Get_1;                  // 0x02A0 (size: 0x8)
    class UWBP_PalIngameMenuItem_Get_C* WBP_PalIngameMenuItem_Get_2;                  // 0x02A8 (size: 0x8)
    class UWBP_PalIngameMenuItem_Get_C* WBP_PalIngameMenuItem_Get_3;                  // 0x02B0 (size: 0x8)
    class UWBP_PalIngameMenuItem_Get_C* WBP_PalIngameMenuItem_Get_4;                  // 0x02B8 (size: 0x8)
    TArray<FPalUICommonItemRewardData> RewardDataQue;                                 // 0x02C0 (size: 0x10)
    bool bCurrentDisplaying;                                                          // 0x02D0 (size: 0x1)
    double InAnmDelayPerItem;                                                         // 0x02D8 (size: 0x8)
    double OutAnmDelay;                                                               // 0x02E0 (size: 0x8)
    FTimerHandle TimerHandle_OutAnm;                                                  // 0x02E8 (size: 0x8)

    void OnTimerEvent_Out();
    void TryPopRewardData();
    void QueRewardData(FPalUICommonItemRewardData RewardData);
    void AnmEvent_In();
    void AnmEvent_Out();
    void Construct();
    void ExecuteUbergraph_WBP_PalIngameMenuItem_GetGroup(int32 EntryPoint);
}; // Size: 0x2F0

#endif
