#ifndef UE4SS_SDK_BP_Arena_SoloNPCSpawner_HPP
#define UE4SS_SDK_BP_Arena_SoloNPCSpawner_HPP

class ABP_Arena_SoloNPCSpawner_C : public APalArenaSoloNPCSpawner
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02F0 (size: 0x8)
    class UPalIndividualCharacterHandle* NPCHandle;                                   // 0x02F8 (size: 0x8)
    TArray<class UPalIndividualCharacterHandle*> OtomoHandleList;                     // 0x0300 (size: 0x10)
    int32 SpawnedNum;                                                                 // 0x0310 (size: 0x4)

    void SpawnOtomoDelegate(FPalInstanceID ID);
    void AllSpawnedCheck();
    void SpawnNPCDelegate(FPalInstanceID ID);
    TArray<class UPalIndividualCharacterHandle*> GetOtomoHandleList();
    class UPalIndividualCharacterHandle* GetNPCHandle();
    void RequestSpawn();
    void ReceiveDestroyed();
    void カスタムイベント(FPalInstanceID ID);
    void ExecuteUbergraph_BP_Arena_SoloNPCSpawner(int32 EntryPoint);
}; // Size: 0x314

#endif
