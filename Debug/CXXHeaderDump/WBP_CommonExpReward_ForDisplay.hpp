#ifndef UE4SS_SDK_WBP_CommonExpReward_ForDisplay_HPP
#define UE4SS_SDK_WBP_CommonExpReward_ForDisplay_HPP

class UWBP_CommonExpReward_ForDisplay_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWBP_Ingame_Exp_Reward_C* WBP_Ingame_Exp_Reward;                            // 0x0458 (size: 0x8)
    TArray<FPalUICommonExpRewardData> RewardDataArray;                                // 0x0460 (size: 0x10)
    bool bCurrentDisplaying;                                                          // 0x0470 (size: 0x1)
    TMap<class EPalCommonExpRewardType, class FDataTableRowHandle> MsgIDMap;          // 0x0478 (size: 0x50)
    FTimerHandle TimerHandle_EndIn;                                                   // 0x04C8 (size: 0x8)
    FTimerHandle TimerHandle_EndOut;                                                  // 0x04D0 (size: 0x8)

    void OnTimerEvent_EndOut();
    void OnTimerEvent_EndIn();
    void TryPopRewardData();
    void QueExpReward(FPalUICommonExpRewardData RewardData);
    void Destruct();
    void ExecuteUbergraph_WBP_CommonExpReward_ForDisplay(int32 EntryPoint);
}; // Size: 0x4D8

#endif
