#ifndef UE4SS_SDK_BP_PalSphere_HPP
#define UE4SS_SDK_BP_PalSphere_HPP

class ABP_PalSphere_C : public ABP_CapturePrism_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06B8 (size: 0x8)

    void GetThrowObjectClass(TSubclassOf<class AActor>& ThrowObject);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PalSphere(int32 EntryPoint);
}; // Size: 0x6C0

#endif
