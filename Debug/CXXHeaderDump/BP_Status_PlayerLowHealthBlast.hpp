#ifndef UE4SS_SDK_BP_Status_PlayerLowHealthBlast_HPP
#define UE4SS_SDK_BP_Status_PlayerLowHealthBlast_HPP

class UBP_Status_PlayerLowHealthBlast_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class APalPlayerCharacter* Player;                                                // 0x00B8 (size: 0x8)
    double TriggerHpRate;                                                             // 0x00C0 (size: 0x8)
    double RefreashHPRate;                                                            // 0x00C8 (size: 0x8)
    bool CanTrigger;                                                                  // 0x00D0 (size: 0x1)
    class APalCharacter* Otomo;                                                       // 0x00D8 (size: 0x8)
    class UPalIndividualCharacterHandleReference* OtomoHandle;                        // 0x00E0 (size: 0x8)

    void SpawnEffect();
    void SetupOtomo(class APalCharacter* Otomo);
    void OnUpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void OnBeginStatus();
    void OnEndStatus();
    void OnUpdateOtomoActor(class UPalIndividualCharacterHandle* Handle);
    void OnPlayerInitialized(class APalCharacter* InCharacter);
    void OnPassiveEffectTriggered(FPalPassiveEffectTriggerInfo TriggerInfo);
    void ExecuteUbergraph_BP_Status_PlayerLowHealthBlast(int32 EntryPoint);
}; // Size: 0xE8

#endif
