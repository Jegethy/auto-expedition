#ifndef UE4SS_SDK_BP_Fishing_CatchBattle_Behavior_Diver_HPP
#define UE4SS_SDK_BP_Fishing_CatchBattle_Behavior_Diver_HPP

class UBP_Fishing_CatchBattle_Behavior_Diver_C : public UBP_Fishing_CatchBattle_Behavior_C
{

    void OverRideNotMove_DiverRiser(double DeltaTime, double mod);
    void GetNextInterval(double& NextInterval);
}; // Size: 0x110

#endif
