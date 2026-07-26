#ifndef UE4SS_SDK_BP_LevelGimmick_AreaBarrier_HPP
#define UE4SS_SDK_BP_LevelGimmick_AreaBarrier_HPP

class ABP_LevelGimmick_AreaBarrier_C : public APalLevelGimmick_AreaBarrier
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UPalLimitVolumeBoxComponent* PalLimitVolumeBox;                             // 0x0308 (size: 0x8)
    class UBoxComponent* OverlapTriggerBox;                                           // 0x0310 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0318 (size: 0x8)
    class UArrowComponent* TeleportPoint2;                                            // 0x0320 (size: 0x8)
    class USceneComponent* TeleportPoints;                                            // 0x0328 (size: 0x8)
    bool bNiagaraFadeOut;                                                             // 0x0330 (size: 0x1)
    double NiagaraAlphaDecreaseRate;                                                  // 0x0338 (size: 0x8)
    double NiagaraCurrentAlpha;                                                       // 0x0340 (size: 0x8)
    double NiagaraCurrentDissolve;                                                    // 0x0348 (size: 0x8)
    double NiagaraDissolveIncreaseRate;                                               // 0x0350 (size: 0x8)

    void DebugNiagaraFadeOut();
    void DebugNiagaraReset();
    void SetNiagaraParams(double Alpha, double Dissolve, double Rate);
    void UpdateView(FPalLevelGimmick_AreaBarrier_ViewModel ViewModel);
    void UpdateNiagaraFadeOut(double DeltaSeconds);
    void ResetNiagara();
    void StartNiagaraFadeOut();
    TArray<class USceneComponent*> GetTeleportPoints();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnDataChanged(const FPalLevelGimmick_AreaBarrier_ViewModel& InViewModel);
    void ExecuteUbergraph_BP_LevelGimmick_AreaBarrier(int32 EntryPoint);
}; // Size: 0x358

#endif
