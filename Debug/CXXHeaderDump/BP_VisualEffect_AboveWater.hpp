#ifndef UE4SS_SDK_BP_VisualEffect_AboveWater_HPP
#define UE4SS_SDK_BP_VisualEffect_AboveWater_HPP

class UBP_VisualEffect_AboveWater_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0070 (size: 0x8)
    class UPalCharacterMovementComponent* Movement;                                   // 0x0078 (size: 0x8)
    class UNiagaraComponent* NS_AboveWater;                                           // 0x0080 (size: 0x8)
    double MovimgVelocityThreshold;                                                   // 0x0088 (size: 0x8)
    double HoveringVelocityThreshold;                                                 // 0x0090 (size: 0x8)
    bool IsNsActive;                                                                  // 0x0098 (size: 0x1)
    class UNiagaraComponent* NS_AboveWaterIdle;                                       // 0x00A0 (size: 0x8)
    bool IsNsIdleActive;                                                              // 0x00A8 (size: 0x1)
    double IdleEffectBaseScale;                                                       // 0x00B0 (size: 0x8)
    double MoveEffectBaseScale;                                                       // 0x00B8 (size: 0x8)

    void UpdateAboveWaterIdleEffect();
    void CreateAboveWaterIdleEffect();
    void Get Effect Transform(double OffsetDistance, bool IsUseWaterPlaneNormal, FTransform& NewParam);
    void Update Water Plane Effect Transform(class UNiagaraComponent* EffectInst, double OffsetDistance, double BaseScale, EPalWaterEffectType WaterEffectType);
    void GetVelocityLengthXY(double& Velocity);
    void UpdateAboveWaterEffect();
    void CreateAboveWaterEffect();
    void OnBeginVisualEffect();
    void TickVisualEffect(float DeltaTime);
    void OnEndVisualEffect();
    void ExecuteUbergraph_BP_VisualEffect_AboveWater(int32 EntryPoint);
}; // Size: 0xC0

#endif
