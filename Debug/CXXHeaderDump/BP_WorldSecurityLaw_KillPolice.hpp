#ifndef UE4SS_SDK_BP_WorldSecurityLaw_KillPolice_HPP
#define UE4SS_SDK_BP_WorldSecurityLaw_KillPolice_HPP

class UBP_WorldSecurityLaw_KillPolice_C : public UPalWorldSecurityLawTrigger_CharacterDead
{

    bool Condition(const FPalDeadInfo& DeadInfo, class UPalIndividualCharacterHandle*& CriminalHandle);
    void IsValidCharacterActor(class AActor* Actor, bool& bValid, class UPalCharacterParameterComponent*& CharacterParameter);
    void IsPolice(EPalOrganizationType OrganizationType, bool& bCitizen);
}; // Size: 0x40

#endif
