#ifndef UE4SS_SDK_BP_SkillEffect_Unique_FireKirin_Tackle_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_FireKirin_Tackle_HPP

class ABP_SkillEffect_Unique_FireKirin_Tackle_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    TArray<class UBoxComponent*> BoxCollisions;                                       // 0x0438 (size: 0x10)
    int32 CurrentIndex;                                                               // 0x0448 (size: 0x4)
    double BoxDistance;                                                               // 0x0450 (size: 0x8)
    FVector BoxExtent;                                                                // 0x0458 (size: 0x18)
    FVector PreBoxLocation;                                                           // 0x0470 (size: 0x18)
    FTimerHandle NewVar;                                                              // 0x0488 (size: 0x8)

    void GetCurrentDistance(double& Distance);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void FadeOutEffect(double DeltaSecond);
    void DisableBlock();
    void ExecuteUbergraph_BP_SkillEffect_Unique_FireKirin_Tackle(int32 EntryPoint);
}; // Size: 0x490

#endif
