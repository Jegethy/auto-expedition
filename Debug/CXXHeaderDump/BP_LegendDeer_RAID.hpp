#ifndef UE4SS_SDK_BP_LegendDeer_RAID_HPP
#define UE4SS_SDK_BP_LegendDeer_RAID_HPP

class ABP_LegendDeer_RAID_C : public ABP_LegendDeer_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0D78 (size: 0x8)
    bool FirstRadiantPurge;                                                           // 0x0D80 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void RaidStateCheck(bool IsBattle);
    void BndEvt__BP_LegendDeer_RAID_DamageReactionComponent_K2Node_ComponentBoundEvent_0_OnDeadDelegate__DelegateSignature(FPalDeadInfo DeadInfo);
    void ExecuteUbergraph_BP_LegendDeer_RAID(int32 EntryPoint);
}; // Size: 0xD81

#endif
