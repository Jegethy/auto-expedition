#ifndef UE4SS_SDK_BP_PalStaticMeshComponent_AutoRotation_HPP
#define UE4SS_SDK_BP_PalStaticMeshComponent_AutoRotation_HPP

class UBP_PalStaticMeshComponent_AutoRotation_C : public UPalStaticMeshComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05F0 (size: 0x8)
    FRotator RotationPerSecond;                                                       // 0x05F8 (size: 0x18)

    void ReceiveBeginPlay();
    void BP_ClientTick(float DeltaTime);
    void ExecuteUbergraph_BP_PalStaticMeshComponent_AutoRotation(int32 EntryPoint);
}; // Size: 0x610

#endif
