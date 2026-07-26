#ifndef UE4SS_SDK_WBP_MapPoint_Info_HPP
#define UE4SS_SDK_WBP_MapPoint_Info_HPP

class UWBP_MapPoint_Info_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anｍ_In;                                                   // 0x0280 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_C_139;                          // 0x0288 (size: 0x8)
    class UCanvasPanel* Canvas_Boss_Clear;                                            // 0x0290 (size: 0x8)
    class UCanvasPanel* Canvas_Warning;                                               // 0x0298 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Info;                                             // 0x02A0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_TItle;                                        // 0x02A8 (size: 0x8)
    class UImage* Image_Boss;                                                         // 0x02B0 (size: 0x8)
    class UImage* Image_L;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_Line;                                                         // 0x02C0 (size: 0x8)
    class UImage* Image_R;                                                            // 0x02C8 (size: 0x8)
    class UImage* Image_Unknown;                                                      // 0x02D0 (size: 0x8)
    class UImage* Image_WarningBase;                                                  // 0x02D8 (size: 0x8)
    class UImage* Image_WarningBase_1;                                                // 0x02E0 (size: 0x8)
    class UOverlay* Overlay_BossBanner;                                               // 0x02E8 (size: 0x8)
    class UOverlay* Overlay_Guide_Dismantle;                                          // 0x02F0 (size: 0x8)
    class UOverlay* Overlay_Guide_Info_2;                                             // 0x02F8 (size: 0x8)
    class UOverlay* Overlay_Guide_Transport;                                          // 0x0300 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Lv;                                                // 0x0308 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LvNum;                                             // 0x0310 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StartInvadeTimer;                                  // 0x0318 (size: 0x8)
    class UVerticalBox* Vertical_KeyBoss;                                             // 0x0320 (size: 0x8)
    class UVerticalBox* Vertical_Quest;                                               // 0x0328 (size: 0x8)
    class UWBP_MapPoint_Info_SubName_C* WBP_MapPoint_Info_SubName_Quest;              // 0x0330 (size: 0x8)
    TMap<class EPalBossType, class UTexture2D*> BossBannerImages;                     // 0x0338 (size: 0x50)
    FDataTableRowHandle BaseCampMsgId;                                                // 0x0388 (size: 0x10)
    float LocalRemainInvadeTimer;                                                     // 0x0398 (size: 0x4)

    void AllReset();
    void AdjustSide(FGeometry TargetGeometry);
    void SetFTInfo(FName FTID, bool CanTeleport);
    void SetCampInfo(bool CanTeleport, FGuid BaseCampId);
    void SetTowerBossInfo(class APalBossTower* BossTower, bool CanTeleport);
    void ToggleDisplay(bool ShouldDisplay);
    void SetStandaloneBossInfo(bool IsDefeated, const TArray<FName>& CharacterIds, int32 Level, FName BossBattleRow);
    void SetBossInfo(bool IsDefeated, const FName& CharacterID, int32 Level, FName SpawnerID, bool bHiddenLocation, FName OriginalSpawnerID);
    void AppendQuestInfo(FName QuestId);
    void SetQuestInfo(FName QuestId);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_MapPoint_Info(int32 EntryPoint);
}; // Size: 0x39C

#endif
