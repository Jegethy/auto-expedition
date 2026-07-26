#ifndef UE4SS_SDK_BP_ThrowObjectBase_HPP
#define UE4SS_SDK_BP_ThrowObjectBase_HPP

class ABP_ThrowObjectBase_C : public APalBullet
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UBP_PalSoundPlayerComponent_C* SoundPlayer;                                 // 0x03C8 (size: 0x8)
    int32 BoundCount;                                                                 // 0x03D0 (size: 0x4)
    double EnableGravityInterval;                                                     // 0x03D8 (size: 0x8)
    double DefaultGravityScale;                                                       // 0x03E0 (size: 0x8)
    class UNiagaraSystem* ThrowEffect;                                                // 0x03E8 (size: 0x8)
    bool IsCachedGravityScale;                                                        // 0x03F0 (size: 0x1)
    float Const_Effect_Scale;                                                         // 0x03F4 (size: 0x4)
    FLinearColor Const_Effect_ColorShock;                                             // 0x03F8 (size: 0x10)
    FLinearColor Const_Effect_ColorThrow;                                             // 0x0408 (size: 0x10)
    FLinearColor Const_Effect_ColorThrow2;                                            // 0x0418 (size: 0x10)

    void SetEffectParam(class UNiagaraComponent* Niagara);
    void CacheDefaultGravity();
    void Play Throw Sound();
    class USceneComponent* GetAkOwnerComponent();
    void PlaySoundWithMaterial(FPalDataTableRowName_SoundID ID, TEnumAsByte<EPhysicalSurface> PhysicalMaterial);
    void PlaySound(FPalDataTableRowName_SoundID ID);
    void IsCountDestroy(bool& IsDestroy);
    void IncrementBoundCountAndCheckDestroy();
    void GetMaxBoundCount(int32& Count);
    bool IsDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void OnBlock(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void OnEnableGravity();
    void OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void ExecuteUbergraph_BP_ThrowObjectBase(int32 EntryPoint);
}; // Size: 0x428

#endif
