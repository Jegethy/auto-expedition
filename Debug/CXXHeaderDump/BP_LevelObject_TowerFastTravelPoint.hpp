#ifndef UE4SS_SDK_BP_LevelObject_TowerFastTravelPoint_HPP
#define UE4SS_SDK_BP_LevelObject_TowerFastTravelPoint_HPP

class ABP_LevelObject_TowerFastTravelPoint_C : public APalLevelObjectUnlockableFastTravelPoint
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UPalSoundPlayerComponent* PalSoundPlayer;                                   // 0x0380 (size: 0x8)
    class UPalLimitVolumeBoxComponent* PalLimitVolumeBox;                             // 0x0388 (size: 0x8)
    class UNiagaraComponent* Glow;                                                    // 0x0390 (size: 0x8)
    class UArrowComponent* WarpPoint;                                                 // 0x0398 (size: 0x8)
    class USceneComponent* IndicatorOrigin;                                           // 0x03A0 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x03A8 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x03B0 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x03B8 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x03C0 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x03C8 (size: 0x8)
    class UNiagaraSystem* UnlockedGlowEffect;                                         // 0x03D0 (size: 0x8)
    class UNiagaraSystem* UnlockedFlashEffect;                                        // 0x03D8 (size: 0x8)
    class UAkAudioEvent* UnlockedSound;                                               // 0x03E0 (size: 0x8)
    TArray<int32> EmissionMaterialIndexArray;                                         // 0x03E8 (size: 0x10)

    class USceneComponent* OnGetAkComponent();
    class UAkAudioEvent* GetUnlockAkAudioEvent();
    void OnUpdateUnlockState_Internal(bool IsUnlocked, bool IsSpawnUnlockefFlashEffect);
    void OnUpdateUnlockState(class APalLevelObjectUnlockableFastTravelPoint* Object);
    void ReceiveBeginPlay();
    void OnChangeWorldSettings(const FPalOptionWorldSettings& PrevSettings, const FPalOptionWorldSettings& NewSettings);
    void CheckUnuseFastTravel();
    void ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint(int32 EntryPoint);
}; // Size: 0x3F8

#endif
