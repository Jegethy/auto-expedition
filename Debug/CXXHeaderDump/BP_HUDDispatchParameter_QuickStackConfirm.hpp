#ifndef UE4SS_SDK_BP_HUDDispatchParameter_QuickStackConfirm_HPP
#define UE4SS_SDK_BP_HUDDispatchParameter_QuickStackConfirm_HPP

class UBP_HUDDispatchParameter_QuickStackConfirm_C : public UPalHUDDispatchParameterBase
{
    FBP_HUDDispatchParameter_QuickStackConfirm_COnQuickStackConfirmed OnQuickStackConfirmed; // 0x0038 (size: 0x10)
    void OnQuickStackConfirmed(bool IsYes);
    TArray<class UPalItemSlot*> StackItemSlots;                                       // 0x0048 (size: 0x10)

    void OnQuickStackConfirmed__DelegateSignature(bool IsYes);
}; // Size: 0x58

#endif
