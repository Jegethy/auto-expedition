#ifndef UE4SS_SDK_BP_Action_NPC_MeleeAttackWithGun_HPP
#define UE4SS_SDK_BP_Action_NPC_MeleeAttackWithGun_HPP

class UBP_Action_NPC_MeleeAttackWithGun_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)

    void OnNotifyEnd_18F6DF3D47B5756AF6D31082F414DE7D(FName NotifyName);
    void OnNotifyBegin_18F6DF3D47B5756AF6D31082F414DE7D(FName NotifyName);
    void OnInterrupted_18F6DF3D47B5756AF6D31082F414DE7D(FName NotifyName);
    void OnBlendOut_18F6DF3D47B5756AF6D31082F414DE7D(FName NotifyName);
    void OnCompleted_18F6DF3D47B5756AF6D31082F414DE7D(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun(int32 EntryPoint);
}; // Size: 0x168

#endif
