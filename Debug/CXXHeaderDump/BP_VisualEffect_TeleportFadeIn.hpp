#ifndef UE4SS_SDK_BP_VisualEffect_TeleportFadeIn_HPP
#define UE4SS_SDK_BP_VisualEffect_TeleportFadeIn_HPP

class UBP_VisualEffect_TeleportFadeIn_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0070 (size: 0x8)
    double FadeTime;                                                                  // 0x0078 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x0080 (size: 0x8)
    double CurrentAlpha;                                                              // 0x0088 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0090 (size: 0x8)

    void OnBeginVisualEffect();
    void OnEndVisualEffect();
    void TickVisualEffect(float DeltaTime);
    void FadeEnd();
    void ExecuteUbergraph_BP_VisualEffect_TeleportFadeIn(int32 EntryPoint);
}; // Size: 0x98

#endif
