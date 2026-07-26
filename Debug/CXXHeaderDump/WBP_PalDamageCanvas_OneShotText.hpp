#ifndef UE4SS_SDK_WBP_PalDamageCanvas_OneShotText_HPP
#define UE4SS_SDK_WBP_PalDamageCanvas_OneShotText_HPP

class UWBP_PalDamageCanvas_OneShotText_C : public UPalDamageDisplayCanvas
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04F0 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x04F8 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0500 (size: 0x8)
    int32 Damage;                                                                     // 0x0508 (size: 0x4)
    FVector Hit Location;                                                             // 0x0510 (size: 0x18)
    double DisplayTime;                                                               // 0x0528 (size: 0x8)
    float DamageTextDisplayLength;                                                    // 0x0530 (size: 0x4)
    double DamageTextScale;                                                           // 0x0538 (size: 0x8)
    int32 MaxDisplayNum;                                                              // 0x0540 (size: 0x4)
    bool bPlayerHasMercyHit;                                                          // 0x0544 (size: 0x1)
    TArray<class UPalUIDamageTextBase*> CurrentDIsplayingDamageText;                  // 0x0548 (size: 0x10)

    void Get Additional Effect (FPalDamageInfo DamageInfo, TArray<EPalAdditionalEffectType>& AdditionalEffect);
    void RemoveDamageText(class UPalUIDamageTextBase* RemoveWidget);
    void OnEndDamageTextOutAnim(class UWBP_PalDamageText_C* Widget);
    void IsMuteki(class AActor* Defender, bool& bMuteki);
    void OnUpdatePlayerEquipment(class UPalItemSlot* itemSlot, EPalPlayerEquipItemSlotType slotType);
    void IsKillShot(class AActor* Defender, int32 DIsplayDamage, bool& bKill);
    void HasMercyHit(class AActor* CheckCharacter, bool& bHasMercyHit);
    void OnEndPlayerPassiveSkillEffect(EPalPassiveSkillEffectType EffectType);
    void OnStartPlayerPassiveSkill(EPalPassiveSkillEffectType EffectType, float Value);
    void RegisterMarcyHitCheckEvent();
    void OnChangedUISettings(const FPalOptionUISettings& PrevSettings, const FPalOptionUISettings& NewSettings);
    void IsEquipAttacker(class AActor* Attacker, bool& IsEquip);
    void CalcLengthToPlayer(FVector HitLocation, double& Length);
    void CalcTargetLocation(FPalDamageInfo DamageInfo, class AActor* Defender, FVector& Location);
    void Add New Damage Text(FPalDamageInfo DamageInfo, class AActor* Defender);
    void CreateOrPopDamageWidget(class UPalUIDamageTextBase*& createdWdiget);
    void CalcDamageTextType(FPalDamageInfo DamageInfo, class AActor* Defender, double DamageRate, int32 weakCount, int32 DIsplayDamage, FPalCalculatedDamageInfo CalculatedDamageInfo, EPalDamageTextType& textType, bool& bMercyHit);
    void OnSetup();
    void Destruct();
    void AddDamageTextEvent(const FPalDamageInfo& DamageInfo, class AActor* Defender);
    void OnInitialized();
    void OnSetup_AfterCreatedPlayer();
    void ReceiveDamageEntries(const TArray<FPalDamageDisplayEntry>& Entries);
    void ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText(int32 EntryPoint);
}; // Size: 0x558

#endif
