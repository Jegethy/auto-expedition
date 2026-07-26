#ifndef UE4SS_SDK_BP_SquadNPCSpawner_ForCampBase_HPP
#define UE4SS_SDK_BP_SquadNPCSpawner_ForCampBase_HPP

class ABP_SquadNPCSpawner_ForCampBase_C : public ABP_SquadNPCSpawner_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0670 (size: 0x8)
    bool IgnoreRayAdjustFloor;                                                        // 0x0678 (size: 0x1)

    void AdjustFloor(class AActor* SpaenedChara);
    void RayAdjustFloor();
    void DeleteOnePoint(class AActor* Point);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SquadNPCSpawner_ForCampBase(int32 EntryPoint);
}; // Size: 0x679

#endif
