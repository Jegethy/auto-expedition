#ifndef UE4SS_SDK_BP_WorldSecurityLaw_Murder_HPP
#define UE4SS_SDK_BP_WorldSecurityLaw_Murder_HPP

class UBP_WorldSecurityLaw_Murder_C : public UPalWorldSecurityLawTrigger_CharacterDead
{

    bool Condition(const FPalDeadInfo& DeadInfo, class UPalIndividualCharacterHandle*& CriminalHandle);
    void IsValidCharacterActor(class AActor* Actor, bool& bValid, class UPalCharacterParameterComponent*& CharacterParameter);
    void IsNPC(EPalOrganizationType OrganizationType, bool& bCitizen);
}; // Size: 0x40

#endif
