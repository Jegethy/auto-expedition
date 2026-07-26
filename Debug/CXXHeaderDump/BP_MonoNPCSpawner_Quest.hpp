#ifndef UE4SS_SDK_BP_MonoNPCSpawner_Quest_HPP
#define UE4SS_SDK_BP_MonoNPCSpawner_Quest_HPP

class ABP_MonoNPCSpawner_Quest_C : public ABP_MonoNPCSpawner_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0608 (size: 0x8)
    FDataTableRowHandle QuestId;                                                      // 0x0610 (size: 0x10)
    FBP_MonoNPCSpawner_Quest_COnSpawned OnSpawned;                                    // 0x0620 (size: 0x10)
    void OnSpawned();
    bool DefaultAI Active;                                                            // 0x0630 (size: 0x1)
    UClass* QuestBlockClass;                                                          // 0x0638 (size: 0x8)
    TArray<FName> BattleTargetCharacterId;                                            // 0x0640 (size: 0x10)
    class USphereComponent* Sphere_ForceProgressQuest;                                // 0x0650 (size: 0x8)

    bool IsBlockInProgress(TSubclassOf<class UPalQuestBlock> QuestBlock, const FName& QuestId, class UPalQuestManager* QuestManager);
    void On Dead(FPalDeadInfo DeadInfo);
    void Despawn();
    void SpawnDelegate(FPalInstanceID ID);
    void ReceiveBeginPlay();
    void OnSpawned_Event();
    void WaitQuestBlockInProgress();
    void WaitQuestEnemyOverlap();
    void BlueprintTick_Spawned(float DeltaTime);
    void ExecuteUbergraph_BP_MonoNPCSpawner_Quest(int32 EntryPoint);
    void OnSpawned__DelegateSignature();
}; // Size: 0x658

#endif
