#ifndef UE4SS_SDK_WBP_PalCommonItemSlot_HPP
#define UE4SS_SDK_WBP_PalCommonItemSlot_HPP

class UWBP_PalCommonItemSlot_C : public UWBP_PalItemSlotBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E8 (size: 0x8)
    class UImage* Background;                                                         // 0x04F0 (size: 0x8)
    class UImage* Background_circle_b;                                                // 0x04F8 (size: 0x8)
    class UImage* Background_Circle_f;                                                // 0x0500 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_135;                                  // 0x0508 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;                            // 0x0510 (size: 0x8)
    FWBP_PalCommonItemSlot_COnAfterSetEmpty OnAfterSetEmpty;                          // 0x0518 (size: 0x10)
    void OnAfterSetEmpty();
    FWBP_PalCommonItemSlot_COnAfterUpdateSlot OnAfterUpdateSlot;                      // 0x0528 (size: 0x10)
    void OnAfterUpdateSlot();

    void OnSetValidSlot_Binded();
    void OnSetEmpty_Binded();
    void OnUpdateSlot_Binded(class UPalItemSlot* TargetSlot);
    void RegisterItemIconWidget(class UWBP_PalItemIconBase_C*& IconWidget);
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalCommonItemSlot(int32 EntryPoint);
    void OnAfterUpdateSlot__DelegateSignature();
    void OnAfterSetEmpty__DelegateSignature();
}; // Size: 0x538

#endif
