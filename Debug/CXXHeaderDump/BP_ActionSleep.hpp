#ifndef UE4SS_SDK_BP_ActionSleep_HPP
#define UE4SS_SDK_BP_ActionSleep_HPP

class UBP_ActionSleep_C : public UPalAction_Sleep
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    class UAnimMontage* tempMontage;                                                  // 0x0168 (size: 0x8)
    bool IsFlyPal;                                                                    // 0x0170 (size: 0x1)
    FTimerHandle TimeHandle;                                                          // 0x0178 (size: 0x8)
    bool EyeCloseAble;                                                                // 0x0180 (size: 0x1)
    class UNiagaraComponent* Effect;                                                  // 0x0188 (size: 0x8)
    bool UseMontageFacial;                                                            // 0x0190 (size: 0x1)
    class UPalFacialComponent* FacialComp;                                            // 0x0198 (size: 0x8)
    bool StartMontageNotifyExist;                                                     // 0x01A0 (size: 0x1)
    bool LoopMontageNotifyExist;                                                      // 0x01A1 (size: 0x1)
    TSoftObjectPtr<UAkAudioEvent> SmallSleepSound;                                    // 0x01A8 (size: 0x30)
    TSoftObjectPtr<UAkAudioEvent> MiddleSleepSound;                                   // 0x01D8 (size: 0x30)
    TSoftObjectPtr<UAkAudioEvent> BigSleepSound;                                      // 0x0208 (size: 0x30)
    bool bFadingBySleepLoop;                                                          // 0x0238 (size: 0x1)

    void UnregisterSleepLoopEffect(class APalCharacter* Character);
    void ShouldChangeSleepLoopMontage(bool& Return Value);
    void GetSleepLoopMontage(class UAnimMontage*& AnimMontage);
    bool IsPlayingSleepLoop();
    void CheckSleepOnSideAndReplaceMontage();
    void StartSleepSound(class UAnimMontage* Montage);
    void SetSleepSightFlag(bool Disable);
    void OnLoaded_49BB828F4B31C2356072F4BF56562BE4(class UObject* Loaded);
    void OnNotifyEnd_6BF59DE942FABEC009135FAF74D0892D(FName NotifyName);
    void OnNotifyBegin_6BF59DE942FABEC009135FAF74D0892D(FName NotifyName);
    void OnInterrupted_6BF59DE942FABEC009135FAF74D0892D(FName NotifyName);
    void OnBlendOut_6BF59DE942FABEC009135FAF74D0892D(FName NotifyName);
    void OnCompleted_6BF59DE942FABEC009135FAF74D0892D(FName NotifyName);
    void OnLoaded_5EEF21F14544E3FF5966AEA11A939260(class UObject* Loaded);
    void OnLoaded_25736171428620E543B76A903CB7DDF9(class UObject* Loaded);
    void PlaySleepSound();
    void CustomEvent(class UAnimMontage* Montage);
    void StopSleepSound();
    void EffectPlayEvent();
    void TickAction(float DeltaTime);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionSleep(int32 EntryPoint);
}; // Size: 0x239

#endif
