#ifndef UE4SS_SDK_BP_CaptureWireBullet_HPP
#define UE4SS_SDK_BP_CaptureWireBullet_HPP

class ABP_CaptureWireBullet_C : public ABP_ThrowObjectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0428 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0430 (size: 0x8)
    class APalCharacter* CaptureTarget;                                               // 0x0438 (size: 0x8)
    bool isBound;                                                                     // 0x0440 (size: 0x1)
    FRotator ThrowRotator;                                                            // 0x0448 (size: 0x18)

    void UpdateRotator(double DeltaTime);
    void SpawnDelegate(FGuid Guid, class AActor* Actor);
    void OnHitToActor(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CaptureWireBullet(int32 EntryPoint);
}; // Size: 0x460

#endif
