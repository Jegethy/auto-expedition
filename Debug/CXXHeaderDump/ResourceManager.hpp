#ifndef UE4SS_SDK_ResourceManager_HPP
#define UE4SS_SDK_ResourceManager_HPP

class AResourceManager_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0290 (size: 0x8)
    TArray<FVector> CoalLocations;                                                    // 0x0298 (size: 0x10)
    TArray<FVector> CopperLocations;                                                  // 0x02A8 (size: 0x10)
    TArray<FVector> QuartzLocations;                                                  // 0x02B8 (size: 0x10)
    TArray<FVector> SulfurLocations;                                                  // 0x02C8 (size: 0x10)
    TArray<FVector> HexoliteLocations;                                                // 0x02D8 (size: 0x10)
    TArray<FVector> OilLocations;                                                     // 0x02E8 (size: 0x10)
    TArray<FVector2D> TeleportCoordinates;                                            // 0x02F8 (size: 0x10)
    int32 TeleportIndex;                                                              // 0x0308 (size: 0x4)
    TArray<FVector> FoundHexoliteLocations;                                           // 0x0310 (size: 0x10)
    TArray<FVector> FoundOilLocations;                                                // 0x0320 (size: 0x10)
    bool SearchStarted;                                                               // 0x0330 (size: 0x1)
    class UTimer_C* SearchForActorsTimer;                                             // 0x0338 (size: 0x8)
    class UTimer_C* TeleportTimer;                                                    // 0x0340 (size: 0x8)
    bool ShowInaccessibleResourcesSetting;                                            // 0x0348 (size: 0x1)

    void SetShowInaccessibleResourcesSetting(bool Show);
    void SetupSpecialResources(bool Show);
    void SearchForResources(double DeltaSeconds, bool& ResourceFoundThisTick, bool& SearchCompleteThisTick);
    void PrepareAndStartSearch();
    void DoTrackOil(bool& OilAdded);
    void DoTrackHexolite(bool& HexoliteAdded);
    void UserConstructionScript();
}; // Size: 0x349

#endif
