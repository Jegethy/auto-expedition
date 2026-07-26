#ifndef UE4SS_SDK_BP_DropWeaponPart_HPP
#define UE4SS_SDK_BP_DropWeaponPart_HPP

class ABP_DropWeaponPart_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Ammo;                                                 // 0x0298 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02A0 (size: 0x8)
    FVector NewVar;                                                                   // 0x02A8 (size: 0x18)

    void CustomBegin(class UStaticMesh* Mesh, FVector Velocity, float AngularIntensify);
    void ExecuteUbergraph_BP_DropWeaponPart(int32 EntryPoint);
}; // Size: 0x2C0

#endif
