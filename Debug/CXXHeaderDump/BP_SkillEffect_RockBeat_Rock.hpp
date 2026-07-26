#ifndef UE4SS_SDK_BP_SkillEffect_RockBeat_Rock_HPP
#define UE4SS_SDK_BP_SkillEffect_RockBeat_Rock_HPP

class ABP_SkillEffect_RockBeat_Rock_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0438 (size: 0x8)
    double UpTime;                                                                    // 0x0440 (size: 0x8)
    double DownTime;                                                                  // 0x0448 (size: 0x8)
    class UCurveFloat* CurveFloatUp;                                                  // 0x0450 (size: 0x8)
    class UCurveFloat* CurveFloatDown;                                                // 0x0458 (size: 0x8)
    double Timer;                                                                     // 0x0460 (size: 0x8)
    double DistanceZ;                                                                 // 0x0468 (size: 0x8)
    double CameraShakeRadius;                                                         // 0x0470 (size: 0x8)
    FVector StartLocation;                                                            // 0x0478 (size: 0x18)
    class ABP_SkillEffectBase_C* UpCollision;                                         // 0x0490 (size: 0x8)
    class ABP_SkillEffectBase_C* DownCollision;                                       // 0x0498 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void OnSpawned();
    void ReceiveBeginPlay();
    void SetFade();
    void FadeOutEffect(double DeltaSecond);
    void BndEvt__BP_SkillEffect_RockBeat_Rock_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_SkillEffect_RockBeat_Rock(int32 EntryPoint);
}; // Size: 0x4A0

#endif
