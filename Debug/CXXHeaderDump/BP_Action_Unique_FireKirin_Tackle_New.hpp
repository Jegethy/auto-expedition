#ifndef UE4SS_SDK_BP_Action_Unique_FireKirin_Tackle_New_HPP
#define UE4SS_SDK_BP_Action_Unique_FireKirin_Tackle_New_HPP

class UBP_Action_Unique_FireKirin_Tackle_New_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    double EndAnimTime;                                                               // 0x02A0 (size: 0x8)
    bool IsInputMoveForward;                                                          // 0x02A8 (size: 0x1)
    bool IsInputMoveForwardController;                                                // 0x02A9 (size: 0x1)
    TArray<class ABP_SkillEffectBase_C*> SkillEffect_Collision;                       // 0x02B0 (size: 0x10)
    class ABP_SkillEffectBase_C* SkillEffect_Loop;                                    // 0x02C0 (size: 0x8)
    double EndSkillEffectAdjustTime;                                                  // 0x02C8 (size: 0x8)
    FTimerHandle EffectEndTimerHandle;                                                // 0x02D0 (size: 0x8)
    class UPalSkillModule_Tackle* TackleModule;                                       // 0x02D8 (size: 0x8)

    void GetCollisionEffect(TSubclassOf<class ABP_SkillEffectBase_C>& CollisionEffect);
    void OnNotifyEnd_87F671D848D599BEA7F224837F8A8306(FName NotifyName);
    void OnNotifyBegin_87F671D848D599BEA7F224837F8A8306(FName NotifyName);
    void OnInterrupted_87F671D848D599BEA7F224837F8A8306(FName NotifyName);
    void OnBlendOut_87F671D848D599BEA7F224837F8A8306(FName NotifyName);
    void OnCompleted_87F671D848D599BEA7F224837F8A8306(FName NotifyName);
    void OnInputMoveForward(float InputValue, bool IsController);
    void OnEndSkillEffect();
    void OnMontageNotify(class UAnimMontage* Montage, FName NotifyName);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void OnEndAttack();
    void OnSpawnedLoopEffect(class APalSkillEffectBase* LoopEffect);
    void UpdateSkillEffect();
    void DisableFireCollision();
    void ExecuteUbergraph_BP_Action_Unique_FireKirin_Tackle_New(int32 EntryPoint);
}; // Size: 0x2E0

#endif
