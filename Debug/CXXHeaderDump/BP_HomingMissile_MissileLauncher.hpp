#ifndef UE4SS_SDK_BP_HomingMissile_MissileLauncher_HPP
#define UE4SS_SDK_BP_HomingMissile_MissileLauncher_HPP

class ABP_HomingMissile_MissileLauncher_C : public ABP_HomingMissile_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0458 (size: 0x8)
    class UStaticMeshComponent* SM_MissileExhaust1;                                   // 0x0460 (size: 0x8)
    double RocketSpeed;                                                               // 0x0468 (size: 0x8)
    float RocketStartDelay;                                                           // 0x0470 (size: 0x4)

    void Find Target Actor(class APalCharacter*& PalCharacter);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HomingMissile_MissileLauncher(int32 EntryPoint);
}; // Size: 0x474

#endif
