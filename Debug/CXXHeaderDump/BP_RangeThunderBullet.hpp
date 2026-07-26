#ifndef UE4SS_SDK_BP_RangeThunderBullet_HPP
#define UE4SS_SDK_BP_RangeThunderBullet_HPP

class ABP_RangeThunderBullet_C : public ABP_ThunderStrikeBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A0 (size: 0x8)

    void ActivateOmen();
    void ExecuteUbergraph_BP_RangeThunderBullet(int32 EntryPoint);
}; // Size: 0x4A8

#endif
