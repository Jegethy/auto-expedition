#ifndef UE4SS_SDK_BP_RockLanceBase_HPP
#define UE4SS_SDK_BP_RockLanceBase_HPP

class ABP_RockLanceBase_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* NS_SkillSign04;                                          // 0x0438 (size: 0x8)
    class UNiagaraComponent* MainEffect;                                              // 0x0440 (size: 0x8)
    class UNiagaraComponent* OmenEffect;                                              // 0x0448 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0450 (size: 0x8)
    class UNiagaraSystem* ThunderEffect;                                              // 0x0458 (size: 0x8)
    double ShootInterval;                                                             // 0x0460 (size: 0x8)
    double CollisitionEnableTime;                                                     // 0x0468 (size: 0x8)
    class UMaterialInterface* Decal Material;                                         // 0x0470 (size: 0x8)
    FVector DecalLocationOffset;                                                      // 0x0478 (size: 0x18)

    void カスタムイベント_0();
    void ShootThunder();
    void ChangeCollisionProfile();
    void OnHitDelegate_01(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    void ReceiveBeginPlay();
    void BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem);
    void カスタムイベント_1();
    void カスタムイベント_2();
    void ExecuteUbergraph_BP_RockLanceBase(int32 EntryPoint);
}; // Size: 0x490

#endif
