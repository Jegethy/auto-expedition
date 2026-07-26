#ifndef UE4SS_SDK_WBP_PaldexScrollList_HPP
#define UE4SS_SDK_WBP_PaldexScrollList_HPP

class UWBP_PaldexScrollList_C : public UWBP_PalCommonScrollList_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    FWBP_PaldexScrollList_COnHoveredAnyPanel OnHoveredAnyPanel;                       // 0x0490 (size: 0x10)
    void OnHoveredAnyPanel(FName CharacterID, class UWBP_Paldex_List_C* SelfWidget);
    FWBP_PaldexScrollList_COnClickedAnyPanel OnClickedAnyPanel;                       // 0x04A0 (size: 0x10)
    void OnClickedAnyPanel(FName CharacterID, class UWBP_Paldex_List_C* Widget);
    TArray<class UWBP_Paldex_List_C*> CreatedChildren;                                // 0x04B0 (size: 0x10)

    void DisplayChild(class UWBP_Paldex_List_C* ChildWidget);
    void DisplayAll();
    void SetDisplayCharacterIdArray(TArray<FPalUIPaldex_DisplayInfo>& displayInfoArray);
    void ClickByCharacterID(FName CharacterID);
    void GetWidgetByIndex(int32 Index, class UWBP_Paldex_List_C*& Widget);
    void ClickByIndex(int32 Index);
    void OnClickedPanel_Internal(FName CharacterID, class UWBP_Paldex_List_C* Widget);
    void GetFocusTargetByCharacterID(FName CharacterID, class UWidget*& Widget);
    void GetFocusTargetByIndex(int32 Index, class UWidget*& Target);
    void FocusByCharatcerID(FName CharacterID);
    void FocusByIndex(int32 Index);
    void CreateChild(FPalUIPaldex_DisplayInfo DisplayInfo);
    void OnHoveredPanel_Internal(FName CharacterID, class UWBP_Paldex_List_C* SelfWidget);
    void AddDisplayInfo(TArray<FPalUIPaldex_DisplayInfo>& infoArray);
    void Destruct();
    void ExecuteUbergraph_WBP_PaldexScrollList(int32 EntryPoint);
    void OnClickedAnyPanel__DelegateSignature(FName CharacterID, class UWBP_Paldex_List_C* Widget);
    void OnHoveredAnyPanel__DelegateSignature(FName CharacterID, class UWBP_Paldex_List_C* SelfWidget);
}; // Size: 0x4C0

#endif
