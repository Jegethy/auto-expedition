#ifndef UE4SS_SDK_BP_ArchitectureHammer_HPP
#define UE4SS_SDK_BP_ArchitectureHammer_HPP

class ABP_ArchitectureHammer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)

    void DestroyRegister();
    void ExecuteUbergraph_BP_ArchitectureHammer(int32 EntryPoint);
}; // Size: 0x2A8

#endif
