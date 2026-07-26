#ifndef UE4SS_SDK_BP_PalBiomeTriggerBox_WildlifeSanctuary_HPP
#define UE4SS_SDK_BP_PalBiomeTriggerBox_WildlifeSanctuary_HPP

class ABP_PalBiomeTriggerBox_WildlifeSanctuary_C : public ABP_PalBiomeTriggerSphere_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UPostProcessComponent* PostProcess_Normal;                                  // 0x02B8 (size: 0x8)
    class UPostProcessComponent* PostProcess_Detected;                                // 0x02C0 (size: 0x8)

    bool ShouldMaintainAlertWhilePresent();
    void ReceiveBeginPlay();
    void OnAlertStateChanged(EPalWildlifeSanctuaryAlertState NewState, class APalPlayerCharacter* DetectedPlayer);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_PalBiomeTriggerBox_WildlifeSanctuary(int32 EntryPoint);
}; // Size: 0x2C8

#endif
