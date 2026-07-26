#ifndef UE4SS_SDK_BP_ActionSleepPlayerBedOnSide_HPP
#define UE4SS_SDK_BP_ActionSleepPlayerBedOnSide_HPP

class UBP_ActionSleepPlayerBedOnSide_C : public UBP_ActionSleepPlayerBed_C
{

    void OnSleepLoopStart();
    void UnbindInteractEvent(class APalPlayerController* LocalPlayerController);
    void InvokePhotoMode();
    void RequestStartSleep();
    void BindInteractEvent(class APalPlayerController* LocalPlayerController);
    void GetMontageSleepLoop(class UAnimMontage*& Montage);
}; // Size: 0x259

#endif
