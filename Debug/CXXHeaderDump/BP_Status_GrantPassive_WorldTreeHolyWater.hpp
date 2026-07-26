#ifndef UE4SS_SDK_BP_Status_GrantPassive_WorldTreeHolyWater_HPP
#define UE4SS_SDK_BP_Status_GrantPassive_WorldTreeHolyWater_HPP

class UBP_Status_GrantPassive_WorldTreeHolyWater_C : public UPalStatus_PassiveSkillGrantBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00D0 (size: 0x8)
    class AActor* Ride Actor;                                                         // 0x00D8 (size: 0x8)

    void OnBeginSomeStatus();
    void OnEndStatus();
    void OnBeginStatus();
    void OnRide_イベント(class AActor* RideActor);
    void OnGetOff_イベント(class AActor* RideActor);
    void ExecuteUbergraph_BP_Status_GrantPassive_WorldTreeHolyWater(int32 EntryPoint);
}; // Size: 0xE0

#endif
