#ifndef UE4SS_SDK_BP_ActionResuscitation_HPP
#define UE4SS_SDK_BP_ActionResuscitation_HPP

class UBP_ActionResuscitation_C : public UBP_ActionInteractBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01B0 (size: 0x8)
    double Timer;                                                                     // 0x01B8 (size: 0x8)
    FName flagName;                                                                   // 0x01C0 (size: 0x8)
    FTimerHandle CurrentTimer;                                                        // 0x01C8 (size: 0x8)
    class UWBP_GameOver_Rescue_C* RescueWidget;                                       // 0x01D0 (size: 0x8)

    void EndResuscitation(bool IsReviveRequest);
    void FlagControll(bool isDisable);
    void TickAction(float DeltaTime);
    void OnBeginAction();
    void OnEndAction();
    void OnRescueUpdate();
    void ExecuteUbergraph_BP_ActionResuscitation(int32 EntryPoint);
}; // Size: 0x1D8

#endif
