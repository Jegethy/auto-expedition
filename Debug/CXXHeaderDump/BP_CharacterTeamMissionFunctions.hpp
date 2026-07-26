#ifndef UE4SS_SDK_BP_CharacterTeamMissionFunctions_HPP
#define UE4SS_SDK_BP_CharacterTeamMissionFunctions_HPP

class UBP_CharacterTeamMissionFunctions_C : public UPalMapObjectCharacterTeamMissionFunctionsBase
{
    class UCurveFloat* CurveTimeRateByStrengthRate;                                   // 0x0028 (size: 0x8)

    float CalculateRequiredSecondsRateByTeamStrength(const int32 TeamStrengthSum, const int32 RecommendStrength);
    float CalculateRewardRateByTeamStrength(const int32 TeamStrengthSum, const int32 RecommendStrength);
    int32 CalculateCharacterStrength(const class UPalIndividualCharacterParameter* IndividualCharacterParameter);
}; // Size: 0x30

#endif
