#ifndef UE4SS_SDK_BP_NPCAction_WeaponUse_HPP
#define UE4SS_SDK_BP_NPCAction_WeaponUse_HPP

class UBP_NPCAction_WeaponUse_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    FTimerHandle ActionTimerHandle;                                                   // 0x0168 (size: 0x8)
    double ShootTime;                                                                 // 0x0170 (size: 0x8)
    FVector RangePoint;                                                               // 0x0178 (size: 0x18)

    void GetWeaponType(EPalWeaponType& WeaponType);
    FVector SuggestRangePoint();
    void GetWeaponStats(double& Range, double& AttackTime);
    void SetEndAction();
    bool IsEndAction();
    void UpdateAimTargetLocation();
    void OnNotifyEnd_D0CF4BFE40B7E1C1F72C09B09DB0F46B(FName NotifyName);
    void OnNotifyBegin_D0CF4BFE40B7E1C1F72C09B09DB0F46B(FName NotifyName);
    void OnInterrupted_D0CF4BFE40B7E1C1F72C09B09DB0F46B(FName NotifyName);
    void OnBlendOut_D0CF4BFE40B7E1C1F72C09B09DB0F46B(FName NotifyName);
    void OnCompleted_D0CF4BFE40B7E1C1F72C09B09DB0F46B(FName NotifyName);
    void OnBeginAction();
    void StartShoot();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void RequestEndAction();
    void MoveToRange();
    void ReadyAim();
    void OnTargetDeath(const class UPalActionBase* action);
    void ExecuteUbergraph_BP_NPCAction_WeaponUse(int32 EntryPoint);
}; // Size: 0x190

#endif
