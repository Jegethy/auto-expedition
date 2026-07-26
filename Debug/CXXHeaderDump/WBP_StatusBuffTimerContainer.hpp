#ifndef UE4SS_SDK_WBP_StatusBuffTimerContainer_HPP
#define UE4SS_SDK_WBP_StatusBuffTimerContainer_HPP

class UWBP_StatusBuffTimerContainer_C : public UUserWidget
{
    class UHorizontalBox* HorizontalBox_Buff;                                         // 0x0278 (size: 0x8)
    class UHorizontalBox* HorizontalBox_PassiveSkill;                                 // 0x0280 (size: 0x8)
    TMap<EPalFoodStatusEffectType, int32> Effects;                                    // 0x0288 (size: 0x50)
    TArray<FPalInstanceID> DisplayingPersistentPassiveGranterInstanceIds;             // 0x02D8 (size: 0x10)

    void GetFoodBuffForStatusBuffTimer(EPalFoodStatusEffectType BuffType, TEnumAsByte<E_PalFoodStatusForStatusBuffTimer::Type>& BuffTypeForStatusBuffTimer);
    void AddFoddBuff(FName EffectName, class UPalIndividualCharacterParameter* IndividualParameter);
    void ShouldDisplayPassiveSkill(FPalPassiveSkillEffect SkillEffect, bool& bShouldDisplay);
    void DisplayPassiveSkillInfo(FPalInstanceID GranterId, FPalPassiveSkillEffect SkillEffect, class UPalStatusBase* Status);
    void ClearPassiveSkillInfo();
    void UpdateCharacterBuff(class UPalIndividualCharacterParameter* individualParam);
}; // Size: 0x2E8

#endif
