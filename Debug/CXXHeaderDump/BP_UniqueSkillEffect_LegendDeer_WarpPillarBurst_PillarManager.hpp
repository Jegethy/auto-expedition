#ifndef UE4SS_SDK_BP_UniqueSkillEffect_LegendDeer_WarpPillarBurst_PillarManager_HPP
#define UE4SS_SDK_BP_UniqueSkillEffect_LegendDeer_WarpPillarBurst_PillarManager_HPP

class ABP_UniqueSkillEffect_LegendDeer_WarpPillarBurst_PillarManager_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0438 (size: 0x8)
    float PillarBurstDelay;                                                           // 0x0440 (size: 0x4)
    FTimerHandle RainTimer;                                                           // 0x0448 (size: 0x8)
    float PillarInterval;                                                             // 0x0450 (size: 0x4)
    double Range_Raid;                                                                // 0x0458 (size: 0x8)
    double Range_Otomo;                                                               // 0x0460 (size: 0x8)
    TArray<class ABP_UniqueSkillEffect_LegendDeer_WarpPillarBurst_ReadyPillar_C*> Pillars; // 0x0468 (size: 0x10)
    TArray<int32> PillarDistribute_Raid;                                              // 0x0478 (size: 0x10)
    int32 DistCount;                                                                  // 0x0488 (size: 0x4)
    TArray<int32> PillarDistribute_Otomo;                                             // 0x0490 (size: 0x10)
    float RandomOffset;                                                               // 0x04A0 (size: 0x4)
    bool TargetPosSpawned;                                                            // 0x04A4 (size: 0x1)
    FVector TargetLocation;                                                           // 0x04A8 (size: 0x18)
    double MaxAdjustHeight;                                                           // 0x04C0 (size: 0x8)

    void SearchTarget();
    void SpawnPillar();
    void ReceiveBeginPlay();
    void SetScale(double Scale);
    void ActPillar();
    void ExecuteUbergraph_BP_UniqueSkillEffect_LegendDeer_WarpPillarBurst_PillarManager(int32 EntryPoint);
}; // Size: 0x4C8

#endif
