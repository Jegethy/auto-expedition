#ifndef UE4SS_SDK_BP_HUDDispatchParameter_ItemSearch_HPP
#define UE4SS_SDK_BP_HUDDispatchParameter_ItemSearch_HPP

class UBP_HUDDispatchParameter_ItemSearch_C : public UPalHUDDispatchParameterBase
{
    bool ShowEssential;                                                               // 0x0038 (size: 0x1)
    FBP_HUDDispatchParameter_ItemSearch_COnSearchSlotClicked OnSearchSlotClicked;     // 0x0040 (size: 0x10)
    void OnSearchSlotClicked(FName StaticItemId);

    void OnSearchSlotClicked__DelegateSignature(FName StaticItemId);
}; // Size: 0x50

#endif
