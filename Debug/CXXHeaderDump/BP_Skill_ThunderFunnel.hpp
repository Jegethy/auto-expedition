#ifndef UE4SS_SDK_BP_Skill_ThunderFunnel_HPP
#define UE4SS_SDK_BP_Skill_ThunderFunnel_HPP

class ABP_Skill_ThunderFunnel_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    double SpawnOffset;                                                               // 0x0438 (size: 0x8)
    class AActor* Target;                                                             // 0x0440 (size: 0x8)
    int32 NumFunnel;                                                                  // 0x0448 (size: 0x4)
    FVector FunnelLocationOffset;                                                     // 0x0450 (size: 0x18)
    double MaxMoveDuration;                                                           // 0x0468 (size: 0x8)
    TArray<class ABP_Skill_ThunderFunnel_Funnel_C*> Funnels;                          // 0x0470 (size: 0x10)

    void UpdateMaxDuration(double Value);
    void Create Skill Effect(FTransform SpawnTransform, class AActor* Owner, int32 Index, class ABP_SkillEffectBase_C*& SkillEffect);
    void SpawnSkillEffect(FTransform SpawTransform, class AActor* Owner, int32 Index, class ABP_SkillEffectBase_C*& SkillEffect);
    void ReceiveBeginPlay();
    void SetIsReady();
    void ExecuteUbergraph_BP_Skill_ThunderFunnel(int32 EntryPoint);
}; // Size: 0x480

#endif
