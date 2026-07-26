#ifndef UE4SS_SDK_BP_MapObject_TreasureBox_OilrigGoal_HPP
#define UE4SS_SDK_BP_MapObject_TreasureBox_OilrigGoal_HPP

class ABP_MapObject_TreasureBox_OilrigGoal_C : public ABP_MapObject_TreasureBox_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C8 (size: 0x8)
    bool IsOpened;                                                                    // 0x04D0 (size: 0x1)

    void SetupVisual(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void ReceiveBeginPlay();
    void TriggerOpen();
    void ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal(int32 EntryPoint);
}; // Size: 0x4D1

#endif
