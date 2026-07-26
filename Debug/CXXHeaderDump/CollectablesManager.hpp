#ifndef UE4SS_SDK_CollectablesManager_HPP
#define UE4SS_SDK_CollectablesManager_HPP

class ACollectablesManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    TArray<FRelicStruct> Relics;                                                      // 0x02A0 (size: 0x10)
    TArray<FNoteStruct> Notes;                                                        // 0x02B0 (size: 0x10)
    TArray<FChestStruct> Chests;                                                      // 0x02C0 (size: 0x10)
    TArray<FEggStruct> Eggs;                                                          // 0x02D0 (size: 0x10)
    TArray<FDungeonStruct> Dungeons;                                                  // 0x02E0 (size: 0x10)
    TArray<FNPCCampStruct> NPCCamps;                                                  // 0x02F0 (size: 0x10)
    TArray<FOutpostStruct> Outposts;                                                  // 0x0300 (size: 0x10)
    TArray<FFruitTreeStruct> FruitTrees;                                              // 0x0310 (size: 0x10)
    TArray<FJunkStruct> Junk;                                                         // 0x0320 (size: 0x10)
    TArray<FCoalStruct> Coal;                                                         // 0x0330 (size: 0x10)
    TArray<FCopperStruct> Copper;                                                     // 0x0340 (size: 0x10)
    TArray<FQuartzStruct> Quartz;                                                     // 0x0350 (size: 0x10)
    TArray<FSulfurStruct> Sulfur;                                                     // 0x0360 (size: 0x10)
    TArray<FHexoliteStruct> hexolite;                                                 // 0x0370 (size: 0x10)
    TArray<FOilStruct> Oil;                                                           // 0x0380 (size: 0x10)
    int32 NumTotalRelics;                                                             // 0x0390 (size: 0x4)
    int32 NumObtainedRelics;                                                          // 0x0394 (size: 0x4)
    int32 NumTotalNotes;                                                              // 0x0398 (size: 0x4)
    int32 NumObtainedNotes;                                                           // 0x039C (size: 0x4)
    FCollectablesStateStruct CollectablesState;                                       // 0x03A0 (size: 0xF)
    class AIconManager_C* IconManager;                                                // 0x03B0 (size: 0x8)
    class AResourceManager_C* ResourceManager;                                        // 0x03B8 (size: 0x8)
    bool HasCollectedHiddenRedlic1;                                                   // 0x03C0 (size: 0x1)
    bool HasCollectedHiddenRedlic2;                                                   // 0x03C1 (size: 0x1)
    bool IsLimitedToNearbyResources;                                                  // 0x03C2 (size: 0x1)
    bool ShowInaccessibleRelicSetting;                                                // 0x03C3 (size: 0x1)
    bool ShouldHideClusteredIconsSetting;                                             // 0x03C4 (size: 0x1)
    bool HasInitialized;                                                              // 0x03C5 (size: 0x1)
    TArray<FPalPlayerRecordDataRepInfoThreadSafe_BoolVal> AllRelicObtainFlags;        // 0x03C8 (size: 0x10)
    class UEffigyTooltipWidget_C* ToolTipWidget;                                      // 0x03D8 (size: 0x8)
    TArray<class UImage*> RelicIcons;                                                 // 0x03E0 (size: 0x10)
    double ObservedScaleMin;                                                          // 0x03F0 (size: 0x8)
    double ObservedScaleMax;                                                          // 0x03F8 (size: 0x8)
    double SavedRelicScale;                                                           // 0x0400 (size: 0x8)
    double UserScaleFactor;                                                           // 0x0408 (size: 0x8)
    TArray<FRuinStruct> Ruins;                                                        // 0x0410 (size: 0x10)
    FVector2D TargetMinLandScapePosition;                                             // 0x0420 (size: 0x10)
    FVector2D TargetMaxLandScapePosition;                                             // 0x0430 (size: 0x10)
    class UCanvasPanel* TargetCanvasForIconNoMask;                                    // 0x0440 (size: 0x8)
    class UCanvasPanel* TargetCanvasForIconMask;                                      // 0x0448 (size: 0x8)
    FVector2D TargetExcludeMinLandScapePosition;                                      // 0x0450 (size: 0x10)
    FVector2D TargetExcludeMaxLandScapePosition;                                      // 0x0460 (size: 0x10)
    FVector TargetLocationAddOffset;                                                  // 0x0470 (size: 0x18)

    void ProjectToMap(FVector WorldLocation, class UWidget* Widget);
    void CalculatePositionInRange(FVector ObjectPosition, FVector& World position, bool& ShouldRender);
    bool ShouldAddRuin(bool IncludeSolved, bool IsSolved, bool ShouldBeHidden);
    void Apply Relic Zoom Scale(double MapScale);
    void SetTooltipsEnabled(bool bEnabled);
    void GetAllRelicObtainFlags();
    void RemoveOldMarkers();
    void AreOldMarkersPresent(bool& AreOldMarkersPresent);
    void ShouldAddRelic(bool IncludeObtainedRelics, bool IsObtained, bool ShouldBeHidden, bool& ShouldBeAdded);
    void IsNewCollected(bool& IsNewCollected);
    void RemoveCollectables(FCollectablesActionStruct CollectablesToRemove);
    void AddCollectables(class UWBP_Map_Body_C* MapBody, bool IncludeObtainedRelics, bool IncludeObtainedNotes, bool ShowResources, FCollectablesActionStruct CollectablesToAdd, bool IncludeSolvedRuins);
    void InitializeCollectables(FCollectablesActionStruct InitializeCollectables);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_CollectablesManager(int32 EntryPoint);
}; // Size: 0x488

#endif
