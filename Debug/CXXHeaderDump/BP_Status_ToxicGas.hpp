#ifndef UE4SS_SDK_BP_Status_ToxicGas_HPP
#define UE4SS_SDK_BP_Status_ToxicGas_HPP

class UBP_Status_ToxicGas_C : public UPalStatusToxicGas
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    double DamageTimer;                                                               // 0x00B8 (size: 0x8)
    double DamageInterval;                                                            // 0x00C0 (size: 0x8)
    double DamageRate;                                                                // 0x00C8 (size: 0x8)
    double ResistRate_RaidBoss;                                                       // 0x00D0 (size: 0x8)
    double ResistRate_TowerBoss;                                                      // 0x00D8 (size: 0x8)
    double ResistRate_BossExcept;                                                     // 0x00E0 (size: 0x8)

    void Debug Print(FString InString);
    void GetToxicResistRate(double& OutRate);
    int32 GetToxicGasDamage();
    void TickStatus(float DeltaTime);
    void OnEndStatus();
    void OnBeginStatus();
    void ExecuteUbergraph_BP_Status_ToxicGas(int32 EntryPoint);
}; // Size: 0xE8

#endif
