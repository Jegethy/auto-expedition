#ifndef UE4SS_SDK_BP_BossBattleEventBase_HPP
#define UE4SS_SDK_BP_BossBattleEventBase_HPP

class ABP_BossBattleEventBase_C : public APalBossBattleEventBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C8 (size: 0x8)
    class ABP_BossBattle_BossCharacterSpawner_C* BossSpawner;                         // 0x02D0 (size: 0x8)

    void ActivateCharacterByLocation(class UPalIndividualCharacterHandle* IndividualHandle, const FVector Location);
    void ActivateCharacter(class UPalIndividualCharacterHandle* IndividualHandle, const FVector Offset);
    void GetDebugNo(int32 BitFlag, bool& Result);
    void SetSpawner(class ABP_BossBattle_BossCharacterSpawner_C* Spawner);
    void OnTerminate();
    void ExecuteUbergraph_BP_BossBattleEventBase(int32 EntryPoint);
}; // Size: 0x2D8

#endif
