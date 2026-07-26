#ifndef UE4SS_SDK_BP_MapObject_SupplyDrop_HPP
#define UE4SS_SDK_BP_MapObject_SupplyDrop_HPP

class ABP_MapObject_SupplyDrop_C : public APalMapObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)
    class UStaticMeshComponent* StaticMesh7;                                          // 0x0408 (size: 0x8)
    class UStaticMeshComponent* StaticMesh8;                                          // 0x0410 (size: 0x8)
    class UNiagaraComponent* NS_MapObject_DroppedCharacter;                           // 0x0418 (size: 0x8)
    class UPalMapObjectItemChestParameterComponent* PalMapObjectItemChestParameter;   // 0x0420 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0428 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0430 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0438 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0440 (size: 0x8)

    void SetActiveFXInLocal(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void ExecuteUbergraph_BP_MapObject_SupplyDrop(int32 EntryPoint);
}; // Size: 0x448

#endif
