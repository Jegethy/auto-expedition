#ifndef UE4SS_SDK_BP_HUDDispatchPrameter_WorldSettingCaution_HPP
#define UE4SS_SDK_BP_HUDDispatchPrameter_WorldSettingCaution_HPP

class UBP_HUDDispatchPrameter_WorldSettingCaution_C : public UPalHUDDispatchParameterBase
{
    FPalOptionWorldSettings CheckWorldSettings;                                       // 0x0038 (size: 0x208)
    bool bOutCanceled;                                                                // 0x0240 (size: 0x1)
    TEnumAsByte<E_PalWOrldSettingThresoldCautionDialogOpenType::Type> OpenType;       // 0x0241 (size: 0x1)

}; // Size: 0x242

#endif
