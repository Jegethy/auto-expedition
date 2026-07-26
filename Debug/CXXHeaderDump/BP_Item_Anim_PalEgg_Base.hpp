#ifndef UE4SS_SDK_BP_Item_Anim_PalEgg_Base_HPP
#define UE4SS_SDK_BP_Item_Anim_PalEgg_Base_HPP

class ABP_Item_Anim_PalEgg_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USkeletalMeshComponent* SK_Kurinuki_EggA;                                   // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    int32 HatchingTemperature;                                                        // 0x02A8 (size: 0x4)

    void GetHatchingTemperature(int32& Temperature);
    void SetAnimPlayState(bool IsPlay);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Item_Anim_PalEgg_Base(int32 EntryPoint);
}; // Size: 0x2AC

#endif
