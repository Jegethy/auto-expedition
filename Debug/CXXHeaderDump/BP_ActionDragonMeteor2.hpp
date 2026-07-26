#ifndef UE4SS_SDK_BP_ActionDragonMeteor2_HPP
#define UE4SS_SDK_BP_ActionDragonMeteor2_HPP

class UBP_ActionDragonMeteor2_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    double Height;                                                                    // 0x02F0 (size: 0x8)
    int32 MeteorCount;                                                                // 0x02F8 (size: 0x4)
    TArray<FVector> Out Locations;                                                    // 0x0300 (size: 0x10)
    float Interval;                                                                   // 0x0310 (size: 0x4)
    int32 CurrentCount;                                                               // 0x0314 (size: 0x4)
    FTimerHandle MeteorTimer;                                                         // 0x0318 (size: 0x8)

    void CalcMeteorLocation(int32 Index, TArray<FVector>& OutLocations);
    void OnStartProcessAnimation();
    void OnBeginAction();
    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void OnEndAction();
    void SpawnMeteor();
    void ExecuteUbergraph_BP_ActionDragonMeteor2(int32 EntryPoint);
}; // Size: 0x320

#endif
