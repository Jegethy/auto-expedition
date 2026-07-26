#ifndef UE4SS_SDK_BP_Status_WorldTreeAuraPal_HPP
#define UE4SS_SDK_BP_Status_WorldTreeAuraPal_HPP

class UBP_Status_WorldTreeAuraPal_C : public UBP_Status_VisualEffectAutoHide_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C0 (size: 0x8)
    class AActor* Ride Actor;                                                         // 0x00C8 (size: 0x8)

    void OnBeginStatus();
    void OnEndStatus();
    void OnRide_イベント(class AActor* RideActor);
    void OnGetOff_イベント(class AActor* RideActor);
    void ExecuteUbergraph_BP_Status_WorldTreeAuraPal(int32 EntryPoint);
}; // Size: 0xD0

#endif
