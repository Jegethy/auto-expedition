#ifndef UE4SS_SDK_BP_PalSphere_Body_Exotic_HPP
#define UE4SS_SDK_BP_PalSphere_Body_Exotic_HPP

class ABP_PalSphere_Body_Exotic_C : public ABP_PalSphere_Body_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PalSphere_Body_Exotic(int32 EntryPoint);
}; // Size: 0x490

#endif
