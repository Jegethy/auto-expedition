#ifndef UE4SS_SDK_BP_Status_PlayerInflictEffectBase_HPP
#define UE4SS_SDK_BP_Status_PlayerInflictEffectBase_HPP

class UBP_Status_PlayerInflictEffectBase_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class APalPlayerCharacter* Player;                                                // 0x00B8 (size: 0x8)
    class APalCharacter* Otomo;                                                       // 0x00C0 (size: 0x8)
    class UPalIndividualCharacterHandleReference* OtomoHandle;                        // 0x00C8 (size: 0x8)

    void OnInflictDamage(const FPalDamageResult& DamageResult);
    void SetupOtomo(class APalCharacter* Otomo);
    void OnBeginStatus();
    void OnUpdateOtomoActor(class UPalIndividualCharacterHandle* Handle);
    void OnEndStatus();
    void ExecuteUbergraph_BP_Status_PlayerInflictEffectBase(int32 EntryPoint);
}; // Size: 0xD0

#endif
