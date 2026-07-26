#ifndef UE4SS_SDK_BP_Status_PlayerElementStepAttackBase_HPP
#define UE4SS_SDK_BP_Status_PlayerElementStepAttackBase_HPP

class UBP_Status_PlayerElementStepAttackBase_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class APalPlayerCharacter* Player;                                                // 0x00B8 (size: 0x8)
    TSubclassOf<class ABP_SkillEffect_PlayerElementStepAttackBase_C> SkillEffectClass; // 0x00C0 (size: 0x8)
    class APalCharacter* Otomo;                                                       // 0x00C8 (size: 0x8)
    class UPalIndividualCharacterHandleReference* OtomoHandle;                        // 0x00D0 (size: 0x8)
    class ABP_SkillEffect_PlayerElementStepAttackBase_C* SkillEffect;                 // 0x00D8 (size: 0x8)

    void SetupOtomo(class APalCharacter* Otomo);
    void OnEndRolling();
    void OnStartRolling();
    void OnBeginStatus();
    void OnEndStatus();
    void OnUpdateOtomoActor(class UPalIndividualCharacterHandle* Handle);
    void ExecuteUbergraph_BP_Status_PlayerElementStepAttackBase(int32 EntryPoint);
}; // Size: 0xE0

#endif
