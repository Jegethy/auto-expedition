#ifndef UE4SS_SDK_BP_LevelGimmickJumpSpotSmall_HPP
#define UE4SS_SDK_BP_LevelGimmickJumpSpotSmall_HPP

class ABP_LevelGimmickJumpSpotSmall_C : public APalLevelGimmickJumpSpot
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* debug_arrow;                                          // 0x02E0 (size: 0x8)
    class UBoxComponent* BoxComponent;                                                // 0x02E8 (size: 0x8)
    class UNiagaraComponent* ParticleSystemComponent;                                 // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* Cone;                                                 // 0x02F8 (size: 0x8)
    class UPalSoundPlayerComponent* PalSoundPlayerComponent;                          // 0x0300 (size: 0x8)

    class USceneComponent* EventOnGetAkOwnerComponent();
    void ReceiveBeginPlay();
    void OnLaunchCharacter();
    void ExecuteUbergraph_BP_LevelGimmickJumpSpotSmall(int32 EntryPoint);
}; // Size: 0x308

#endif
