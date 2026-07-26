#ifndef UE4SS_SDK_BP_TreasureBoxVisual_OilrigGoal_HPP
#define UE4SS_SDK_BP_TreasureBoxVisual_OilrigGoal_HPP

class ABP_TreasureBoxVisual_OilrigGoal_C : public ABP_TreasureBoxVisual_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0308 (size: 0x8)

    void ReceiveBeginPlay();
    void OnFinishOpenAnimation();
    void ExecuteUbergraph_BP_TreasureBoxVisual_OilrigGoal(int32 EntryPoint);
}; // Size: 0x310

#endif
