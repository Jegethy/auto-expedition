#ifndef UE4SS_SDK_BP_Action_Unique_SoldierBee_NeedleLance_HPP
#define UE4SS_SDK_BP_Action_Unique_SoldierBee_NeedleLance_HPP

class UBP_Action_Unique_SoldierBee_NeedleLance_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBP_UniqueSkillModule_Tackle_C* TackleModule;                               // 0x02A0 (size: 0x8)
    double SelfRotateSpeed;                                                           // 0x02A8 (size: 0x8)
    double EndAttackDistance;                                                         // 0x02B0 (size: 0x8)
    TSubclassOf<class ABP_SkillEffectBase_C> EndEffectClass;                          // 0x02B8 (size: 0x8)
    double MinMoveDistance;                                                           // 0x02C0 (size: 0x8)
    FVector StartLocation;                                                            // 0x02C8 (size: 0x18)

    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void OnModuleCompletedEndMontage();
    void OnMontageNotify(class UAnimMontage* Montage, FName NotifyName);
    void ExecuteUbergraph_BP_Action_Unique_SoldierBee_NeedleLance(int32 EntryPoint);
}; // Size: 0x2E0

#endif
