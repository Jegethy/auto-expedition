#ifndef UE4SS_SDK_WBP_PlayerSideInfo_Separated_HPP
#define UE4SS_SDK_WBP_PlayerSideInfo_Separated_HPP

class UWBP_PlayerSideInfo_Separated_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0658 (size: 0x8)
    class UWBP_Ingame_PlayerGauge_Separated_C* WBP_Ingame_PlayerGauge_Separated;      // 0x0660 (size: 0x8)
    FTimerHandle CheckCaptureCountTimerHandle;                                        // 0x0668 (size: 0x8)
    FTimerHandle CheckFirstActivationPalTimerHandle;                                  // 0x0670 (size: 0x8)
    FTimerHandle TimerHandle_CheckBulletChangeTutorial;                               // 0x0678 (size: 0x8)
    bool bDisableSummonGuide;                                                         // 0x0680 (size: 0x1)
    bool bIsRiding;                                                                   // 0x0681 (size: 0x1)

    void CREATEDELEGATE_PROXYFUNCTION_0(const class APalWeaponBase* WeaponActor, const FName& BulletItemId);
    void OnChangedUISettings(const FPalOptionUISettings& PrevSettings, const FPalOptionUISettings& NewSettings);
    void BindOtomoPassiveSkillEvents(class APalCharacter* Character);
    void UnbindOtomoPassiveKillEvents(class APalCharacter* Character);
    void OnInitializedOtomo(class APalCharacter* Character);
    void OnRemoveStatusOtomo(const class UPalStatusComponent* StatusComponent, EPalStatusID statusID);
    void OnAddStatusOtomo(const class UPalStatusComponent* StatusComponent, EPalStatusID statusID, class UPalStatusBase* Status);
    void On Update Otomo(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle);
    void OnEndJetpack();
    void OnStartJetpack();
    void UpdateOtomoPassiveInfo();
    void OnEndPassiveSkill(EPalPassiveSkillEffectType EffectType);
    void OnStartPassiveSkill(EPalPassiveSkillEffectType EffectType, float Value);
    void ShouldShowDirectOrderKeyGuide(bool& bShouldShow);
    void OnTimerEvent_CheckBulletChangeTutorial();
    void OnChangedInputMethod(ECommonInputType bNewInputType);
    void OnChangedBullet(const class APalWeaponBase*& WeaponActor, const FName& BulletItemId);
    void SetVisibilityRightInfo(bool bVisible);
    void OnTimer_CheckActivationOtomo();
    void DisableFirstSummonPalGuide();
    void EnableFirstSummonPalGuide();
    void OnTimer_CheckCaptureCount();
    void SetupFirstPalThrowGuide();
    void OnUpdateUsableHandFlag(bool CanUseLeftHandFlag, bool CanUseRightHandFlag);
    void OnEndAim();
    void OnAim();
    void OnChangedBodyTenperatureState(EPalBodyTemperatureState BodyState);
    void OnChangedTenperatureRegistRate(int32 NextResistHeat, int32 NextResistCold);
    void OnGetOff(class AActor* RideActor);
    void OnRideon(class AActor* RideActor);
    void Setup();
    void OnUpdatePlayerInventory(class UPalItemContainer* Container);
    void OnUpdatePlayerEquipment(class UPalItemSlot* itemSlot, EPalPlayerEquipItemSlotType slotType);
    void OnDamagePlayer(FPalDamageResult DamageResult);
    void OnChangeOtomoIndex();
    void OnChangedLoadoutIndex(EPalPlayerInventoryType inventoryType, int32 Index);
    void OnChangedTemperature(int32 NextTemperature);
    void OnInitialized();
    void Destruct();
    void UpdateHunger_Binded(double nowHunger, double nowMaxHunger);
    void UpdatePlayerBuff();
    void ExecuteUbergraph_WBP_PlayerSideInfo_Separated(int32 EntryPoint);
}; // Size: 0x682

#endif
