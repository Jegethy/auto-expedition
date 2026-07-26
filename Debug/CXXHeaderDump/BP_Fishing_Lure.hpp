#ifndef UE4SS_SDK_BP_Fishing_Lure_HPP
#define UE4SS_SDK_BP_Fishing_Lure_HPP

class ABP_Fishing_Lure_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UNiagaraComponent* NS_Splash_Sink;                                          // 0x0298 (size: 0x8)
    class UNiagaraComponent* NS_LandingPoint_NG;                                      // 0x02A0 (size: 0x8)
    class UNiagaraComponent* NS_LandingPoint_OK;                                      // 0x02A8 (size: 0x8)
    class UNiagaraComponent* NS_InWaterPal;                                           // 0x02B0 (size: 0x8)
    class UNiagaraComponent* NS_Splash_Success;                                       // 0x02B8 (size: 0x8)
    class UNiagaraComponent* NS_Splash_OnWater;                                       // 0x02C0 (size: 0x8)
    class USkeletalMeshComponent* SK_FishingFloat001;                                 // 0x02C8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02D0 (size: 0x8)
    bool IsPickMode;                                                                  // 0x02D8 (size: 0x1)
    bool IsHit;                                                                       // 0x02D9 (size: 0x1)
    double BaseLocationZ;                                                             // 0x02E0 (size: 0x8)
    double Amplitude;                                                                 // 0x02E8 (size: 0x8)
    double Frequency;                                                                 // 0x02F0 (size: 0x8)
    double CurrentTime;                                                               // 0x02F8 (size: 0x8)
    FVector NextLocation;                                                             // 0x0300 (size: 0x18)
    double HitSinkDepth;                                                              // 0x0318 (size: 0x8)
    FVector DefaultWaterLocation;                                                     // 0x0320 (size: 0x18)
    EPalFishingRodState RodState;                                                     // 0x0338 (size: 0x1)
    class UNiagaraSystem* NS_Battle;                                                  // 0x0340 (size: 0x8)
    class UNiagaraComponent* BattleEffect;                                            // 0x0348 (size: 0x8)
    class ABP_Fishing_FishShadowBase_C* TargetFish;                                   // 0x0350 (size: 0x8)

    void SetTargetFishShadow(class ABP_Fishing_FishShadowBase_C* TargetFish);
    void DisableAll();
    void SetFloatMesh(class USkeletalMesh* Mesh);
    void SetThrowLocation(FVector ThrowLocation);
    void SetVisibleEffectForLoop(class UNiagaraComponent* Effect, bool IsVisible, bool IsAdjustWaterPlane);
    void SetVisibleEffect(class UNiagaraComponent* Effect, bool IsVisible);
    void SetVisibleSinkSplashEffect(bool IsVisible);
    void SetVisibleInWaterEffect(bool IsVisible);
    void SetVisibleLandingPointEffect(bool IsVisible, bool CanFishing);
    void SetVisibleSuccessSplashEffect(bool IsVisible);
    void SetVisibleOnWaterSplashEffect(bool IsVisible);
    void SetVisibleBattleSplashEffect(bool IsVisible);
    void SetVisibleFloat(bool IsVisible);
    void ReceiveTick(float DeltaSeconds);
    void StartPick();
    void SuccessPick();
    void FailedPick();
    void OnChangeRodState(EPalFishingRodState RodState);
    void ReceiveBeginPlay();
    void OnChangeFloatMoveState(bool IsMove);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_Fishing_Lure(int32 EntryPoint);
}; // Size: 0x358

#endif
