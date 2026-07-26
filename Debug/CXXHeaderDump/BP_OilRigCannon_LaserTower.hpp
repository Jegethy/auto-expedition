#ifndef UE4SS_SDK_BP_OilRigCannon_LaserTower_HPP
#define UE4SS_SDK_BP_OilRigCannon_LaserTower_HPP

class ABP_OilRigCannon_LaserTower_C : public ABP_OilRigCannonBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStaticMeshComponent* Mesh_AATowerBase;                                     // 0x0340 (size: 0x8)
    class UNiagaraComponent* NS_CommonSkill_HyperBeam;                                // 0x0348 (size: 0x8)
    class UNiagaraComponent* NS_CommonSkill_HyperBeam_charge;                         // 0x0350 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0358 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0360 (size: 0x8)
    class UStaticMeshComponent* Mesh_AATowerHead;                                     // 0x0368 (size: 0x8)
    class UStaticMeshComponent* Mesh_AATowerBody;                                     // 0x0370 (size: 0x8)
    FTimerHandle TimerHandle_LayCast;                                                 // 0x0378 (size: 0x8)
    float Const_LaserRadius;                                                          // 0x0380 (size: 0x4)
    bool IsDebugView;                                                                 // 0x0384 (size: 0x1)
    class UNiagaraComponent* TempElecEffect;                                          // 0x0388 (size: 0x8)
    class UNiagaraComponent* tempSmokeEffect;                                         // 0x0390 (size: 0x8)

    void SetActiveHeadMesh(bool IsActive);
    void ChangeDefaultMesh();
    void Damage Ray Cast();
    class USceneComponent* GetPitchMesh();
    class USceneComponent* GetYawMesh();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void PullTrigger_BP();
    void ReceiveBeginPlay();
    void OnDestroyedWeapon_ForBP();
    void ChangeDefaultVisual_BP();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_OilRigCannon_LaserTower(int32 EntryPoint);
}; // Size: 0x398

#endif
