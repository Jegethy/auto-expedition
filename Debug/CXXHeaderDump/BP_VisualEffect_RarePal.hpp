#ifndef UE4SS_SDK_BP_VisualEffect_RarePal_HPP
#define UE4SS_SDK_BP_VisualEffect_RarePal_HPP

class UBP_VisualEffect_RarePal_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0070 (size: 0x8)
    class UNiagaraComponent* Effect;                                                  // 0x0078 (size: 0x8)
    double Scale;                                                                     // 0x0080 (size: 0x8)
    bool isInit;                                                                      // 0x0088 (size: 0x1)

    void IsSizeInitialized(bool& IsSizeInitialized);
    void SpawnEffect();
    bool IsEndVisualEffect();
    void OnBeginVisualEffect();
    void OnEndVisualEffect();
    void TickVisualEffect(float DeltaTime);
    void ExecuteUbergraph_BP_VisualEffect_RarePal(int32 EntryPoint);
}; // Size: 0x89

#endif
