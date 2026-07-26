#ifndef UE4SS_SDK_BP_HUDDispatchParameter_ItemFilter_HPP
#define UE4SS_SDK_BP_HUDDispatchParameter_ItemFilter_HPP

class UBP_HUDDispatchParameter_ItemFilter_C : public UPalHUDDispatchParameterBase
{
    FBP_HUDDispatchParameter_ItemFilter_COnFilterApply OnFilterApply;                 // 0x0038 (size: 0x10)
    void OnFilterApply(TArray<FName>& Types);
    TArray<FName> CurrentFilter;                                                      // 0x0048 (size: 0x10)
    bool RemoveEssential;                                                             // 0x0058 (size: 0x1)

    void OnFilterApply__DelegateSignature(TArray<FName>& Types);
}; // Size: 0x59

#endif
