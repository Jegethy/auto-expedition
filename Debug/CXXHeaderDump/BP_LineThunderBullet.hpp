#ifndef UE4SS_SDK_BP_LineThunderBullet_HPP
#define UE4SS_SDK_BP_LineThunderBullet_HPP

class ABP_LineThunderBullet_C : public ABP_ThunderStrikeBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A0 (size: 0x8)

    void ActivateOmen();
    void ExecuteUbergraph_BP_LineThunderBullet(int32 EntryPoint);
}; // Size: 0x4A8

#endif
