#ifndef UE4SS_SDK_ModActor_HPP
#define UE4SS_SDK_ModActor_HPP

class AModActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    FString ModAuthor;                                                                // 0x02A0 (size: 0x10)
    FString ModDescription;                                                           // 0x02B0 (size: 0x10)
    FString ModVersion;                                                               // 0x02C0 (size: 0x10)
    TArray<FString> ModButtons;                                                       // 0x02D0 (size: 0x10)
    class UMapCollectablesUI_C* UIWidget;                                             // 0x02E0 (size: 0x8)
    class UTestUI_C* TestWidget;                                                      // 0x02E8 (size: 0x8)
    class APalPlayerController* PalPlayerController;                                  // 0x02F0 (size: 0x8)
    class ACollectablesManager_C* CollectablesManager;                                // 0x02F8 (size: 0x8)
    class UWBP_Map_Base_C* CurrentMapBase;                                            // 0x0300 (size: 0x8)
    bool HasMapBeenOpened;                                                            // 0x0308 (size: 0x1)
    bool IsMapOpen;                                                                   // 0x0309 (size: 0x1)
    bool IsDraggingMap;                                                               // 0x030A (size: 0x1)
    FVector TeleportBackLocation;                                                     // 0x0310 (size: 0x18)
    bool ShouldRemoveIconsOnDragSetting;                                              // 0x0328 (size: 0x1)
    bool UseAccurateResourceSearchSetting;                                            // 0x0329 (size: 0x1)
    class UTimer_C* 1SecondTimer;                                                     // 0x0330 (size: 0x8)
    bool ShowTeleportButtonsIfNotHostSetting;                                         // 0x0338 (size: 0x1)
    bool showEffigyTooltips;                                                          // 0x0339 (size: 0x1)
    bool SpikeFired;                                                                  // 0x033A (size: 0x1)
    TArray<FGuid> RegisteredIds;                                                      // 0x0340 (size: 0x10)
    FGuid CachedLocationId;                                                           // 0x0350 (size: 0x10)
    TMap<class FGuid, class FGuid> InstanceIdToLocationId;                            // 0x0360 (size: 0x50)
    double CompassAccumSec;                                                           // 0x03B0 (size: 0x8)
    TSet<FString> ObtainedKeySet;                                                     // 0x03B8 (size: 0x50)
    int32 LastObtainCount;                                                            // 0x0408 (size: 0x4)
    bool WidgetsBuilt;                                                                // 0x040C (size: 0x1)
    bool NewVar;                                                                      // 0x040D (size: 0x1)

    void AddMainMapCollectables(bool IncludeObtainedRelics, bool IncludeObtainedNotes, bool ShowResources, FCollectablesActionStruct CollectablesToAdd, bool IncludeSolvedRuins);
    void AddTreeCollectables(bool IncludeObtainedRelics, bool IncludeObtainedNotes, bool ShowResources, FCollectablesActionStruct CollectablesToAdd, bool IncludeSolvedRuins);
    class UWBP_Map_Body_C* ResolveTreeMapBody();
    void UpdateCompassMarkers(class UPalCoopSkillSearchLocationRegister* LocationRegister);
    void SearchForResources(double DeltaSeconds);
    void TeleportToMapCursorLocationOnMapFilterOpen(double ZValue);
    void PrintAllResources();
    void HandleCollectablesCheckbox_ShowResources(bool IsChecked);
    void HandleCollectablesCheckbox_IncludeCollected(bool IsChecked, FCollectablesActionStruct CollectablesToActOn);
    void HandleCollectablesCheckbox_Generic(bool IsChecked, FCollectablesActionStruct CollectablesToActOn);
    void AddCollectablesWithCurrentOptions();
    void IsNearHiddenRelic2(bool& Result);
    void IsNearHiddenRelic1(bool& Result);
    void Load Checkboxes State JSON();
    void SaveCheckboxesStateJSON();
    void Refresh Remove Old Markers Button();
    void Refresh Teleport Buttons();
    void RefreshUI();
    void SetupSettings();
    void UserConstructionScript();
    void OnCheckStateChanged_ShowRelicsCheckBox_Event(bool bIsChecked);
    void OnCheckStateChanged_IncludeCollectedRelicsCheckBox_Event(bool bIsChecked);
    void OnCheckStateChanged_ShowNotesCheckBox_Event(bool bIsChecked);
    void OnCheckStateChanged_IncludeCollectedNotesCheckBox_Event(bool bIsChecked);
    void OnClicked_TeleportButton1_Event();
    void OnCheckStateChanged_ShowDungeonsCheckBox_Event(bool bIsChecked);
    void OnCheckStateChanged_ShowChestsCheckBox_Event(bool bIsChecked);
    void OnCheckStateChanged_ShowEggsCheckBox_Event(bool bIsChecked);
    void OnCheckStateChanged_ShowNPCCampfiresCheckBox_Event(bool bIsChecked);
    void OnCheckStateChanged_ShowOutpostsCheckBox_Event(bool bIsChecked);
    void OnCheckStateChanged_ShowFruitTreesCheckBox_Event(bool bIsChecked);
    void OnClicked_HideUIButton_Event();
    void OnCheckStateChanged_ShowCoalCheckBox_Event(bool bIsChecked);
    void OnCheckStateChanged_ShowCopperCheckBox_Event(bool bIsChecked);
    void OnCheckStateChanged_ShowQuartzCheckBox_Event(bool bIsChecked);
    void OnCheckStateChanged_ShowSulfurCheckBox_Event(bool bIsChecked);
    void OnCheckStateChanged_ShowResourcesCheckBox_Event(bool bIsChecked);
    void OnCheckStateChanged_ShowJunkCheckBox_Event(bool bIsChecked);
    void OnClicked_TeleportButton2_Event();
    void OnCheckStateChanged_ShowOilCheckBox_Event(bool bIsChecked);
    void OnCheckStateChanged_ShowHexoliteCheckBox_Event(bool bIsChecked);
    void OnCheckStateChanged_ShowTooltipsCheckBox_Event(bool bIsChecked);
    void LanguageSelector_Event(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void IconScaleSlider_OnValueChanged(float Value);
    void SliderCaptureEnd();
    void OnCheckStateChanged_ShowEffigyOnCompassCheckBox_Event(bool bIsChecked);
    void OnCheckStateChanged_Event(bool bIsChecked);
    void OnCheckStateChanged_Event_0(bool bIsChecked);
    void ModMenuButtonPressed(int32 Index);
    void PostBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void PrintToModLoader(FString Message);
    void OnWidgetDeactivated_MapBase_Event();
    void OnPushed_StackableUI_Event(const FGuid& pushedWidgetID);
    void SetupUIEvents();
    void OnClicked_RemoveOldMarkersButton_Event();
    void OnAddedLocationForCompass_Event(const FGuid& LocationId, class UPalLocationBase* Location);
    void ExecuteUbergraph_ModActor(int32 EntryPoint);
}; // Size: 0x40E

#endif
