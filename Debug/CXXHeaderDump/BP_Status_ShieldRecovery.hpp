#ifndef UE4SS_SDK_BP_Status_ShieldRecovery_HPP
#define UE4SS_SDK_BP_Status_ShieldRecovery_HPP

class UBP_Status_ShieldRecovery_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    bool IsRecoverAble;                                                               // 0x00B8 (size: 0x1)
    bool InitEnd;                                                                     // 0x00B9 (size: 0x1)
    double DamageWeight;                                                              // 0x00C0 (size: 0x8)
    double tempDeltaTime;                                                             // 0x00C8 (size: 0x8)
    double Const_MutekiTime;                                                          // 0x00D0 (size: 0x8)
    FName flagName;                                                                   // 0x00D8 (size: 0x8)
    double RecoverStartTimer;                                                         // 0x00E0 (size: 0x8)

    void GetShieldRecoveryTime(double& RecoveryTime);
    void CreateDynamicMaterial();
    void ChangeSheildDamageMaterial();
    void GetParam(class UPalIndividualCharacterParameter*& IP);
    void OnBeginStatus();
    void TickStatus(float DeltaTime);
    void OnEndStatus();
    void カスタムイベント_OnDamage(FPalDamageResult DamageResult);
    void カスタムイベント_OnSlipDamage(const FPalDamageResult& DamageResult);
    void カスタムイベント_1(class APalCharacter* InCharacter);
    void カスタムイベント_DamageShield(int32 Damage, bool IsShieldBroken);
    void ExecuteUbergraph_BP_Status_ShieldRecovery(int32 EntryPoint);
}; // Size: 0xE8

#endif
