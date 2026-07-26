#ifndef UE4SS_SDK_BP_ActionBeamSlicer_HPP
#define UE4SS_SDK_BP_ActionBeamSlicer_HPP

class UBP_ActionBeamSlicer_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    FVector StartLocation;                                                            // 0x02F0 (size: 0x18)
    FVector EndLocation;                                                              // 0x0308 (size: 0x18)
    double HalfSlicerLength;                                                          // 0x0320 (size: 0x8)
    double InterpSpeed;                                                               // 0x0328 (size: 0x8)
    float ExecuteTime;                                                                // 0x0330 (size: 0x4)
    FVector CurrentLocation;                                                          // 0x0338 (size: 0x18)
    float MarkInterval;                                                               // 0x0350 (size: 0x4)
    FTimerHandle MarkTimer;                                                           // 0x0358 (size: 0x8)
    double GroundSearchHeight;                                                        // 0x0360 (size: 0x8)
    double MaxBeamLength;                                                             // 0x0368 (size: 0x8)
    double BeamGroundPowerRate;                                                       // 0x0370 (size: 0x8)
    double BeamAerialPowerRate;                                                       // 0x0378 (size: 0x8)
    bool AttachBeam;                                                                  // 0x0380 (size: 0x1)

    void GetGroundOrWaterPlaneTrace(const FVector Start, const FVector End, FVector& Location, bool& Hitted, bool& IsWater);
    void CreateMark();
    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void TickAction(float DeltaTime);
    void PlayAfterAnimation();
    void OnEndAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionBeamSlicer(int32 EntryPoint);
}; // Size: 0x381

#endif
