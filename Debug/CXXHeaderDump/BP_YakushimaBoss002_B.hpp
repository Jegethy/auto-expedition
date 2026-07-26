#ifndef UE4SS_SDK_BP_YakushimaBoss002_B_HPP
#define UE4SS_SDK_BP_YakushimaBoss002_B_HPP

class ABP_YakushimaBoss002_B_C : public ABP_MonsterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0D30 (size: 0x8)
    class USphereComponent* SuccessFXArea;                                            // 0x0D38 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule_Heart;                   // 0x0D40 (size: 0x8)
    class UPalUVEyeComponent* PalUVEye;                                               // 0x0D48 (size: 0x8)
    class UPalIndividualCharacterHandle* LeftHandle;                                  // 0x0D50 (size: 0x8)
    class UPalIndividualCharacterHandle* RightHandle;                                 // 0x0D58 (size: 0x8)
    class UPalIndividualCharacterHandle* HeadHandle;                                  // 0x0D60 (size: 0x8)
    bool Break_Left;                                                                  // 0x0D68 (size: 0x1)
    bool Break_Right;                                                                 // 0x0D69 (size: 0x1)
    bool Break_Head;                                                                  // 0x0D6A (size: 0x1)
    class UPalIndividualCharacterHandle* EyeHandle;                                   // 0x0D70 (size: 0x8)
    double ShieldScale;                                                               // 0x0D78 (size: 0x8)
    FTimerHandle BossCryEnd;                                                          // 0x0D80 (size: 0x8)
    FName CharacterID_Left;                                                           // 0x0D88 (size: 0x8)
    FName CharacterID_Right;                                                          // 0x0D90 (size: 0x8)
    FName CharacterID_Head;                                                           // 0x0D98 (size: 0x8)
    TSubclassOf<class AController> Controller_Hand;                                   // 0x0DA0 (size: 0x8)
    TSubclassOf<class AController> Controller_Head;                                   // 0x0DA8 (size: 0x8)

    class UPalIndividualCharacterHandle* SpawnParts(const FName CharacterID, TSubclassOf<class AController> Controller Class, FSpawnPartsSpawnCallback spawnCallback);
    void OnRep_Break_Head();
    void OnRep_Break_Left();
    void OnRep_Break_Right();
    void CanApplyHeartDamage(bool& Result);
    void OnNotifyEnd_555756C845BF486E0754DF9A1D3AF297(FName NotifyName);
    void OnNotifyBegin_555756C845BF486E0754DF9A1D3AF297(FName NotifyName);
    void OnInterrupted_555756C845BF486E0754DF9A1D3AF297(FName NotifyName);
    void OnBlendOut_555756C845BF486E0754DF9A1D3AF297(FName NotifyName);
    void OnCompleted_555756C845BF486E0754DF9A1D3AF297(FName NotifyName);
    void ReceiveBeginPlay();
    void SpawnLeft(FPalInstanceID ID);
    void SpawnRight(FPalInstanceID ID);
    void OnInitialized(class APalCharacter* InCharacter);
    void OnUpdateCollision();
    void BreakLeft();
    void BreakRight();
    void SpawnEye(FPalInstanceID ID);
    void PlayDeathAnimation();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void PlaySuccessFX();
    void StopSuccessFX();
    void BossCry();
    void SpawnHead(FPalInstanceID ID);
    void BreakHead();
    void UpdateTargetLocation();
    void ExecuteUbergraph_BP_YakushimaBoss002_B(int32 EntryPoint);
}; // Size: 0xDB0

#endif
