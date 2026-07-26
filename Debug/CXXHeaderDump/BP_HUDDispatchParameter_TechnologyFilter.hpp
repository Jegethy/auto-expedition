#ifndef UE4SS_SDK_BP_HUDDispatchParameter_TechnologyFilter_HPP
#define UE4SS_SDK_BP_HUDDispatchParameter_TechnologyFilter_HPP

class UBP_HUDDispatchParameter_TechnologyFilter_C : public UPalHUDDispatchParameterBase
{
    TSet<EPalItemTypeA> ItemTypes;                                                    // 0x0038 (size: 0x50)
    TSet<EPalBuildObjectTypeA> BuildType;                                             // 0x0088 (size: 0x50)
    bool ShowUnlocked;                                                                // 0x00D8 (size: 0x1)
    FBP_HUDDispatchParameter_TechnologyFilter_COnFilterApplied OnFilterApplied;       // 0x00E0 (size: 0x10)
    void OnFilterApplied(TSet<EPalItemTypeA> ItemFilter, TSet<EPalBuildObjectTypeA> BuiltFilter, bool ShowUnlocked);

    void OnFilterApplied__DelegateSignature(TSet<EPalItemTypeA> ItemFilter, TSet<EPalBuildObjectTypeA> BuiltFilter, bool ShowUnlocked);
}; // Size: 0xF0

#endif
