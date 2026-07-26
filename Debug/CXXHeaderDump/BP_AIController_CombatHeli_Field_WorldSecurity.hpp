#ifndef UE4SS_SDK_BP_AIController_CombatHeli_Field_WorldSecurity_HPP
#define UE4SS_SDK_BP_AIController_CombatHeli_Field_WorldSecurity_HPP

class ABP_AIController_CombatHeli_Field_WorldSecurity_C : public ABP_AIController_CombatHeli_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0588 (size: 0x8)

    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_BP_AIController_CombatHeli_Field_WorldSecurity(int32 EntryPoint);
}; // Size: 0x590

#endif
