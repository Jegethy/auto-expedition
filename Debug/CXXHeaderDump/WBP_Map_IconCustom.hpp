#ifndef UE4SS_SDK_WBP_Map_IconCustom_HPP
#define UE4SS_SDK_WBP_Map_IconCustom_HPP

class UWBP_Map_IconCustom_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0538 (size: 0x8)
    class UImage* Icon;                                                               // 0x0540 (size: 0x8)
    class UImage* Icon_Plan;                                                          // 0x0548 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x0550 (size: 0x8)
    FPalCustomMarkerSaveData MarkerSaveData;                                          // 0x0558 (size: 0x20)
    bool SetAsCustomMarker;                                                           // 0x0578 (size: 0x1)
    FPalGuildMarkerData GuildMarkerData;                                              // 0x0580 (size: 0x40)

    bool GetLocationOnLandscape(FVector& OutLocation);
    void GetInvisibleButton(class UWidget*& Button);
    void BndEvt__WBP_Map_IconCustom_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconCustom_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconCustom_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void SetTexture(class UTexture2D* Texture);
    void SetColorType(bool IsCustomMarker);
    void ExecuteUbergraph_WBP_Map_IconCustom(int32 EntryPoint);
}; // Size: 0x5C0

#endif
