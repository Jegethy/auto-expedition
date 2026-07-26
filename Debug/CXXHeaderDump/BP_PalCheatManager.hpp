#ifndef UE4SS_SDK_BP_PalCheatManager_HPP
#define UE4SS_SDK_BP_PalCheatManager_HPP

class UBP_PalCheatManager_C : public UPalCheatManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0840 (size: 0x8)
    class AActor* tempPlayer;                                                         // 0x0848 (size: 0x8)

    void TogglePalSpawner();
    void LaunchNewBuildObjectUI();
    void DebugItemWindow();
    void ToggleAllDebugInfo();
    void StartWildPalCombat();
    void TimeStopForBP();
    void OpenMultiBattleMapForBP();
    void OpenPrivateServerForBP();
    void SpectatorOnForBP();
    void ToggleRevision_BP();
    void HideTutorialQuest_BP();
    void PlayAreaBarrierUnlockCutscene_BP();
    void ExecuteUbergraph_BP_PalCheatManager(int32 EntryPoint);
}; // Size: 0x850

#endif
