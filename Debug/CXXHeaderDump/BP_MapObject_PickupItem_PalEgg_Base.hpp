#ifndef UE4SS_SDK_BP_MapObject_PickupItem_PalEgg_Base_HPP
#define UE4SS_SDK_BP_MapObject_PickupItem_PalEgg_Base_HPP

class ABP_MapObject_PickupItem_PalEgg_Base_C : public APalMapObjectPalEgg
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0410 (size: 0x8)
    class UStaticMeshComponent* SM_basket;                                            // 0x0418 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x0420 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0428 (size: 0x8)
    class USkeletalMeshComponent* SK_Kurinuki_EggA;                                   // 0x0430 (size: 0x8)
    double Scale;                                                                     // 0x0438 (size: 0x8)
    FVector DefaultEggMeshScale;                                                      // 0x0440 (size: 0x18)
    FVector DefaultBasketMeshScale;                                                   // 0x0458 (size: 0x18)

    void OnRep_Scale();
    void GetPalEggScale(int32 PalRarity, double& PalEggScale);
    void SetupPalEggScale();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MapObject_PickupItem_PalEgg_Base(int32 EntryPoint);
}; // Size: 0x470

#endif
