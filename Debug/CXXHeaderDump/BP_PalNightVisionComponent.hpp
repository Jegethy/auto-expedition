#ifndef UE4SS_SDK_BP_PalNightVisionComponent_HPP
#define UE4SS_SDK_BP_PalNightVisionComponent_HPP

class UBP_PalNightVisionComponent_C : public UPalNightVisionComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)

    void SetNightVisionEnabled_ForServer(bool bEnable);
    void OnInactive();
    void ExecuteUbergraph_BP_PalNightVisionComponent(int32 EntryPoint);
}; // Size: 0xC0

#endif
