#ifndef UE4SS_SDK_WBP_IngameMenu_Construction_Group_HPP
#define UE4SS_SDK_WBP_IngameMenu_Construction_Group_HPP

class UWBP_IngameMenu_Construction_Group_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UGridPanel* GridPanel_BuildObject;                                          // 0x0280 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0288 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Category;                                          // 0x0298 (size: 0x8)
    TMap<class EPalBuildObjectTypeForUIDisplay, class FDataTableRowHandle> DisplayNameMap; // 0x02A0 (size: 0x50)
    FWBP_IngameMenu_Construction_Group_COnSelectedAnyBuildObject OnSelectedAnyBuildObject; // 0x02F0 (size: 0x10)
    void OnSelectedAnyBuildObject(class UWBP_IngameMenu_Construction_Icon_C* Widget);
    FWBP_IngameMenu_Construction_Group_COnHoveredAnyBuildObjectIcon OnHoveredAnyBuildObjectIcon; // 0x0300 (size: 0x10)
    void OnHoveredAnyBuildObjectIcon(class UWBP_IngameMenu_Construction_Icon_C* Widget);
    FWBP_IngameMenu_Construction_Group_COnUnhoveredAnyBuildObjectIcon OnUnhoveredAnyBuildObjectIcon; // 0x0310 (size: 0x10)
    void OnUnhoveredAnyBuildObjectIcon();
    int32 LastHoveredChildIndex;                                                      // 0x0320 (size: 0x4)
    TSoftObjectPtr<UBP_IngameMenu_Construction_ListFocusCalculator_C> NavigationCalculator; // 0x0328 (size: 0x30)
    int32 MyListNumber;                                                               // 0x0358 (size: 0x4)
    int32 LastHoveredChildColumnIndex;                                                // 0x035C (size: 0x4)

    void IsExistNewBuildObject(bool& bExist);
    void GetVisibleWidgets(TArray<class UWBP_IngameMenu_Construction_Icon_C*>& OutWidgets);
    void GetTopWidget(class UWBP_IngameMenu_Construction_Icon_C*& Widget);
    void GetWIdgettByBuildObjectId(FName BuildObjectId, class UWBP_IngameMenu_Construction_Icon_C*& Widget);
    void GetFocusTargetByBuildObjectId(FName BuildObjectId, class UWidget*& Widget);
    void IsExistRow(int32 RowIndex, bool& bIsExist);
    class UWidget* DoCustomNavigation_Up(EUINavigation Navigation);
    class UWidget* DoCustomNavigation_Down(EUINavigation Navigation);
    void GetChildAt_Clamped(int32 Index, class UWBP_IngameMenu_Construction_Icon_C*& Widget);
    void GetVisibleChildCount(int32& Count);
    void GetListNumber(int32& Number);
    void SetListNumber(int32 Number);
    void SetNavigationCalculator(class UBP_IngameMenu_Construction_ListFocusCalculator_C* Calculator);
    void OnHoveredAnyBuildObjectIcon_Binded(class UWBP_IngameMenu_Construction_Icon_C* Widget);
    void OnUnhoveredAnyBuildObjectIcon_Binded();
    void OnClickedBuildObjectIcon(class UWBP_IngameMenu_Construction_Icon_C* Widget);
    void GetTopFocusTarget(class UWidget*& Widget);
    void Setup(EPalBuildObjectTypeForUIDisplay UIDisplayType, FPalBuildObjectDataSetTypeUIDisplay DataSet);
    void Destruct();
    void ExecuteUbergraph_WBP_IngameMenu_Construction_Group(int32 EntryPoint);
    void OnUnhoveredAnyBuildObjectIcon__DelegateSignature();
    void OnHoveredAnyBuildObjectIcon__DelegateSignature(class UWBP_IngameMenu_Construction_Icon_C* Widget);
    void OnSelectedAnyBuildObject__DelegateSignature(class UWBP_IngameMenu_Construction_Icon_C* Widget);
}; // Size: 0x360

#endif
