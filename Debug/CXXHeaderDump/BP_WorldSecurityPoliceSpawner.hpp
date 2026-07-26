#ifndef UE4SS_SDK_BP_WorldSecurityPoliceSpawner_HPP
#define UE4SS_SDK_BP_WorldSecurityPoliceSpawner_HPP

class UBP_WorldSecurityPoliceSpawner_C : public UPalWorldSecurityPoliceSpawner
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    TSubclassOf<class UPalAIActionBase> PoliceAIAction;                               // 0x0290 (size: 0x8)
    class APalAIController* AIController;                                             // 0x0298 (size: 0x8)
    TSubclassOf<class UPalAIActionBase> HeliPoliceAIAction;                           // 0x02A0 (size: 0x8)
    int32 HeliSpawnCounter;                                                           // 0x02A8 (size: 0x4)
    TSubclassOf<class UPalAIActionBase> HeliDropOffPoliceAIAction;                    // 0x02B0 (size: 0x8)
    FBP_WorldSecurityPoliceSpawner_COnHeliRequestPoliceSpawn OnHeliRequestPoliceSpawn; // 0x02B8 (size: 0x10)
    void OnHeliRequestPoliceSpawn(FVector Location);
    FBP_WorldSecurityPoliceSpawner_COnHeliDropOffFallback OnHeliDropOffFallback;      // 0x02C8 (size: 0x10)
    void OnHeliDropOffFallback(int32 Count);

    void NotifyHeliDropOffFallback(int32 Count);
    void NotifyHeliDropOffRequest(FVector Location);
    void HasWeapon(class ABP_NPCAIController_C* NPCController, bool& HasWeapon);
    void GetCombatGunBP(class ABP_NPCAIController_C* AIController, class UBP_AIAction_NPC_Combat_Gun_C*& CombatAIAction);
    void FinderChangeAction(class APalCharacter* Reporter, class APalCharacter* WantedPlayer, EPalOrganizationType Organization);
    void ReporterChangeAction(class APalCharacter* Reporter, class APalCharacter* Criminal);
    bool CheckPoliceAIActionState(class APalAIController* CheckPolice);
    void OnInitializedNPC(class APalAIController* NPCAIController);
    void InitialNPC();
    void OnInitialize();
    void ChangePoliceInSight(bool IsInSight, bool IsWanted);
    void OnStartCombatMode();
    void OnPoliceAlertSate(bool IsAlerted, bool IsFound, float DiscoveryGaugeNormalized, float DiscoveryGaugeRatePerSec, bool IsWanted);
    void InitializeNPC_Heli();
    void OnReleasedWanted();
    void OnRespawnPolices(class UPalIndividualCharacterHandle* DespawnHandle);
    void ExecuteUbergraph_BP_WorldSecurityPoliceSpawner(int32 EntryPoint);
    void OnHeliDropOffFallback__DelegateSignature(int32 Count);
    void OnHeliRequestPoliceSpawn__DelegateSignature(FVector Location);
}; // Size: 0x2D8

#endif
