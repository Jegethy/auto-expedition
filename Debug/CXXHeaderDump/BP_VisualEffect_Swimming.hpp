#ifndef UE4SS_SDK_BP_VisualEffect_Swimming_HPP
#define UE4SS_SDK_BP_VisualEffect_Swimming_HPP

class UBP_VisualEffect_Swimming_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0070 (size: 0x8)
    class UNiagaraComponent* NS_SplashBody;                                           // 0x0078 (size: 0x8)
    class UNiagaraComponent* NS_Swim;                                                 // 0x0080 (size: 0x8)
    class UNiagaraComponent* NS_InWater;                                              // 0x0088 (size: 0x8)
    class UPalCharacterMovementComponent* Movement;                                   // 0x0090 (size: 0x8)
    double InWaterRate_Feet;                                                          // 0x0098 (size: 0x8)
    double InWaterRate_Body;                                                          // 0x00A0 (size: 0x8)
    double FeetEffectWaitTimeSec;                                                     // 0x00A8 (size: 0x8)
    bool IsMoving;                                                                    // 0x00B0 (size: 0x1)
    double FallingVelocityMin;                                                        // 0x00B8 (size: 0x8)
    double Effect_Offset_Z_Feet;                                                      // 0x00C0 (size: 0x8)
    double Effect_Offset_Z_Body;                                                      // 0x00C8 (size: 0x8)
    double Effect_Offset_Z_Swim;                                                      // 0x00D0 (size: 0x8)
    double Effect_Offset_Z_InWater;                                                   // 0x00D8 (size: 0x8)
    double Effect_Offset_Z_Dive;                                                      // 0x00E0 (size: 0x8)
    bool CreateDiveEffectDelay;                                                       // 0x00E8 (size: 0x1)
    double RadiusScaleForDive;                                                        // 0x00F0 (size: 0x8)
    bool HasRayCastCash;                                                              // 0x00F8 (size: 0x1)
    double LengthToBottomCash;                                                        // 0x0100 (size: 0x8)
    bool IsNsSplashBodyActive;                                                        // 0x0108 (size: 0x1)
    bool IsNsSwimActive;                                                              // 0x0109 (size: 0x1)
    double RadiusScaleForSwim;                                                        // 0x0110 (size: 0x8)
    bool IsNsInWaterActive;                                                           // 0x0118 (size: 0x1)
    double RadiusScaleForInWater;                                                     // 0x0120 (size: 0x8)
    double RadiusForJump;                                                             // 0x0128 (size: 0x8)
    double EffectOffset_Z_Jump;                                                       // 0x0130 (size: 0x8)
    double MovimgVelocityThreshold;                                                   // 0x0138 (size: 0x8)
    double RadiusScaleForSplashFeet;                                                  // 0x0140 (size: 0x8)
    double RadiusScaleForSplashBody;                                                  // 0x0148 (size: 0x8)

    void Transform Character Relative Offset(class AActor* Character, FVector RelativeOffset, FVector& Offset);
    void OnJump(class UPalCharacterMovementComponent* Component);
    void On Swiming(bool IsInSwimming);
    void Update NS InWater(double DeltaTime);
    void Create_NS_InWater();
    void Update Water Plane Effect Transform(class UNiagaraComponent* EffectInst, double OffsetDistance, double BaseScale, EPalWaterEffectType WaterEffectType);
    void GetVelocityLengthXY(double& Velocity);
    void GetOwnerHalfHeight(double& HalfHeight);
    void GetWaterDepth(double& Length);
    void IsMakeDiveEffect(bool& IsFalling);
    void HasMovingVelocity(bool& HasVelocity);
    void Update NS Dive();
    void Update_NS_Swim();
    void Update_NS_SplashBody();
    void Update_NS_SplashFeet(double DeltaTime);
    void Create NS Dive();
    void Create_NS_Swim();
    void Create NS Splash Body();
    void Create_NS_SplashFeet();
    void CreateInWaterEffect();
    void GetInWaterRate(double& Rate);
    void Get Effect Transform(double OffsetDistance, bool IsUseWaterPlaneNormal, FTransform& NewParam);
    void OnBeginVisualEffect();
    void TickVisualEffect(float DeltaTime);
    void OnEndVisualEffect();
    void ExecuteUbergraph_BP_VisualEffect_Swimming(int32 EntryPoint);
}; // Size: 0x150

#endif
