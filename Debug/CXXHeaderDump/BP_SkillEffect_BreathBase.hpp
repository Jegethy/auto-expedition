#ifndef UE4SS_SDK_BP_SkillEffect_BreathBase_HPP
#define UE4SS_SDK_BP_SkillEffect_BreathBase_HPP

class ABP_SkillEffect_BreathBase_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0438 (size: 0x8)
    double StartCollisionTime;                                                        // 0x0440 (size: 0x8)
    double EndCollisionTime;                                                          // 0x0448 (size: 0x8)
    FTimerHandle EnableCollisionTimer;                                                // 0x0450 (size: 0x8)
    FTimerHandle EndCollisionTimer;                                                   // 0x0458 (size: 0x8)
    double ShotSpan;                                                                  // 0x0460 (size: 0x8)
    double TempTime;                                                                  // 0x0468 (size: 0x8)
    class UStaticMeshComponent* Funnel;                                               // 0x0470 (size: 0x8)
    class UAkAudioEvent* Sound_Cast;                                                  // 0x0478 (size: 0x8)
    class UAkAudioEvent* SoundLoop;                                                   // 0x0480 (size: 0x8)
    class UAkAudioEvent* SoundEnd;                                                    // 0x0488 (size: 0x8)

    void ReceiveBeginPlay();
    void EndCollision();
    void ExecuteUbergraph_BP_SkillEffect_BreathBase(int32 EntryPoint);
}; // Size: 0x490

#endif
