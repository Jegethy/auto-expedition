#ifndef UE4SS_SDK_BP_Electric_Pole_3_light_HPP
#define UE4SS_SDK_BP_Electric_Pole_3_light_HPP

class ABP_Electric_Pole_3_light_C : public AActor
{
    class UBP_PalOilrigLightComponent_C* BP_PalOilrigLightComponent;                  // 0x0290 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0298 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* SM_Electric_Pole_3;                                   // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)

}; // Size: 0x2B8

#endif
