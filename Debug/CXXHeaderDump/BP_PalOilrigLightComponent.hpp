#ifndef UE4SS_SDK_BP_PalOilrigLightComponent_HPP
#define UE4SS_SDK_BP_PalOilrigLightComponent_HPP

class UBP_PalOilrigLightComponent_C : public UPalOilrigLightComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FLinearColor DefaultColor;                                                        // 0x00B0 (size: 0x10)
    FLinearColor RedColor;                                                            // 0x00C0 (size: 0x10)

    void ChangeLight(bool Combat, class ULightComponent* LightComp);
    void ChangeLightColor(bool IsCombat);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PalOilrigLightComponent(int32 EntryPoint);
}; // Size: 0xD0

#endif
