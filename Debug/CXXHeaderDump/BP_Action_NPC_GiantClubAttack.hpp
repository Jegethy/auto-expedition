#ifndef UE4SS_SDK_BP_Action_NPC_GiantClubAttack_HPP
#define UE4SS_SDK_BP_Action_NPC_GiantClubAttack_HPP

class UBP_Action_NPC_GiantClubAttack_C : public UBP_Action_NPC_MeleeAttack_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0170 (size: 0x8)
    FName CameraShake;                                                                // 0x0178 (size: 0x8)

    void OnNotifyEnd_CFE0CA6A45DC574AD72A9C9E56E021A6(FName NotifyName);
    void OnNotifyBegin_CFE0CA6A45DC574AD72A9C9E56E021A6(FName NotifyName);
    void OnInterrupted_CFE0CA6A45DC574AD72A9C9E56E021A6(FName NotifyName);
    void OnBlendOut_CFE0CA6A45DC574AD72A9C9E56E021A6(FName NotifyName);
    void OnCompleted_CFE0CA6A45DC574AD72A9C9E56E021A6(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_NPC_GiantClubAttack(int32 EntryPoint);
}; // Size: 0x180

#endif
