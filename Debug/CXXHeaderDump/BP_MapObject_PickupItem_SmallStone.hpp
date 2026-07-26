#ifndef UE4SS_SDK_BP_MapObject_PickupItem_SmallStone_HPP
#define UE4SS_SDK_BP_MapObject_PickupItem_SmallStone_HPP

class ABP_MapObject_PickupItem_SmallStone_C : public ABP_MapObject_PickupItem_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0438 (size: 0x8)
    class USceneComponent* IndicatorOrigin;                                           // 0x0440 (size: 0x8)
    class UPalMapObjectPickupItemParameterComponent* PalMapObjectPickupItemParameter; // 0x0448 (size: 0x8)

    FPalObjectPoolParameter GetObjectPoolParameter();
    void InitializeFromPool();
    void ReturnToPool();
    void ExecuteUbergraph_BP_MapObject_PickupItem_SmallStone(int32 EntryPoint);
}; // Size: 0x450

#endif
