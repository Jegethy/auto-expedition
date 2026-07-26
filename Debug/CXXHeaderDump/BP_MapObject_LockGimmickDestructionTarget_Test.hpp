#ifndef UE4SS_SDK_BP_MapObject_LockGimmickDestructionTarget_Test_HPP
#define UE4SS_SDK_BP_MapObject_LockGimmickDestructionTarget_Test_HPP

class ABP_MapObject_LockGimmickDestructionTarget_Test_C : public APalMapObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)
    class UNiagaraComponent* NS_CrystalGlow_Blue;                                     // 0x0408 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0410 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0418 (size: 0x8)

    FPalObjectPoolParameter GetObjectPoolParameter();
    void InitializeFromPool();
    void ReturnToPool();
    void ExecuteUbergraph_BP_MapObject_LockGimmickDestructionTarget_Test(int32 EntryPoint);
}; // Size: 0x420

#endif
