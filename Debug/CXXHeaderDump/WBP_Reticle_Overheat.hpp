#ifndef UE4SS_SDK_WBP_Reticle_Overheat_HPP
#define UE4SS_SDK_WBP_Reticle_Overheat_HPP

class UWBP_Reticle_Overheat_C : public UPalUIAimReticleBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UImage* Gauge_Main_L;                                                       // 0x0488 (size: 0x8)
    class UImage* Gauge_Main_R;                                                       // 0x0490 (size: 0x8)
    class UImage* Image;                                                              // 0x0498 (size: 0x8)
    class UImage* Image_45;                                                           // 0x04A0 (size: 0x8)
    class UOverlay* Overlay_Gauge;                                                    // 0x04A8 (size: 0x8)
    TSoftObjectPtr<ABP_OverheatRifle_C> SoftWeaponActor;                              // 0x04B0 (size: 0x30)
    class UMaterialInstanceDynamic* GaugeMaterialL;                                   // 0x04E0 (size: 0x8)
    class UMaterialInstanceDynamic* GaugeMaterialR;                                   // 0x04E8 (size: 0x8)

    void OnChangedHeatValue(bool bOverHeated, double HeatValue);
    void OnReticleDeactivated();
    void OnReticleActivted(const FPalItemId& WeaponItemId);
    void OnInitialized();
    void Destruct();
    void ExecuteUbergraph_WBP_Reticle_Overheat(int32 EntryPoint);
}; // Size: 0x4F0

#endif
