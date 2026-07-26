#ifndef UE4SS_SDK_BP_AIAction_NPC_Combat_Gun_Oilrig_HPP
#define UE4SS_SDK_BP_AIAction_NPC_Combat_Gun_Oilrig_HPP

class UBP_AIAction_NPC_Combat_Gun_Oilrig_C : public UBP_AIAction_NPC_Combat_Gun_C
{

    void IsTargetOutOfOilrigRange(bool& OutRange);
    void SwitchTickState();
    void AddAllState();
}; // Size: 0x249

#endif
