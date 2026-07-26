#ifndef UE4SS_SDK_BP_Action_Unique_Umihebi_WindingTackle_HPP
#define UE4SS_SDK_BP_Action_Unique_Umihebi_WindingTackle_HPP

class UBP_Action_Unique_Umihebi_WindingTackle_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    bool IsMoving;                                                                    // 0x02A0 (size: 0x1)
    bool EnableRotate;                                                                // 0x02A1 (size: 0x1)
    double Max Speed Multiply;                                                        // 0x02A8 (size: 0x8)
    double MoveTimer;                                                                 // 0x02B0 (size: 0x8)
    class UCurveVector* CurveMove;                                                    // 0x02B8 (size: 0x8)
    class ABP_UniqueSkillEffect_Umihebi_WindingTackle_C* TackleEffect;                // 0x02C0 (size: 0x8)

    void GetTackleEffectClass(TSubclassOf<class ABP_UniqueSkillEffect_Umihebi_WindingTackle_C>& Class);
    void TickAction(float DeltaTime);
    void OnNotifyEnd_D691991148CBBAD759CB37B9729AC3A8(FName NotifyName);
    void OnNotifyBegin_D691991148CBBAD759CB37B9729AC3A8(FName NotifyName);
    void OnInterrupted_D691991148CBBAD759CB37B9729AC3A8(FName NotifyName);
    void OnBlendOut_D691991148CBBAD759CB37B9729AC3A8(FName NotifyName);
    void OnCompleted_D691991148CBBAD759CB37B9729AC3A8(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void ProcessStartNotify(FName NotifyName);
    void ExecuteUbergraph_BP_Action_Unique_Umihebi_WindingTackle(int32 EntryPoint);
}; // Size: 0x2C8

#endif
