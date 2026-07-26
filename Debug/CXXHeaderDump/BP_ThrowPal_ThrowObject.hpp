#ifndef UE4SS_SDK_BP_ThrowPal_ThrowObject_HPP
#define UE4SS_SDK_BP_ThrowPal_ThrowObject_HPP

class ABP_ThrowPal_ThrowObject_C : public ABP_ThrowObjectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0428 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0430 (size: 0x8)
    class USkeletalMeshComponent* SK_Weapon_PalSphere_001;                            // 0x0438 (size: 0x8)
    bool IsBounce;                                                                    // 0x0440 (size: 0x1)
    FRotator ThrowRotator;                                                            // 0x0448 (size: 0x18)

    void FindNearEnemy(class APalCharacter* OwnerCharacter, class APalCharacter*& OutputPin);
    void PostProcessSpawnOtomo(class AActor* HitActor);
    void SpawnOtomo(class APalCharacter*& SpawnOtomo);
    void CollectTarget(class AActor*& NewParam);
    void UpdateRotator(double DeltaTime);
    void OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_ThrowPal_ThrowObject(int32 EntryPoint);
}; // Size: 0x460

#endif
