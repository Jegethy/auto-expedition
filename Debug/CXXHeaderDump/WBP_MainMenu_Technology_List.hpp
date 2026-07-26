#ifndef UE4SS_SDK_WBP_MainMenu_Technology_List_HPP
#define UE4SS_SDK_WBP_MainMenu_Technology_List_HPP

class UWBP_MainMenu_Technology_List_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_LockToUnlock;                                         // 0x0280 (size: 0x8)
    class UHorizontalBox* HorizontalBox_TechnologyButton;                             // 0x0288 (size: 0x8)
    class UImage* Image_Line;                                                         // 0x0290 (size: 0x8)
    class USizeBox* SizeBox_BossTech;                                                 // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_TechnologyLevel;                                   // 0x02A0 (size: 0x8)
    FWBP_MainMenu_Technology_List_COnClickedTechnology OnClickedTechnology;           // 0x02A8 (size: 0x10)
    void OnClickedTechnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    FWBP_MainMenu_Technology_List_COnHoveredTechnoogy OnHoveredTechnoogy;             // 0x02B8 (size: 0x10)
    void OnHoveredTechnoogy(class UWBP_MainMenu_Technology_Content_C* Widget, class UWBP_MainMenu_Technology_List_C* ListWidget);
    FWBP_MainMenu_Technology_List_COnUnhoveredTechnology OnUnhoveredTechnology;       // 0x02C8 (size: 0x10)
    void OnUnhoveredTechnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    int32 CachedPlayerLevel;                                                          // 0x02D8 (size: 0x4)
    int32 CachedTechnologyLevel;                                                      // 0x02DC (size: 0x4)
    TArray<class UWBP_MainMenu_Technology_Content_C*> TechnologyContents;             // 0x02E0 (size: 0x10)
    class UWBP_MainMenu_Technology_Content_C* BossTech;                               // 0x02F0 (size: 0x8)

    void UpdateAllButtonDetail();
    void Update List Active();
    void OnUpdatePlayerLevel(int32 addLevel, int32 nowLevel);
    void UnregisterPlayerEvent();
    void RegisterPlayerEvent();
    void UnregisterAllButtonEvent();
    void GetFocusTargetByIndex(int32 ButtonIndex, class UWidget*& Widget);
    void GetButtonIndex(class UWBP_MainMenu_Technology_Content_C* ButtonWidget, int32& Index);
    void GetButtonNum(int32& Num);
    void OnUnhoveredTechnology_Internal(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnHoveredTechnology_Internal(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnClickedTechnology_Internal(class UWBP_MainMenu_Technology_Content_C* Widget);
    void RegisterButtonEvent(class UWBP_MainMenu_Technology_Content_C* TechnologyContentWidget);
    void Get Top Focus Target(class UWidget*& Target);
    void Set Technology Level(int32 Level);
    void Set Technology Data(FF_PalUITechnologyDataMapContent DisplayTechnologyData);
    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void AnmEvent_Unlock();
    void AnmEvent_Lock();
    void Construct();
    void Destruct();
    void OnListItemObjectSet(class UObject* ListItemObject);
    void ExecuteUbergraph_WBP_MainMenu_Technology_List(int32 EntryPoint);
    void OnUnhoveredTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnHoveredTechnoogy__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget, class UWBP_MainMenu_Technology_List_C* ListWidget);
    void OnClickedTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
}; // Size: 0x2F8

#endif
