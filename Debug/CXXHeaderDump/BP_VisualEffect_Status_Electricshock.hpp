#ifndef UE4SS_SDK_BP_VisualEffect_Status_Electricshock_HPP
#define UE4SS_SDK_BP_VisualEffect_Status_Electricshock_HPP

class UBP_VisualEffect_Status_Electricshock_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0070 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0078 (size: 0x8)
    TMap<class EPalTribeID, class UNiagaraSystem*> OverrideNiagaraSystem;             // 0x0080 (size: 0x50)
    TMap<EPalTribeID, double> OverrideNiagaraScaleParameter;                          // 0x00D0 (size: 0x50)
    TMap<EPalTribeID, double> OverrideNiagaraScaleBossParameter;                      // 0x0120 (size: 0x50)

    void FindTribeID(EPalTribeID& TribeId, bool& IsBoss, bool& Result);
    void OnBeginVisualEffect();
    void OnEndVisualEffect();
    void ExecuteUbergraph_BP_VisualEffect_Status_Electricshock(int32 EntryPoint);
}; // Size: 0x170

#endif
