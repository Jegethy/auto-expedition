#ifndef UE4SS_SDK_BP_SkillEffect_RootLance_Marker_HPP
#define UE4SS_SDK_BP_SkillEffect_RootLance_Marker_HPP

class ABP_SkillEffect_RootLance_Marker_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    float SecondAttackOffsetTime;                                                     // 0x0438 (size: 0x4)
    float OffsetDistance;                                                             // 0x043C (size: 0x4)
    int32 LanceCount;                                                                 // 0x0440 (size: 0x4)

    void ReceiveBeginPlay();
    void SpawnFirstLance();
    void SecondAttack();
    void ExecuteUbergraph_BP_SkillEffect_RootLance_Marker(int32 EntryPoint);
}; // Size: 0x444

#endif
