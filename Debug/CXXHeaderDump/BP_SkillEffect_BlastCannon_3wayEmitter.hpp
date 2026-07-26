#ifndef UE4SS_SDK_BP_SkillEffect_BlastCannon_3wayEmitter_HPP
#define UE4SS_SDK_BP_SkillEffect_BlastCannon_3wayEmitter_HPP

class ABP_SkillEffect_BlastCannon_3wayEmitter_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    int32 MaxSpawnNum;                                                                // 0x0438 (size: 0x4)
    int32 RemainSpawnNum;                                                             // 0x043C (size: 0x4)
    double 3-WayAngle;                                                                // 0x0440 (size: 0x8)
    TArray<double> AngleArray;                                                        // 0x0448 (size: 0x10)
    double BlastSpace;                                                                // 0x0458 (size: 0x8)
    double SpawnRate;                                                                 // 0x0460 (size: 0x8)
    double IgnoreFloorDistance;                                                       // 0x0468 (size: 0x8)
    TArray<double> LastPosHeights;                                                    // 0x0470 (size: 0x10)
    TArray<bool> IgnoreWay;                                                           // 0x0480 (size: 0x10)
    double StepUpDownRange;                                                           // 0x0490 (size: 0x8)

    void ReceiveBeginPlay();
    void SpawnIndicate();
    void PlaySound();
    void ExecuteUbergraph_BP_SkillEffect_BlastCannon_3wayEmitter(int32 EntryPoint);
}; // Size: 0x498

#endif
