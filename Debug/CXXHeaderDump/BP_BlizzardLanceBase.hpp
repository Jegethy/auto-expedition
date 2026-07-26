#ifndef UE4SS_SDK_BP_BlizzardLanceBase_HPP
#define UE4SS_SDK_BP_BlizzardLanceBase_HPP

class ABP_BlizzardLanceBase_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UCapsuleComponent* BlockingCapsule;                                         // 0x0438 (size: 0x8)
    class UNiagaraComponent* NS_SkillSign04;                                          // 0x0440 (size: 0x8)
    class UNiagaraComponent* MainEffect;                                              // 0x0448 (size: 0x8)
    class UNiagaraComponent* OmenEffect;                                              // 0x0450 (size: 0x8)
    class UCapsuleComponent* AttackCapsule;                                           // 0x0458 (size: 0x8)
    class UNiagaraSystem* ThunderEffect;                                              // 0x0460 (size: 0x8)
    double ShootInterval;                                                             // 0x0468 (size: 0x8)
    double CollisitionEnableTime;                                                     // 0x0470 (size: 0x8)
    class UMaterialInterface* Decal Material;                                         // 0x0478 (size: 0x8)
    FVector DecalLocationOffset;                                                      // 0x0480 (size: 0x18)
    TSubclassOf<class UCameraShakeBase> CameraShakeClass;                             // 0x0498 (size: 0x8)

    void ShootThunder();
    void ChangeCollisionProfile();
    void OnHitDelegate_01(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    void ReceiveBeginPlay();
    void カスタムイベント_0();
    void BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem);
    void カスタムイベント_1();
    void カスタムイベント_2();
    void ExecuteUbergraph_BP_BlizzardLanceBase(int32 EntryPoint);
}; // Size: 0x4A0

#endif
