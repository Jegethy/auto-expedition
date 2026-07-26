#ifndef UE4SS_SDK_BP_Fishing_CatchBattle_Behavior_Jitter_HPP
#define UE4SS_SDK_BP_Fishing_CatchBattle_Behavior_Jitter_HPP

class UBP_Fishing_CatchBattle_Behavior_Jitter_C : public UBP_Fishing_CatchBattle_Behavior_C
{

    void OverRideDistance(double Distance, double& mod_distance);
    void OverRideArrivalTime_Calm(double arrivetime, double& mod_arrivetime);
    void GetIsChangeNextInterval(double Difficulty, int32 SameDirection, bool& IsChange);
}; // Size: 0x110

#endif
