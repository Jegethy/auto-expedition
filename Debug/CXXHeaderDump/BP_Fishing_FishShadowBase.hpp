#ifndef UE4SS_SDK_BP_Fishing_FishShadowBase_HPP
#define UE4SS_SDK_BP_Fishing_FishShadowBase_HPP

class ABP_Fishing_FishShadowBase_C : public APalFishShadow
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0658 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0660 (size: 0x8)
    FVector RootPoint;                                                                // 0x0668 (size: 0x18)
    FVector NextPoint;                                                                // 0x0680 (size: 0x18)
    double RotZSpeed;                                                                 // 0x0698 (size: 0x8)
    double MoveRadius;                                                                // 0x06A0 (size: 0x8)
    double DelayTimer;                                                                // 0x06A8 (size: 0x8)
    double DelayTime;                                                                 // 0x06B0 (size: 0x8)
    FVector PickLocation;                                                             // 0x06B8 (size: 0x18)
    FVector PrevLocation;                                                             // 0x06D0 (size: 0x18)
    bool IsEscape;                                                                    // 0x06E8 (size: 0x1)
    bool IsHit;                                                                       // 0x06E9 (size: 0x1)
    bool IsReached;                                                                   // 0x06EA (size: 0x1)
    bool IsPick;                                                                      // 0x06EB (size: 0x1)
    FRotator EscapeRotation;                                                          // 0x06F0 (size: 0x18)
    double EscapeSpeed;                                                               // 0x0708 (size: 0x8)
    class UNiagaraComponent* SpawnedEffect;                                           // 0x0710 (size: 0x8)
    double EffectScale;                                                               // 0x0718 (size: 0x8)
    class UAnimSequence* IdleAnim;                                                    // 0x0720 (size: 0x8)
    class UAnimSequence* WalkAnim;                                                    // 0x0728 (size: 0x8)
    class UAnimSequence* BattleAnim;                                                  // 0x0730 (size: 0x8)
    double HeightOffset;                                                              // 0x0738 (size: 0x8)
    double HitSinkOffset;                                                             // 0x0740 (size: 0x8)

    void GetSocketMouthLocation(FVector& MouthLocation);
    void FishingHit();
    void EndPick();
    void StartPick(FVector PickLocation);
    void EscapeMove(double DeltaTime);
    void PickMove(double DeltaTime);
    void Update Move(float DeltaTime);
    void RestDelayTimer();
    void CalcNextPoint();
    void SetupMesh();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnInitialized();
    void OnSearchHit(const FVector& PickLocation);
    void OnEscape();
    void OnFishingStart();
    void OnSpawnedRareEffect(class UNiagaraSystem* Effect);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_Fishing_FishShadowBase(int32 EntryPoint);
}; // Size: 0x748

#endif
