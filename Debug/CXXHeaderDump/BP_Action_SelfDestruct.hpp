#ifndef UE4SS_SDK_BP_Action_SelfDestruct_HPP
#define UE4SS_SDK_BP_Action_SelfDestruct_HPP

class UBP_Action_SelfDestruct_C : public UPalActionWazaBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0180 (size: 0x8)
    double SpeedMultiplier;                                                           // 0x0188 (size: 0x8)
    double YawMultiply;                                                               // 0x0190 (size: 0x8)
    double HomingRate;                                                                // 0x0198 (size: 0x8)
    double ExplosionDistanceThreshold;                                                // 0x01A0 (size: 0x8)
    FName flagName;                                                                   // 0x01A8 (size: 0x8)
    bool StartExplosion;                                                              // 0x01B0 (size: 0x1)
    bool HasLaunch;                                                                   // 0x01B1 (size: 0x1)
    FFixedPoint64 New HP;                                                             // 0x01B8 (size: 0x8)
    FVector BlowVelocity;                                                             // 0x01C0 (size: 0x18)
    float DefaultEmissiveDuration;                                                    // 0x01D8 (size: 0x4)
    float DefaultNoEmissiveDuration;                                                  // 0x01DC (size: 0x4)
    float MinEmissiveDuration;                                                        // 0x01E0 (size: 0x4)
    float DecayRateOfEmissiveTime;                                                    // 0x01E4 (size: 0x4)
    class UPalVisualEffectBase* VisualEffect;                                         // 0x01E8 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x01F0 (size: 0x8)
    TSubclassOf<class AActor> Class;                                                  // 0x01F8 (size: 0x8)

    void MakeVisualEffectParameter(FPalVisualEffectDynamicParameter& PalVisualEffectDynamicParameter);
    void BlowAndKillSelf();
    void UpdateVelocity();
    void UpdateYaw();
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_SelfDestruct(int32 EntryPoint);
}; // Size: 0x200

#endif
