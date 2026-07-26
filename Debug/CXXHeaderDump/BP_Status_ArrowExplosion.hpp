#ifndef UE4SS_SDK_BP_Status_ArrowExplosion_HPP
#define UE4SS_SDK_BP_Status_ArrowExplosion_HPP

class UBP_Status_ArrowExplosion_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class APalCharacter* Otomo;                                                       // 0x00B8 (size: 0x8)
    class UPalIndividualCharacterHandleReference* OtomoHandle;                        // 0x00C0 (size: 0x8)

    void SpawnEffect(FPalPassiveEffectTriggerInfo TriggerInfo);
    void OnHit(FHitResult& HitResult, int32 WeaponPower);
    void SetupOtomo(class APalCharacter* Otomo);
    void OnBeginStatus();
    void OnEndStatus();
    void OnUpdateOtomoActor(class UPalIndividualCharacterHandle* Handle);
    void OnPassiveEffectTriggered(FPalPassiveEffectTriggerInfo TriggerInfo);
    void ExecuteUbergraph_BP_Status_ArrowExplosion(int32 EntryPoint);
}; // Size: 0xC8

#endif
