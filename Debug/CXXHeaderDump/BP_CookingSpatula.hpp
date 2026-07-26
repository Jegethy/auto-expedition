#ifndef UE4SS_SDK_BP_CookingSpatula_HPP
#define UE4SS_SDK_BP_CookingSpatula_HPP

class ABP_CookingSpatula_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* SM_WoodenSpatula;                                     // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)

    void DelayDestroy(double Delay);
    void ExecuteUbergraph_BP_CookingSpatula(int32 EntryPoint);
}; // Size: 0x2A8

#endif
