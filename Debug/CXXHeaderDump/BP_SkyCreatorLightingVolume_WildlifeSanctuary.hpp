#ifndef UE4SS_SDK_BP_SkyCreatorLightingVolume_WildlifeSanctuary_HPP
#define UE4SS_SDK_BP_SkyCreatorLightingVolume_WildlifeSanctuary_HPP

class ABP_SkyCreatorLightingVolume_WildlifeSanctuary_C : public ABP_SkyCreatorLightingSphereVolume_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)

    bool ShouldMaintainAlertWhilePresent();
    void ReceiveBeginPlay();
    void OnAlertStateChanged(EPalWildlifeSanctuaryAlertState NewState, class APalPlayerCharacter* DetectedPlayer);
    void ExecuteUbergraph_BP_SkyCreatorLightingVolume_WildlifeSanctuary(int32 EntryPoint);
}; // Size: 0x300

#endif
