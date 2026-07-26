#ifndef UE4SS_SDK_WBP_Ingame_InteractDurability_HPP
#define UE4SS_SDK_WBP_Ingame_InteractDurability_HPP

class UWBP_Ingame_InteractDurability_C : public UPalUIMapObjectHPWorldHUD
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Anm_Color_NormalToLittle;                                 // 0x0458 (size: 0x8)
    class UHorizontalBox* Horizontal_PlayerName;                                      // 0x0460 (size: 0x8)
    class UImage* Image;                                                              // 0x0468 (size: 0x8)
    class UProgressBar* ProgressBar_HP;                                               // 0x0470 (size: 0x8)
    class UBP_PalTextBlock_C* Text_GuildName;                                         // 0x0478 (size: 0x8)
    class UBP_PalTextBlock_C* Text_HP_Current;                                        // 0x0480 (size: 0x8)
    class UBP_PalTextBlock_C* Text_HP_MAX;                                            // 0x0488 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PlayerName;                                        // 0x0490 (size: 0x8)
    class UVerticalBox* VerticalBox_BuildingNameRoot;                                 // 0x0498 (size: 0x8)
    bool DamegeReacted;                                                               // 0x04A0 (size: 0x1)
    double CurrentHP;                                                                 // 0x04A8 (size: 0x8)
    class UPalMapObjectModel* Model;                                                  // 0x04B0 (size: 0x8)
    FGuid Cache Player UId;                                                           // 0x04B8 (size: 0x10)
    FString Cache Player Name;                                                        // 0x04C8 (size: 0x10)
    bool Cache Success;                                                               // 0x04D8 (size: 0x1)
    bool bNeedApplyUserInfo;                                                          // 0x04D9 (size: 0x1)
    bool bIsFirstApply;                                                               // 0x04DA (size: 0x1)
    bool Cache Mute Player;                                                           // 0x04DB (size: 0x1)
    FGuid Cache Group Id;                                                             // 0x04DC (size: 0x10)
    FString Cache Guild Name;                                                         // 0x04F0 (size: 0x10)

    void Set Hidden Building Info();
    void On Player Nick Name Updated(FGuid PlayerUId, FString NewNickName, FGuid GroupId, FString GuildName);
    void On Get User Info Completed(bool bSuccess, FGuid PlayerUId, FString PlayerName, FGuid GroupId, FString GuildName);
    void OnSessionMemberChange(FString UserId, const EPalSessionMemberChange ChangeType);
    void GetBlockPlayerUIdByUserId(FString InUserId, bool& OutResult, FGuid& OutPlayerUId);
    void GetMutePlayerUIdByUserId(FString InUserId, bool& OutResult, FGuid& OutPlayerUId);
    void GetPlayerUId(FGuid& OutPlayerUId);
    void UpdateNameInternal(FGuid PlayerUId);
    void Update HP Internal(double CurrentHP, double MaxHP);
    void OnSetup();
    void ShowHP(class APalMapObject* MapObject, EPalHUDDisplayType DisplayType);
    void UpdateHP(class UPalMapObjectModel* Model);
    void CollapsePanel();
    void OnCannonHPUpdate(float CurrentHP, float MaxHP);
    void UpdateName(class UPalMapObjectModel* Model);
    void OnClosed();
    void OnUpdateSignboardText(FString TextValue);
    void ExecuteUbergraph_WBP_Ingame_InteractDurability(int32 EntryPoint);
}; // Size: 0x500

#endif
