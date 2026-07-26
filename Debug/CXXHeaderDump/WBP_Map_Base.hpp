#ifndef UE4SS_SDK_WBP_Map_Base_HPP
#define UE4SS_SDK_WBP_Map_Base_HPP

class UWBP_Map_Base_C : public UPalUIWorldMap
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UWidgetAnimation* Anm_Respawn_In;                                           // 0x0488 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur_1;                                          // 0x0490 (size: 0x8)
    class UCanvasPanel* BG;                                                           // 0x0498 (size: 0x8)
    class UCanvasPanel* Canvas_Warning;                                               // 0x04A0 (size: 0x8)
    class UCanvasPanel* Canvas_Warning_UnderAttack;                                   // 0x04A8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Filter;                                       // 0x04B0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_FocusToBaseCamp;                              // 0x04B8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Marker;                                       // 0x04C0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_SelectMap;                                    // 0x04C8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x04D0 (size: 0x8)
    class UImage* Image_QuestTrackingIcon_ChangeMapKeyGuide;                          // 0x04D8 (size: 0x8)
    class UOverlay* Overlay_RespawnMsg;                                               // 0x04E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_CursorLocation;                                    // 0x04E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NextMapName;                                       // 0x04F0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RemainTime_StartInvade;                            // 0x04F8 (size: 0x8)
    class UWBP_Map_Body_C* WBP_Map_Body_MW5;                                          // 0x0500 (size: 0x8)
    class UWBP_MapFilter_Win_C* WBP_MapFilter_Win;                                    // 0x0508 (size: 0x8)
    class UWBP_MapMarker_Win_C* WBP_MapMarker_Win;                                    // 0x0510 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0518 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_97;                                         // 0x0520 (size: 0x8)
    FName CloseMapActionName;                                                         // 0x0528 (size: 0x8)
    FName FocusPlayerActionName;                                                      // 0x0530 (size: 0x8)
    FName CustomMarkActionName;                                                       // 0x0538 (size: 0x8)
    FName FilterActionName;                                                           // 0x0540 (size: 0x8)
    TMap<class FGuid, class UWBP_WorldMap_IconBase_NoDesign_C*> CreatedIconMap;       // 0x0548 (size: 0x50)
    TMap<class FGuid, class UWBP_Map_IconCustom_C*> CustomMarkerMap;                  // 0x0598 (size: 0x50)
    TMap<class UPalLocationPoint*, class FGuid> DeathMarkMap;                         // 0x05E8 (size: 0x50)
    TArray<class UWBP_Map_IconDeath_C*> DeathMarks;                                   // 0x0638 (size: 0x10)
    TArray<class UWBP_Map_IconTower_C*> BossTowerIcons;                               // 0x0648 (size: 0x10)
    TMap<class FGuid, class UWBP_Map_IconCustom_C*> GuildMarkerMap;                   // 0x0658 (size: 0x50)
    bool CustomMarkMode;                                                              // 0x06A8 (size: 0x1)
    bool FilterOpened;                                                                // 0x06A9 (size: 0x1)
    class UWBP_WorldMap_IconBase_NoDesign_C* CurrentSetupIcon;                        // 0x06B0 (size: 0x8)
    bool For Respawn;                                                                 // 0x06B8 (size: 0x1)
    TArray<class UWBP_Map_IconPlayer_C*> PlayerIcons;                                 // 0x06C0 (size: 0x10)
    bool Can Fast Travel;                                                             // 0x06D0 (size: 0x1)
    bool bIsInitSelect;                                                               // 0x06D1 (size: 0x1)
    TSet<EPalLocationType> FilterIconTypes;                                           // 0x06D8 (size: 0x50)
    FDataTableRowHandle FTMsgID;                                                      // 0x0728 (size: 0x10)
    FDataTableRowHandle RespawnMsgID;                                                 // 0x0738 (size: 0x10)
    TArray<class UWBP_Map_IconBoss_C*> BossIcons;                                     // 0x0748 (size: 0x10)
    FName DismantalActionName;                                                        // 0x0758 (size: 0x8)
    FDataTableRowHandle InitSelectMsgID;                                              // 0x0760 (size: 0x10)
    class UWBP_WorldMap_IconBase_NoDesign_C* CurrentSelectedFTIcon;                   // 0x0770 (size: 0x8)
    FName ShowQuestActionName;                                                        // 0x0778 (size: 0x8)
    FWBP_Map_Base_COnRequestShowQuest OnRequestShowQuest;                             // 0x0780 (size: 0x10)
    void OnRequestShowQuest(FName QuestId);
    TArray<class UWBP_Map_IconBoss_C*> NewVar;                                        // 0x0790 (size: 0x10)
    class UPalUIWorldMapIcon* CurrentFocusIcon;                                       // 0x07A0 (size: 0x8)
    class UWBP_Map_IconCustom_C* TempSettingCustomMarker;                             // 0x07A8 (size: 0x8)
    double DefaultSearchIconBoxSize;                                                  // 0x07B0 (size: 0x8)
    TMap<class EPalLocationType, class TSubclassOf<UPalUIWorldMapIcon>> IconClassMap; // 0x07B8 (size: 0x50)
    TMap<class FName, class UWBP_Map_Body_C*> MapBodyMap;                             // 0x0808 (size: 0x50)
    FName CurrentDisplayMapName;                                                      // 0x0858 (size: 0x8)
    TArray<FName> UnlockedMapNames;                                                   // 0x0860 (size: 0x10)
    FPalDataTableRowName_UIInputAction ChangeMapActionName;                           // 0x0870 (size: 0x8)
    class UWBP_Map_IconQuest_C* AlternativeTrackingQuestIcon;                         // 0x0878 (size: 0x8)
    FDataTableRowHandle ChangeMapTextId;                                              // 0x0880 (size: 0x10)
    TArray<class UPalUIWorldMapIcon*> NearestRespawnPointFastTravelIcon;              // 0x0890 (size: 0x10)
    FName HideNearestRespawnPointFastravelIconFlagName;                               // 0x08A0 (size: 0x8)
    TArray<FName> NearestRespawnPointFastTravelIds;                                   // 0x08A8 (size: 0x10)
    bool bWaitingInvade;                                                              // 0x08B8 (size: 0x1)
    FTimerHandle TimerHandle_SyncStartInvadeTimer;                                    // 0x08C0 (size: 0x8)
    float LocalRemainStartInvadeTime;                                                 // 0x08C8 (size: 0x4)
    FPalDataTableRowName_UIInputAction FocusToBaseCampActionName;                     // 0x08CC (size: 0x8)
    FPalUIActionBindData ActionHandle_FocusToBaseCamp;                                // 0x08D4 (size: 0x4)
    TArray<class UWBP_Map_StandAloneBossIcon_C*> StandaloneBossIcons;                 // 0x08D8 (size: 0x10)
    class UPalGroupGuildBase* LastBelongGuild;                                        // 0x08E8 (size: 0x8)
    FGuid Current Base Camp Id;                                                       // 0x08F0 (size: 0x10)

    void CREATEDELEGATE_PROXYFUNCTION_6(class UPalGroupGuildBase* Guild, const FGuid& MarkerID);
    void CREATEDELEGATE_PROXYFUNCTION_5(class UPalGroupGuildBase* Guild, const FGuid& MarkerID, const FPalGuildMarkerData& MarkerData);
    void CREATEDELEGATE_PROXYFUNCTION_4(class UPalGroupGuildBase* Guild, const FGuid& MarkerID, const FPalGuildMarkerData& MarkerData);
    void CREATEDELEGATE_PROXYFUNCTION_3(class UPalGroupGuildBase* Guild, const FGuid& MarkerID);
    void CREATEDELEGATE_PROXYFUNCTION_2(class UPalGroupGuildBase* Guild, const FGuid& MarkerID, const FPalGuildMarkerData& MarkerData);
    void CREATEDELEGATE_PROXYFUNCTION_1(class UPalGroupGuildBase* Guild, const FGuid& MarkerID, const FPalGuildMarkerData& MarkerData);
    void CREATEDELEGATE_PROXYFUNCTION_0(const FGuid& MarkerID);
    void On Close Dialog For Cant Fast Travel (bool bResult);
    void UnbindGuildDelegates();
    void OnRemoveGuildMarker(class UPalGroupGuildBase* Guild, FGuid MarkerID);
    void OnChangeGuildMarker(class UPalGroupGuildBase* Guild, FGuid MarkerID, FPalGuildMarkerData MarkerData);
    void OnAddGuildMarker(class UPalGroupGuildBase* Guild, FGuid MarkerID, FPalGuildMarkerData MarkerData);
    void ConfirmTempCustomIcon(class UWBP_Map_IconCustom_C* Icon);
    void AddTempMarker(FVector Location);
    void SwitchMarkerModeAction();
    void OpenMarkerWindow(class UWBP_Map_IconCustom_C* CustomIcon);
    void UpdateFocusToBaseCampInputAction();
    void CanFocusToBaseCamp(bool& bCanFocus);
    void FocusToNearestBaseCamp();
    void OnEndInvade(const FPalIncidentBroadcastParameter& Parameter);
    void OnStartInvade(const FPalIncidentBroadcastParameter& Parameter);
    void OnInvaderDeclaration(const FDateTime& StartRealTime);
    void UpdateRemainStartInvaderTimer(double DeltaTime);
    void OnTimerEvent_SyncStartInvadeTimer();
    void SetupInvaderInfo();
    void DisplayNearestRespawnPointFastTrabelPoint();
    void HideNearestRespawnPointFastTravelPoint();
    void GetNextMapName(FName& MapName);
    void ClearArternativeMissionTrackingIcon();
    void SetupAlternativeMissionTrackingIcon();
    void OnInputAction_ChangeMap();
    void SetupInputAction();
    void SetupUnlockedMapInfo();
    void GetCurrentDisplayLandscapeSize(FVector& MinSize, FVector& MaxSize);
    void GetCurrentDisplayMapName(FName& MapName);
    void ChangeMap(FName TargetMapName);
    void GetMapBodyByLocation(FVector WorldLocation, class UWBP_Map_Body_C*& MapBody);
    void AdjustPlayer();
    void GetCurrentMapBody(class UWBP_Map_Body_C*& MapBody);
    void GetMapBody(FName MapName, class UWBP_Map_Body_C*& MapBody);
    void GetLandscapeSize(FName MapName, FVector& MinSize, FVector& MaxSize);
    void InitializeMapBody();
    void PrintPosition();
    void SearchNearestIcon();
    void CalcSearchIconBoxSize(double& BoxSize);
    void ShouldShowAnotherBaseCamp(bool& bShowBaseCamp);
    void MakeBaseCampIcon(class UPalLocationPointBaseCamp* Location, class UWBP_WorldMap_IconBase_NoDesign_C*& BaseCampIcon);
    void OnInputAction_ShowQuest();
    void UpdateBossIconState();
    void OnRequestCampDismantal();
    void Add Boss Icon(FPalUIBossSpawnerLoactionData SpawnerData);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void On Custom Mark Changed(FGuid Guid);
    void SetupGuildMarkers();
    void SetupCustomIcons();
    void ChangeFilter(EPalLocationType FilterMap, bool IsEnable);
    void SetFilter();
    void ChangeCustomIcon(class UWBP_Map_IconCustom_C* Icon, int32 Index);
    void RemoveCustomIcon(class UWBP_Map_IconCustom_C* Icon);
    void AddCustomIcon(FGuid LocationId, FPalCustomMarkerSaveData MarkerData);
    void OnCloseAction();
    void Enable Custom Mark();
    void RefreshDeathMark(TMap<class FGuid, class UPalLocationBase*> LocationMap);
    void RefreshIconState(EPalLocationType Type, class UPalLocationPoint* LocationPoint, class UWBP_WorldMap_IconBase_NoDesign_C* Icon);
    void Setup Icon(EPalLocationType LocationType, class UPalLocationPoint* LocationPoint, class UWBP_WorldMap_IconBase_NoDesign_C*& Icon);
    void OnRemovedLocation(const FGuid& LocationId, class UPalLocationBase* Location);
    void Setup Boss Icon();
    void Setup Location Point Icon(const FGuid& LocationId, class UPalLocationBase* Location);
    void Setup Location Icon();
    void OnInputMethodChanged(ECommonInputType InputType);
    void OnRepliedDialog(bool bOK);
    void On Icon Clicked(class UWBP_WorldMap_IconBase_NoDesign_C* Icon);
    class UWidget* BP_GetDesiredFocusTarget();
    void CloseMap();
    void OnSetup();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void BndEvt__WBP_Map_Base_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Destruct();
    void Construct();
    void DelayUpdateMarkerWindow();
    void ExecuteUbergraph_WBP_Map_Base(int32 EntryPoint);
    void OnRequestShowQuest__DelegateSignature(FName QuestId);
}; // Size: 0x900

#endif
