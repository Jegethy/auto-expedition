#ifndef UE4SS_SDK_WBP_IngameMenu_WorkSpace_Category_HPP
#define UE4SS_SDK_WBP_IngameMenu_WorkSpace_Category_HPP

class UWBP_IngameMenu_WorkSpace_Category_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UImage* Image_CategoryIcon;                                                 // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Title;                                             // 0x0290 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0298 (size: 0x8)
    bool bCurrentActive;                                                              // 0x02A0 (size: 0x1)
    TEnumAsByte<E_PalUIWorkSpaceDisplayCategory::Type> BindCategory;                  // 0x02A1 (size: 0x1)
    TMap<TEnumAsByte<E_PalUIWorkSpaceDisplayCategory::Type>, FDataTableRowHandle> MsgIDMap; // 0x02A8 (size: 0x50)
    FWBP_IngameMenu_WorkSpace_Category_COnClicked OnClicked;                          // 0x02F8 (size: 0x10)
    void OnClicked(class UWBP_IngameMenu_WorkSpace_Category_C* Widget);

    void GetBindCategory(TEnumAsByte<E_PalUIWorkSpaceDisplayCategory::Type>& OutCategory);
    void GetTargetItemTypes(TArray<EPalItemTypeA>& ItemTypesA, TArray<EPalItemTypeA>& ExcludeItemTypesB);
    void Setup();
    void AnmEvent_Active(bool bIsActive);
    void Construct();
    void BndEvt__WBP_IngameMenu_WorkSpace_Category_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Destruct();
    void ExecuteUbergraph_WBP_IngameMenu_WorkSpace_Category(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_IngameMenu_WorkSpace_Category_C* Widget);
}; // Size: 0x308

#endif
