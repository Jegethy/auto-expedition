#ifndef UE4SS_SDK_BP_VisualEffect_LifeDrainPower_HPP
#define UE4SS_SDK_BP_VisualEffect_LifeDrainPower_HPP

class UBP_VisualEffect_LifeDrainPower_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0070 (size: 0x8)
    TMap<EPalSizeType, double> EffectScale;                                           // 0x0078 (size: 0x50)
    class UNiagaraComponent* Effect;                                                  // 0x00C8 (size: 0x8)
    FTimerHandle TimerHandle;                                                         // 0x00D0 (size: 0x8)
    double FadeOut;                                                                   // 0x00D8 (size: 0x8)
    double Const_FadeoutSpeed;                                                        // 0x00E0 (size: 0x8)
    double DefaultScale;                                                              // 0x00E8 (size: 0x8)

    void OnBeginVisualEffect();
    void OnEndVisualEffect();
    void FadeOutLoop();
    void TickVisualEffect(float DeltaTime);
    void ExecuteUbergraph_BP_VisualEffect_LifeDrainPower(int32 EntryPoint);
}; // Size: 0xF0

#endif
