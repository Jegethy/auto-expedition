#ifndef UE4SS_SDK_WBP_Arena_PalIcon_HPP
#define UE4SS_SDK_WBP_Arena_PalIcon_HPP

class UWBP_Arena_PalIcon_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0658 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Level;                                  // 0x0660 (size: 0x8)
    class UImage* Image_PalIcon;                                                      // 0x0668 (size: 0x8)
    class UOverlay* Overlay_Ban;                                                      // 0x0670 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0678 (size: 0x8)
    FWBP_Arena_PalIcon_COnPalIconHovered OnPalIconHovered;                            // 0x0680 (size: 0x10)
    void OnPalIconHovered(class UWBP_Arena_PalIcon_C* Icon);
    FWBP_Arena_PalIcon_COnPalIconUnhovered OnPalIconUnhovered;                        // 0x0690 (size: 0x10)
    void OnPalIconUnhovered();

    void SetBan(bool IsBaned);
    void OnLevelUpdate(int32 NewLevel);
    void BindFromHandle(class UPalIndividualCharacterHandle* targetHandle);
    void OnInitialized();
    void BndEvt__WBP_Arena_PalIcon_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_PalIcon_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Arena_PalIcon(int32 EntryPoint);
    void OnPalIconUnhovered__DelegateSignature();
    void OnPalIconHovered__DelegateSignature(class UWBP_Arena_PalIcon_C* Icon);
}; // Size: 0x6A0

#endif
