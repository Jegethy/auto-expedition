#ifndef UE4SS_SDK_WBP_PalLvExp_HPP
#define UE4SS_SDK_WBP_PalLvExp_HPP

class UWBP_PalLvExp_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0658 (size: 0x8)
    class UWidgetAnimation* Anm_Friendship_Favorite;                                  // 0x0660 (size: 0x8)
    class UWidgetAnimation* Anm_Friendship_RankUp;                                    // 0x0668 (size: 0x8)
    class UWidgetAnimation* Anm_GetSkill;                                             // 0x0670 (size: 0x8)
    class UWidgetAnimation* Anm_LVUP;                                                 // 0x0678 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x0680 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0688 (size: 0x8)
    class UCanvasPanel* Canvas_FriendshipRank;                                        // 0x0690 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0698 (size: 0x8)
    class UImage* Image_2;                                                            // 0x06A0 (size: 0x8)
    class UImage* Image_3;                                                            // 0x06A8 (size: 0x8)
    class UImage* Image_4;                                                            // 0x06B0 (size: 0x8)
    class UImage* Image_40;                                                           // 0x06B8 (size: 0x8)
    class UImage* Image_Base_Friendship;                                              // 0x06C0 (size: 0x8)
    class UImage* Image_Icon_FavoriteLock;                                            // 0x06C8 (size: 0x8)
    class UImage* Image_SkillEffBase;                                                 // 0x06D0 (size: 0x8)
    class UProgressBar* ProgressBar_Exp;                                              // 0x06D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_AddExp;                                            // 0x06E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Favorite;                                          // 0x06E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_FriendshipRankNum;                                 // 0x06F0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LvUP;                                              // 0x06F8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RankUp;                                            // 0x0700 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Skill;                                             // 0x0708 (size: 0x8)
    class UWBP_LvNum_C* WBP_LvNum;                                                    // 0x0710 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton;      // 0x0718 (size: 0x8)
    double LevelUpAnimeDelay;                                                         // 0x0720 (size: 0x8)
    double NewMoveAnimeDelay;                                                         // 0x0728 (size: 0x8)
    double closeAnimeDelay;                                                           // 0x0730 (size: 0x8)
    double FavoriteAnimeDelay;                                                        // 0x0738 (size: 0x8)
    double FriendshipRankupAnimeDelay;                                                // 0x0740 (size: 0x8)
    FTimerHandle LevelUpAnimeTimerHandle;                                             // 0x0748 (size: 0x8)
    FTimerHandle NewMoveAnimeTimerHandle;                                             // 0x0750 (size: 0x8)
    FTimerHandle FriendshipRankupAnimeTimerHandle;                                    // 0x0758 (size: 0x8)
    FTimerHandle FavoriteAnimeTimerHandle;                                            // 0x0760 (size: 0x8)
    FTimerHandle CloseAnimeTimerHandle;                                               // 0x0768 (size: 0x8)
    bool IsLevelUp;                                                                   // 0x0770 (size: 0x1)
    bool IsNewMove;                                                                   // 0x0771 (size: 0x1)
    bool isDisplaying;                                                                // 0x0772 (size: 0x1)
    int32 LastLevel;                                                                  // 0x0774 (size: 0x4)
    FDataTableRowHandle LevelUpMsgID;                                                 // 0x0778 (size: 0x10)
    FDataTableRowHandle NewMoveMsgID;                                                 // 0x0788 (size: 0x10)
    FName CachedCharacterID;                                                          // 0x0798 (size: 0x8)
    int64 StackExp;                                                                   // 0x07A0 (size: 0x8)
    TArray<EPalWazaID> NewWazaIDArray;                                                // 0x07A8 (size: 0x10)
    int32 ReservedDisplayFriendshipRank;                                              // 0x07B8 (size: 0x4)
    bool bChangedFavoriteByFriendshipRank;                                            // 0x07BC (size: 0x1)
    bool bReservedRankupAnime;                                                        // 0x07BD (size: 0x1)
    double CloseDelay_FriendshipRankup;                                               // 0x07C0 (size: 0x8)

    void Reset();
    void Unbind();
    void OnTriggerFavoriteAnime();
    void SetupFavoriteAnimeTimer();
    void OnTriggerFriendshipRankupAnime();
    void SetupFriendshipRankupAnimeTimer();
    void On Changed Friendship Rank Binded(int32 NewRank, int32 OldRank, bool FavoriteChanged);
    void OnTriggerCloseAnime();
    void OnTriggerNewMoveAnime();
    void OnTriggerLevelUpAnime();
    void BindFromHandle(class UPalIndividualCharacterHandle* targetHandle);
    void OnUpdateSlot(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* LastHandle);
    void BindFromSlot(class UPalIndividualCharacterSlot* TargetSlot);
    void On Update Level Binded(int32 NewLevel);
    void On Update Exp Binded(int64 addExp, int64 oldExp, double nowExpRate);
    void SetupCloseAnimeTimer(double CloseDelay);
    void SetupNewMoveAnimeTimer();
    void SetupLevelUpAnimeTimer();
    void ClearAnimeTimer();
    void Set Level(int32 Level);
    void Set Add Exp(int64 addExp);
    void Set Exp Percent(double Percent);
    void Finished_EED6AA174DCF2B88C18A45B749A443BD();
    void AnmEvent_Close_UI();
    void AnmEvent_Levelup();
    void AnmEvent_NewMove(EPalWazaID newWazaID);
    void AnmEvent_Open_UI();
    void AnmEvent_FriendshipRankup();
    void AnmEvent_Favorite();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalLvExp(int32 EntryPoint);
}; // Size: 0x7C8

#endif
