#ifndef UE4SS_SDK_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_HPP
#define UE4SS_SDK_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_HPP

class ABP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C : public ABP_MapObject_TreasureBox_VisibleContent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0428 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor(int32 EntryPoint);
}; // Size: 0x430

#endif
