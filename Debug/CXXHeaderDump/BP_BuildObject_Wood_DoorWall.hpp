#ifndef UE4SS_SDK_BP_BuildObject_Wood_DoorWall_HPP
#define UE4SS_SDK_BP_BuildObject_Wood_DoorWall_HPP

class ABP_BuildObject_Wood_DoorWall_C : public APalBuildObjectBasicBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0780 (size: 0x8)
    class UBP_BuildObjectSimulateArrowComponent_C* BP_BuildObjectSimulateArrowComponent; // 0x0788 (size: 0x8)
    class UPalMapObjectDoorParameterComponent* DoorParameter;                         // 0x0790 (size: 0x8)
    class UBoxComponent* AffectNavigationBox;                                         // 0x0798 (size: 0x8)
    class UBoxComponent* FrameCollision_02;                                           // 0x07A0 (size: 0x8)
    class UBoxComponent* FrameCollision_01;                                           // 0x07A8 (size: 0x8)
    class USceneComponent* FrameCollision;                                            // 0x07B0 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x07B8 (size: 0x8)
    class UBoxComponent* DoorCollision;                                               // 0x07C0 (size: 0x8)
    class UStaticMeshComponent* SM_Door_Wood;                                         // 0x07C8 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x07D0 (size: 0x8)
    class UStaticMeshComponent* SM_Doorbase_Wood;                                     // 0x07D8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x07E0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x07E8 (size: 0x8)
    float _______RotateDoor_EBE7A56643BDC6B53DC2B5AB1AB5D8C1;                         // 0x07F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ________Direction_EBE7A56643BDC6B53DC2B5AB1AB5D8C1; // 0x07F4 (size: 0x1)
    class UTimelineComponent* タイムライン;                                                 // 0x07F8 (size: 0x8)

    void GetStaticMeshComponents(TArray<class UStaticMeshComponent*>& OutComponents);
    void GetStaticMeshInfos(TArray<FPalStaticMeshImposterStaticMeshInfo>& OutStaticMeshInfo);
    void SetRotateDoor(class UStaticMeshComponent* Mesh, double RotateAngle);
    void OnUpdateSwitchState(class UPalMapObjectSwitchModule* Module);
    void OnReadySwitchModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
    void タイムライン__FinishedFunc();
    void タイムライン__UpdateFunc();
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OpenDoorAnimation();
    void CloseDoorAnimation();
    void ExecuteUbergraph_BP_BuildObject_Wood_DoorWall(int32 EntryPoint);
}; // Size: 0x800

#endif
