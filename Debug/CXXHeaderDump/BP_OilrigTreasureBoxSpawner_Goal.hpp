#ifndef UE4SS_SDK_BP_OilrigTreasureBoxSpawner_Goal_HPP
#define UE4SS_SDK_BP_OilrigTreasureBoxSpawner_Goal_HPP

class ABP_OilrigTreasureBoxSpawner_Goal_C : public ABP_OilrigTreasureBoxSpawner_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_OilrigTreasureBoxSpawner_Goal(int32 EntryPoint);
}; // Size: 0x320

#endif
