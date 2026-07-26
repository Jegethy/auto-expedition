#ifndef UE4SS_SDK_WBP_CommonSelectList_HPP
#define UE4SS_SDK_WBP_CommonSelectList_HPP

class UWBP_CommonSelectList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0280 (size: 0x8)
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_2;                      // 0x0288 (size: 0x8)
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_3;                      // 0x0290 (size: 0x8)
    TMap<class FName, class FName> SelectListMap;                                     // 0x0298 (size: 0x50)
    FWBP_CommonSelectList_COnSelect OnSelect;                                         // 0x02E8 (size: 0x10)
    void OnSelect(FName SelectId);

    void GetFirstFocusTarget(class UWidget*& Widget);
    void OnListClicked(class UWBP_GuildMemberMenuList_C* Button);
    void Setup();
    void Construct();
    void ExecuteUbergraph_WBP_CommonSelectList(int32 EntryPoint);
    void OnSelect__DelegateSignature(FName SelectId);
}; // Size: 0x2F8

#endif
