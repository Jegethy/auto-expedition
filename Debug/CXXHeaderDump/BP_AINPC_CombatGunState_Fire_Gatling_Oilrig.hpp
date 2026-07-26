#ifndef UE4SS_SDK_BP_AINPC_CombatGunState_Fire_Gatling_Oilrig_HPP
#define UE4SS_SDK_BP_AINPC_CombatGunState_Fire_Gatling_Oilrig_HPP

class UBP_AINPC_CombatGunState_Fire_Gatling_Oilrig_C : public UBP_AINPC_CombatGunState_Aim_Oilrig_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0040 (size: 0x8)

    void StateEnter();
    void StateExit();
    void ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Gatling_Oilrig(int32 EntryPoint);
}; // Size: 0x48

#endif
