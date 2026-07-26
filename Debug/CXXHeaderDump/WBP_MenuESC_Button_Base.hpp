#ifndef UE4SS_SDK_WBP_MenuESC_Button_Base_HPP
#define UE4SS_SDK_WBP_MenuESC_Button_Base_HPP

class UWBP_MenuESC_Button_Base_C : public UUserWidget
{
    TEnumAsByte<E_PalEscMenuType::Type> MenuType;                                     // 0x0278 (size: 0x1)
    TMap<TEnumAsByte<E_PalEscMenuType::Type>, FDataTableRowHandle> BaseTextIDMap;     // 0x0280 (size: 0x50)
    FWBP_MenuESC_Button_Base_COnClicked OnClicked;                                    // 0x02D0 (size: 0x10)
    void OnClicked(TEnumAsByte<E_PalEscMenuType::Type> MenuType);

    void OnClicked__DelegateSignature(TEnumAsByte<E_PalEscMenuType::Type> MenuType);
}; // Size: 0x2E0

#endif
