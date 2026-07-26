#ifndef UE4SS_SDK_WBP_Map_IconTreasureMapPoint_HPP
#define UE4SS_SDK_WBP_Map_IconTreasureMapPoint_HPP

class UWBP_Map_IconTreasureMapPoint_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0538 (size: 0x8)
    class UImage* Icon;                                                               // 0x0540 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x0548 (size: 0x8)

    void Setup_Internal(class UPalLocationPoint* LocationPoint);
    void GetInvisibleButton(class UWidget*& Button);
    void BndEvt__WBP_Map_IconCustom_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconCustom_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconCustom_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Map_IconTreasureMapPoint(int32 EntryPoint);
}; // Size: 0x550

#endif
