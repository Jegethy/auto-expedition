#ifndef UE4SS_SDK_WBP_BattleEntry_MemberList_HPP
#define UE4SS_SDK_WBP_BattleEntry_MemberList_HPP

class UWBP_BattleEntry_MemberList_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0658 (size: 0x8)
    class UWidgetAnimation* Listup;                                                   // 0x0660 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PlayerName;                                          // 0x0668 (size: 0x8)
    class UImage* Image_HostIcon;                                                     // 0x0670 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LvNum;                                             // 0x0678 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LvTitle;                                           // 0x0680 (size: 0x8)

    void OnUpdateLevel_Binded(int32 NewLevel);
    void UpdatePlayerName();
    void OnUpdateNickName_Binded(FString NewNickName);
    void Construct();
    void SetPlayerInfo(FString PlayerName, int32 PlayLv, bool IsHost, class UPalIndividualCharacterHandle* targetHandle);
    void SetValidation(bool IsValid);
    void OnInitialized();
    void ExecuteUbergraph_WBP_BattleEntry_MemberList(int32 EntryPoint);
}; // Size: 0x688

#endif
