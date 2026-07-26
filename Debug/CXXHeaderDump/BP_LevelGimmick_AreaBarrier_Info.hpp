#ifndef UE4SS_SDK_BP_LevelGimmick_AreaBarrier_Info_HPP
#define UE4SS_SDK_BP_LevelGimmick_AreaBarrier_Info_HPP

class ABP_LevelGimmick_AreaBarrier_Info_C : public APalLevelGimmick_AreaBarrier_Info
{
    FVector CutsceneActorSpawnLocation;                                               // 0x0390 (size: 0x18)
    class APalCutsceneActor* CutsceneActor;                                           // 0x03A8 (size: 0x8)
    FTimerHandle CutsceneWorldParitionTimerHandle;                                    // 0x03B0 (size: 0x8)

    void CutsceneFinishFadeIn(bool bIsSkipped);
    void PlayCutsceneInternal();
    void CutSceneWaitForWorldPartition();
    void CutsceneStartWaitForWorldPartition();
    void CutsceneStartFadeOut();
    void SpawnCutsceneActor();
    bool ShouldPlayCutscene(FGuid LockId, bool bLockStateChanged, bool bForce);
    void PlayCutsceneIfNecessary(FGuid LockId, bool bLockStateChanged, bool bForce);
}; // Size: 0x3B8

#endif
