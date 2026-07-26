#ifndef UE4SS_SDK_BP_Explosion_RocketLauncher_HPP
#define UE4SS_SDK_BP_Explosion_RocketLauncher_HPP

class ABP_Explosion_RocketLauncher_C : public ABP_ExplosionAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UNiagaraComponent* Explosive;                                               // 0x0320 (size: 0x8)

    void GetEffectValue(int32& Value);
    void GetEffectType(EPalAdditionalEffectType& Effect);
    void BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem);
    void ExecuteUbergraph_BP_Explosion_RocketLauncher(int32 EntryPoint);
}; // Size: 0x328

#endif
