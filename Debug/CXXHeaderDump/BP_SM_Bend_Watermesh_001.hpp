#ifndef UE4SS_SDK_BP_SM_Bend_Watermesh_001_HPP
#define UE4SS_SDK_BP_SM_Bend_Watermesh_001_HPP

class ABP_SM_Bend_Watermesh_001_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* SM_BendWatermesh_001;                                 // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)

    void BndEvt__BP_SM_Bend_Watermesh_001_SM_BendWatermesh_001_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_SM_Bend_Watermesh_001_SM_BendWatermesh_001_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_SM_Bend_Watermesh_001(int32 EntryPoint);
}; // Size: 0x2A8

#endif
