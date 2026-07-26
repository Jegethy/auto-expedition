#ifndef UE4SS_SDK_BP_Lamp_HPP
#define UE4SS_SDK_BP_Lamp_HPP

class ABP_Lamp_C : public ABP_LampBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UBP_PalTimerPointLightComponent_C* BP_PalTimerPointLightComponent;          // 0x0308 (size: 0x8)
    class UStaticMeshComponent* SM_Lantern_Flames;                                    // 0x0310 (size: 0x8)
    class UStaticMeshComponent* SM_lamp_01;                                           // 0x0318 (size: 0x8)

    void SetLightEnable(bool IsEnable);
    void OnChangedLampEnable(bool bIsEnable);
    void ExecuteUbergraph_BP_Lamp(int32 EntryPoint);
}; // Size: 0x320

#endif
