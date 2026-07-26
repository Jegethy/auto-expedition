#ifndef UE4SS_SDK_BP_AINPC_CombatGunState_Fire_Oilrig_HPP
#define UE4SS_SDK_BP_AINPC_CombatGunState_Fire_Oilrig_HPP

class UBP_AINPC_CombatGunState_Fire_Oilrig_C : public UBP_AINPC_CombatGunState_Aim_Oilrig_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0040 (size: 0x8)
    double Timer;                                                                     // 0x0048 (size: 0x8)
    int32 ShootCount;                                                                 // 0x0050 (size: 0x4)
    double Interval;                                                                  // 0x0058 (size: 0x8)
    double ShootAbleTimer;                                                            // 0x0060 (size: 0x8)
    double temp_DeltaTime;                                                            // 0x0068 (size: 0x8)

    void AddShootTimer();
    void StateEnter();
    void StateTick(float DeltaTime);
    void StateExit();
    void ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig(int32 EntryPoint);
}; // Size: 0x70

#endif
