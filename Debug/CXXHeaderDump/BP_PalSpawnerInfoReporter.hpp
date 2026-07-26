#ifndef UE4SS_SDK_BP_PalSpawnerInfoReporter_HPP
#define UE4SS_SDK_BP_PalSpawnerInfoReporter_HPP

class ABP_PalSpawnerInfoReporter_C : public APalDebug_SpawnInfoReporter
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C8 (size: 0x8)

    FString GetDebugInfoString(class APalNPCSpawnerBase* Spawner);
}; // Size: 0x2D0

#endif
