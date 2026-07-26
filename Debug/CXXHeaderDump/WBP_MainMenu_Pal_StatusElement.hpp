#ifndef UE4SS_SDK_WBP_MainMenu_Pal_StatusElement_HPP
#define UE4SS_SDK_WBP_MainMenu_Pal_StatusElement_HPP

class UWBP_MainMenu_Pal_StatusElement_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Image_Element;                                                      // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ElementTypeName;                                   // 0x0288 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0290 (size: 0x8)
    TMap<class EPalElementType, class TSoftObjectPtr<UTexture2D>> TextureMap;         // 0x0298 (size: 0x50)
    bool IsHoverable;                                                                 // 0x02E8 (size: 0x1)
    FWBP_MainMenu_Pal_StatusElement_COnHovered OnHovered;                             // 0x02F0 (size: 0x10)
    void OnHovered(class UWidget* SelfWidget);
    FWBP_MainMenu_Pal_StatusElement_COnUnhovered OnUnhovered;                         // 0x0300 (size: 0x10)
    void OnUnhovered(class UWidget* SelfWidget);

    void Setup(EPalElementType ElementType);
    void Construct();
    void BndEvt__WBP_MainMenu_Pal_StatusElement_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_StatusElement_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Destruct();
    void ExecuteUbergraph_WBP_MainMenu_Pal_StatusElement(int32 EntryPoint);
    void OnUnhovered__DelegateSignature(class UWidget* SelfWidget);
    void OnHovered__DelegateSignature(class UWidget* SelfWidget);
}; // Size: 0x310

#endif
