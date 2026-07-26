#ifndef UE4SS_SDK_WBP_PalCommonCharacterSlot_HPP
#define UE4SS_SDK_WBP_PalCommonCharacterSlot_HPP

class UWBP_PalCommonCharacterSlot_C : public UWBP_PalCharacterSlotBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0950 (size: 0x8)
    class UWidgetAnimation* Anm_BaseDefault;                                          // 0x0958 (size: 0x8)
    class UWidgetAnimation* Anm_BaseDisable;                                          // 0x0960 (size: 0x8)
    class UWidgetAnimation* Anm_SeedIcon;                                             // 0x0968 (size: 0x8)
    class UWidgetAnimation* Anm_LowHealthLoop;                                        // 0x0970 (size: 0x8)
    class UWidgetAnimation* Anm_SleepIcon;                                            // 0x0978 (size: 0x8)
    class UWidgetAnimation* Anm_MealIcon;                                             // 0x0980 (size: 0x8)
    class UWidgetAnimation* Anm_WorkIcon;                                             // 0x0988 (size: 0x8)
    class UImage* Background;                                                         // 0x0990 (size: 0x8)
    class UImage* Background_circle_b;                                                // 0x0998 (size: 0x8)
    class UImage* Background_Doping;                                                  // 0x09A0 (size: 0x8)
    class UImage* Image_10;                                                           // 0x09A8 (size: 0x8)
    class UImage* Image_64;                                                           // 0x09B0 (size: 0x8)
    class UImage* Image_71;                                                           // 0x09B8 (size: 0x8)
    class UImage* Image_229;                                                          // 0x09C0 (size: 0x8)
    class UImage* Image_Icon_Expedition;                                              // 0x09C8 (size: 0x8)
    class UImage* Image_Icon_GlobalInport;                                            // 0x09D0 (size: 0x8)
    class UImage* Image_Icon_Locked;                                                  // 0x09D8 (size: 0x8)
    class UImage* Image_IconPalWork;                                                  // 0x09E0 (size: 0x8)
    class UImage* Image_Meal;                                                         // 0x09E8 (size: 0x8)
    class UImage* Image_Mutant;                                                       // 0x09F0 (size: 0x8)
    class UImage* Image_PalBattleImage;                                               // 0x09F8 (size: 0x8)
    class UImage* Image_PalDying;                                                     // 0x0A00 (size: 0x8)
    class UImage* Image_PalLowHealth;                                                 // 0x0A08 (size: 0x8)
    class UImage* Image_PalSleep;                                                     // 0x0A10 (size: 0x8)
    class UImage* Image_Plus;                                                         // 0x0A18 (size: 0x8)
    class UImage* Image_Rare;                                                         // 0x0A20 (size: 0x8)
    class UImage* Image_Strong;                                                       // 0x0A28 (size: 0x8)
    class UOverlay* Overlay_Awakening;                                                // 0x0A30 (size: 0x8)
    class UOverlay* Overlay_Ban;                                                      // 0x0A38 (size: 0x8)
    class UOverlay* Overlay_Doping;                                                   // 0x0A40 (size: 0x8)
    class UOverlay* Overlay_Revive;                                                   // 0x0A48 (size: 0x8)
    class UBP_PalTextBlock_C* Text_HPPercent;                                         // 0x0A50 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ReviveTimer;                                       // 0x0A58 (size: 0x8)
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;                  // 0x0A60 (size: 0x8)
    bool lastWorkDetail;                                                              // 0x0A68 (size: 0x1)
    bool isBattleModeDisplay;                                                         // 0x0A69 (size: 0x1)
    bool isLowHealthBlink;                                                            // 0x0A6A (size: 0x1)
    bool isDisplayHealthPercent;                                                      // 0x0A6B (size: 0x1)
    bool isDisplayRarity;                                                             // 0x0A6C (size: 0x1)
    double chachedLastHPPercent;                                                      // 0x0A70 (size: 0x8)
    bool bIsDisplayDopingEffect;                                                      // 0x0A78 (size: 0x1)
    bool isDisplayReviveTimer;                                                        // 0x0A79 (size: 0x1)
    bool bIsDisplayFavoriteMark;                                                      // 0x0A7A (size: 0x1)
    bool bIsDisplayAwakeningMark;                                                     // 0x0A7B (size: 0x1)

    void OnUpdateAwakening_Binded(bool bAwaked);
    void DisplayBanMark(bool bDisplay);
    void UpdateStatusDetail();
    void OnRemoveStatus_Binded(class UPalStatusComponent* StatusComponent, EPalStatusID statusID);
    void OnAddStatus_Binded(class UPalStatusComponent* StatusComponent, EPalStatusID statusID, class UPalStatusBase* StatusBase);
    void SetForceExpeditionMark(bool bInExpedition);
    void OnChangedAssignToExpedition_Binded(bool bIsAssigned);
    void OnUpdateFavorite_Binded(int32 NewIndex);
    void OnUpdateReviveTimer_Binded(double NowTimer, double ReviveSpeedMultiplier);
    void On Set Rarity Binded(bool IsBoss, bool IsRare);
    void OnTargetCharacterEndEat();
    void OnTargetCharacterBeginEat();
    void OnTargetCharcaterEndSleep();
    void OnTargetCharcaterBeginSleep();
    void OnNotifyBattleModeChanged_Binded(bool IsBattleMode);
    void OnNotifyWorkDetail_Binded(bool IsWorking);
    void On Update HP Binded(int64 nowHP, int64 nowMaxHP);
    void RegisterCharacterIconWidget(class UWBP_PalCharacterIconBase_C*& IconWidget);
    void On Update Slot Binded(class UPalIndividualCharacterSlot* TargetSlot);
    void OnSetValidSlot_Binded();
    void On Set Empty Binded();
    void AnmEvent_StartLowHealthLoop();
    void AnmEvent_StopLowHeathLoop();
    void AnmEvent_BeginSleep();
    void AnmEvent_EndSleep();
    void AnmEvent_StartWork();
    void AnmEvent_EndWork();
    void AnmEvent_BeginEat();
    void AnmEvent_EndEat();
    void AnmEvent_Enabled();
    void AnmEvent_Disabled();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalCommonCharacterSlot(int32 EntryPoint);
}; // Size: 0xA7C

#endif
