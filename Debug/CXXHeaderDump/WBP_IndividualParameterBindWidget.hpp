#ifndef UE4SS_SDK_WBP_IndividualParameterBindWidget_HPP
#define UE4SS_SDK_WBP_IndividualParameterBindWidget_HPP

class UWBP_IndividualParameterBindWidget_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    TSoftObjectPtr<UPalIndividualCharacterHandle> bindedHandle;                       // 0x0458 (size: 0x30)
    bool IsBindHP;                                                                    // 0x0488 (size: 0x1)
    bool IsBindSP;                                                                    // 0x0489 (size: 0x1)
    bool IsBindHunger;                                                                // 0x048A (size: 0x1)
    bool IsBindFoodAmount;                                                            // 0x048B (size: 0x1)
    bool IsBindNickName;                                                              // 0x048C (size: 0x1)
    bool IsBindSanity;                                                                // 0x048D (size: 0x1)
    bool IsBindExp;                                                                   // 0x048E (size: 0x1)
    bool IgnoreCraftExp;                                                              // 0x048F (size: 0x1)
    bool IsBindLevel;                                                                 // 0x0490 (size: 0x1)
    FWBP_IndividualParameterBindWidget_COnUpdateHP OnUpdateHP;                        // 0x0498 (size: 0x10)
    void OnUpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    FWBP_IndividualParameterBindWidget_COnUpdateSP OnUpdateSP;                        // 0x04A8 (size: 0x10)
    void OnUpdateSP(FFixedPoint64 nowSP, FFixedPoint64 nowMaxSP, bool IsOverHeated);
    FWBP_IndividualParameterBindWidget_COnUpdateHunger OnUpdateHunger;                // 0x04B8 (size: 0x10)
    void OnUpdateHunger(double nowHunger, double nowMaxHunger);
    FWBP_IndividualParameterBindWidget_COnUpdateNickName OnUpdateNickName;            // 0x04C8 (size: 0x10)
    void OnUpdateNickName(FString NewNickName);
    FWBP_IndividualParameterBindWidget_COnUpdateSanity OnUpdateSanity;                // 0x04D8 (size: 0x10)
    void OnUpdateSanity(double nowSanity, double nowMaxSanity);
    FWBP_IndividualParameterBindWidget_COnUpdateExp OnUpdateExp;                      // 0x04E8 (size: 0x10)
    void OnUpdateExp(int64 addExp, int64 oldExp, double nowExpRate);
    FWBP_IndividualParameterBindWidget_COnUpdateLevel OnUpdateLevel;                  // 0x04F8 (size: 0x10)
    void OnUpdateLevel(int32 NewLevel);
    bool isBindActiveSkill;                                                           // 0x0508 (size: 0x1)
    bool isBindPassiveSkill;                                                          // 0x0509 (size: 0x1)
    bool isBindMasteredSkills;                                                        // 0x050A (size: 0x1)
    bool isBindElement;                                                               // 0x050B (size: 0x1)
    bool isBindRank;                                                                  // 0x050C (size: 0x1)
    bool isBindSoul;                                                                  // 0x050D (size: 0x1)
    bool isBindWorkSuitability;                                                       // 0x050E (size: 0x1)
    bool isBindCondition;                                                             // 0x050F (size: 0x1)
    bool isBindBuff;                                                                  // 0x0510 (size: 0x1)
    bool IsPlayerCharacter;                                                           // 0x0511 (size: 0x1)
    bool ignoreAfterBindInitialize;                                                   // 0x0512 (size: 0x1)
    FWBP_IndividualParameterBindWidget_COnUpdateCondition OnUpdateCondition;          // 0x0518 (size: 0x10)
    void OnUpdateCondition();
    FWBP_IndividualParameterBindWidget_COnUpdateActiveSkill OnUpdateActiveSkill;      // 0x0528 (size: 0x10)
    void OnUpdateActiveSkill(TArray<EPalWazaID>& ActiveSkills);
    bool isBindGender;                                                                // 0x0538 (size: 0x1)
    bool isBindRarity;                                                                // 0x0539 (size: 0x1)
    bool ShowLevelPenalty;                                                            // 0x053A (size: 0x1)
    bool GetLevelPenalty;                                                             // 0x053B (size: 0x1)
    TArray<EPalWazaID> TmpWazaArray;                                                  // 0x0540 (size: 0x10)
    FWBP_IndividualParameterBindWidget_COnUpdateMasteredSkill OnUpdateMasteredSkill;  // 0x0550 (size: 0x10)
    void OnUpdateMasteredSkill(class UPalIndividualCharacterParameter* Individual Parameter, EPalWazaID WazaID);
    FWBP_IndividualParameterBindWidget_COnUpdateBuff OnUpdateBuff;                    // 0x0560 (size: 0x10)
    void OnUpdateBuff();
    FWBP_IndividualParameterBindWidget_COnUpdateSoulRank OnUpdateSoulRank;            // 0x0570 (size: 0x10)
    void OnUpdateSoulRank();
    bool IsBindStatusPoint;                                                           // 0x0580 (size: 0x1)
    FWBP_IndividualParameterBindWidget_COnUpdateStatusPoint OnUpdateStatusPoint;      // 0x0588 (size: 0x10)
    void OnUpdateStatusPoint();
    FPalInstanceID SyncId;                                                            // 0x0598 (size: 0x30)
    bool IsBindTalent;                                                                // 0x05C8 (size: 0x1)
    FWBP_IndividualParameterBindWidget_COnUpdateTalent OnUpdateTalent;                // 0x05D0 (size: 0x10)
    void OnUpdateTalent();
    FWBP_IndividualParameterBindWidget_COnUpdateWorkSuitabilityOption OnUpdateWorkSuitabilityOption; // 0x05E0 (size: 0x10)
    void OnUpdateWorkSuitabilityOption(FPalWorkSuitabilityPreferenceInfo Info);
    bool isBindFavorite;                                                              // 0x05F0 (size: 0x1)
    FWBP_IndividualParameterBindWidget_COnUpdateFavorite OnUpdateFavorite;            // 0x05F8 (size: 0x10)
    void OnUpdateFavorite(int32 NewIndex);
    bool isBindShield;                                                                // 0x0608 (size: 0x1)
    FWBP_IndividualParameterBindWidget_COnUpdateShield OnUpdateShield;                // 0x0610 (size: 0x10)
    void OnUpdateShield(FFixedPoint64 NowShield, FFixedPoint64 MaxShield);
    bool isBindImportedFlag;                                                          // 0x0620 (size: 0x1)
    bool IsBindFriendShip;                                                            // 0x0621 (size: 0x1)
    FWBP_IndividualParameterBindWidget_COnChangedFriendshipRank OnChangedFriendshipRank; // 0x0628 (size: 0x10)
    void OnChangedFriendshipRank(int32 NewRank, int32 OldRank, bool FavoriteChanged);
    bool SkipOverrideLevel;                                                           // 0x0638 (size: 0x1)
    FWBP_IndividualParameterBindWidget_COnChangedFriendshipPoint OnChangedFriendshipPoint; // 0x0640 (size: 0x10)
    void OnChangedFriendshipPoint(int32 NewPoint);
    bool IsBindAwakening;                                                             // 0x0650 (size: 0x1)

    void GetBindedIndividualParameter(class UPalIndividualCharacterParameter*& IndividualParameter);
    void SetAwakening(bool bAwaked);
    void OnAwakening_Internal();
    void OnUpdateFriendshipPoint_Internal(class UPalIndividualCharacterParameter* IndividualParameter, const int32 NewPoint);
    void OnUpdateFriendshipRank_Internal(class UPalIndividualCharacterParameter* IndividualParameter, const int32 NewFriendshipRank, const int32 OldRank, bool FavoriteChanged);
    void SetFriendShip(int32 FriendshipRank, int32 FriendshipPoint);
    void SetImportedFlag(bool bImportedFlag);
    void OnSessionMemberChangeEvent(FString UserId, const EPalSessionMemberChange ChangeType);
    void UpdateForPsn();
    void On Update Shield Internal(FFixedPoint64 MaxShield, FFixedPoint64 NowShield);
    void OnUpdateFavorite_Internal(int32 NewIndex);
    void OnUpdateWorkSuitabilityOption_Internal(const FPalWorkSuitabilityPreferenceInfo& NewWorkSuitabilityOption);
    void SyncBind(FPalInstanceID InstanceId);
    void On Update Trainer Level Internal(int32 addLevel, int32 nowLevel);
    void OnUpdateStatusPoint_Internal();
    void OnUpdateSoulRank_Internal();
    void SetRarity(bool IsBoss, bool IsRare);
    void SetSoulRank(int32 Rank);
    void SetGender(EPalGenderType GenderType);
    void SetFoodAmount(int32 FoodAmount);
    void Set Work Suitability(TMap<EPalWorkSuitability, int32> WorkSuitabilities);
    void SetPassiveSkill(TArray<FName>& PassiveSkills);
    void OnUpdateBuff_Internal();
    void OnUpdateMasteredWaza_Internal(class UPalIndividualCharacterParameter* IndividualParameter, EPalWazaID WazaID);
    void OnUpdateWaza_Internal(EPalWazaID WazaID);
    void SetRank(int32 Rank);
    void SetElementType(EPalElementType type1, EPalElementType type2);
    void GetBindedHandle(class UPalIndividualCharacterHandle*& targetHandle);
    void On Update Level Internal(int32 addLevel, int32 nowLevel);
    void OnUpdateExp_Internal(int64 addExp, int64 NowExp, EPalExpCalcType ExpType);
    void OnCheckCondition_Internal();
    void OnUpdateSanity_Internal(float nowSanity, float oldSanity);
    void OnUpdateTalent_Internal();
    void OnUpdateNickName_Internal(class UPalIndividualCharacterParameter* IndividualParameter, FString NewNickName);
    void Unbind();
    void On Update Hunger Internal(float Current, float Last);
    void OnUpdateSP_Internal(FFixedPoint64 nowSP, FFixedPoint64 nowMaxSP, bool IsOverHeated);
    void OnUpdateHP_Internal(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void UnbindEvent();
    void Bind Event(class UPalIndividualCharacterParameter* targetParam);
    void BindFromSlot(class UPalIndividualCharacterSlot* TargetSlot);
    void BindFromHandle(class UPalIndividualCharacterHandle* targetHandle);
    void Destruct();
    void ExecuteUbergraph_WBP_IndividualParameterBindWidget(int32 EntryPoint);
    void OnChangedFriendshipPoint__DelegateSignature(int32 NewPoint);
    void OnChangedFriendshipRank__DelegateSignature(int32 NewRank, int32 OldRank, bool FavoriteChanged);
    void OnUpdateShield__DelegateSignature(FFixedPoint64 NowShield, FFixedPoint64 MaxShield);
    void OnUpdateFavorite__DelegateSignature(int32 NewIndex);
    void OnUpdateWorkSuitabilityOption__DelegateSignature(FPalWorkSuitabilityPreferenceInfo Info);
    void OnUpdateTalent__DelegateSignature();
    void OnUpdateStatusPoint__DelegateSignature();
    void OnUpdateSoulRank__DelegateSignature();
    void OnUpdateBuff__DelegateSignature();
    void OnUpdateMasteredSkill__DelegateSignature(class UPalIndividualCharacterParameter* Individual Parameter, EPalWazaID WazaID);
    void OnUpdateActiveSkill__DelegateSignature(TArray<EPalWazaID>& ActiveSkills);
    void OnUpdateCondition__DelegateSignature();
    void OnUpdateLevel__DelegateSignature(int32 NewLevel);
    void OnUpdateExp__DelegateSignature(int64 addExp, int64 oldExp, double nowExpRate);
    void OnUpdateSanity__DelegateSignature(double nowSanity, double nowMaxSanity);
    void OnUpdateNickName__DelegateSignature(FString NewNickName);
    void OnUpdateHunger__DelegateSignature(double nowHunger, double nowMaxHunger);
    void OnUpdateSP__DelegateSignature(FFixedPoint64 nowSP, FFixedPoint64 nowMaxSP, bool IsOverHeated);
    void OnUpdateHP__DelegateSignature(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
}; // Size: 0x651

#endif
