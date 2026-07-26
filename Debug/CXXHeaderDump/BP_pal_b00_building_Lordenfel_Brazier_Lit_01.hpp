#ifndef UE4SS_SDK_BP_pal_b00_building_Lordenfel_Brazier_Lit_01_HPP
#define UE4SS_SDK_BP_pal_b00_building_Lordenfel_Brazier_Lit_01_HPP

class ABP_pal_b00_building_Lordenfel_Brazier_Lit_01_C : public AStaticMeshActor
{
    class UNiagaraComponent* Niagara;                                                 // 0x02A0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02A8 (size: 0x8)
    class UParticleSystemComponent* PS_Torch_Fire_FX_01;                              // 0x02B0 (size: 0x8)
    double Emission;                                                                  // 0x02B8 (size: 0x8)
    double Scale;                                                                     // 0x02C0 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x2C8

#endif
