#ifndef UE4SS_SDK_WBP_BossEnemyHPGauge_HPP
#define UE4SS_SDK_WBP_BossEnemyHPGauge_HPP

class UWBP_BossEnemyHPGauge_C : public UPalUICharacterHPGaugeBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Close;                                                    // 0x0458 (size: 0x8)
    class UWBP_IngameBossHP_C* WBP_IngameBossHP;                                      // 0x0460 (size: 0x8)
    class APalCharacter* TargetCharacter;                                             // 0x0468 (size: 0x8)
    class UPalIndividualCharacterParameter* TargetIndividualParameter;                // 0x0470 (size: 0x8)
    FWBP_BossEnemyHPGauge_COnDead OnDead;                                             // 0x0478 (size: 0x10)
    void OnDead(class APalCharacter* TargetCharacter);
    bool isAlreadyDead;                                                               // 0x0488 (size: 0x1)
    FTimerHandle UpdateDetailTimer;                                                   // 0x0490 (size: 0x8)

    void UpdateStatusEffect();
    void OnTimerEvent_UpdateDetail();
    void OnUpdateElement(EPalElementType type1, EPalElementType type2);
    void On Update Level(int32 addLevel, int32 nowLevel);
    void OnUpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void OnRequestClose();
    void UpdateVisibility();
    void UpdateText();
    void SetupEvents();
    void SetTargetCharacter(class APalCharacter* TargetCharacter);
    void Finished_10F7592E48B01E3F065E49BC1224338C();
    void AnmEvent_Close();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destruct();
    void ExecuteUbergraph_WBP_BossEnemyHPGauge(int32 EntryPoint);
    void OnDead__DelegateSignature(class APalCharacter* TargetCharacter);
}; // Size: 0x498

#endif
