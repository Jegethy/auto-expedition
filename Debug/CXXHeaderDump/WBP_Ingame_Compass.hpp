#ifndef UE4SS_SDK_WBP_Ingame_Compass_HPP
#define UE4SS_SDK_WBP_Ingame_Compass_HPP

class UWBP_Ingame_Compass_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UImage* Center;                                                             // 0x0458 (size: 0x8)
    class UImage* CompassBase;                                                        // 0x0460 (size: 0x8)
    class UCanvasPanel* IconCanvas;                                                   // 0x0468 (size: 0x8)
    class UMaterialInstanceDynamic* CompassMaterial;                                  // 0x0470 (size: 0x8)
    TMap<class FGuid, class UWBP_CompassIconBase_C*> CreatedIconMap;                  // 0x0478 (size: 0x50)
    TArray<FGuid> VisibleIconIds;                                                     // 0x04C8 (size: 0x10)
    TMap<class EPalLocationType, class TSubclassOf<UWBP_CompassIconBase_C>> IconWBPMap; // 0x04D8 (size: 0x50)
    TSubclassOf<class UWBP_CompassIconBase_C> wbpIconBaseClass;                       // 0x0528 (size: 0x8)
    TArray<class UWBP_IngameCompass_DeathMark_C*> DeathMarks;                         // 0x0530 (size: 0x10)
    TMap<class UPalLocationPoint*, class FGuid> DeathMarkMap;                         // 0x0540 (size: 0x50)
    TMap<class FGuid, class UWBP_IngameCompass_CustomMarker_C*> CustomMarkerMap;      // 0x0590 (size: 0x50)
    TArray<FGuid> VisibleMarkerIds;                                                   // 0x05E0 (size: 0x10)
    double DeathMarkLength;                                                           // 0x05F0 (size: 0x8)
    class UPalGroupGuildBase* LastBelongGuild;                                        // 0x05F8 (size: 0x8)
    TMap<class FGuid, class UWBP_IngameCompass_CustomMarker_C*> GuildMarkerMap;       // 0x0600 (size: 0x50)
    TArray<FGuid> VisibleGuildMarkerIds;                                              // 0x0650 (size: 0x10)
    double MarkerDistance;                                                            // 0x0660 (size: 0x8)
    FTimerHandle GuildChangeTimer;                                                    // 0x0668 (size: 0x8)
    FGuid NewGuildId;                                                                 // 0x0670 (size: 0x10)
    FTimerHandle UpdateVisibleTimer;                                                  // 0x0680 (size: 0x8)
    FTransform CachedCameraTransform;                                                 // 0x0690 (size: 0x60)

    void CREATEDELEGATE_PROXYFUNCTION_6(class UPalGroupGuildBase* Guild, const FGuid& MarkerID);
    void CREATEDELEGATE_PROXYFUNCTION_5(class UPalGroupGuildBase* Guild, const FGuid& MarkerID, const FPalGuildMarkerData& MarkerData);
    void CREATEDELEGATE_PROXYFUNCTION_4(class UPalGroupGuildBase* Guild, const FGuid& MarkerID, const FPalGuildMarkerData& MarkerData);
    void CREATEDELEGATE_PROXYFUNCTION_3(class UPalGroupGuildBase* Guild, const FGuid& MarkerID);
    void CREATEDELEGATE_PROXYFUNCTION_2(class UPalGroupGuildBase* Guild, const FGuid& MarkerID, const FPalGuildMarkerData& MarkerData);
    void CREATEDELEGATE_PROXYFUNCTION_1(class UPalGroupGuildBase* Guild, const FGuid& MarkerID, const FPalGuildMarkerData& MarkerData);
    void CREATEDELEGATE_PROXYFUNCTION_0(const FGuid& MarkerID);
    void WaitGuildChange_Timer();
    void OnGuildChanged(const FGuid& NewGroupId);
    void OnRemoveGuildMarker(class UPalGroupGuildBase* Guild, FGuid MarkerID);
    void OnChangeGuildMarker(class UPalGroupGuildBase* Guild, FGuid MarkerID, FPalGuildMarkerData MarkerData);
    void OnAddGuildMarker(class UPalGroupGuildBase* Guild, FGuid MarkerID, FPalGuildMarkerData MarkerData);
    void Add Custom Marker(const FPalLocationUIData& PalLocationUIData, const FPalCustomMarkerSaveData& PalCustomMarkerSaveData, FGuid LocationId);
    void OnCustomMarkerChanged(FGuid MarkerID);
    void SetupGuildMarker();
    void Setup Custom Marker();
    void GetVisibleIcons();
    void Refresh Death Mark(TMap<class FGuid, class UPalLocationBase*> LocationMap);
    void Setup Created Icon Widget(class UWBP_CompassIconBase_C* createdWidget, FGuid LocationId, FPalLocationUIData LocationUIData);
    void Update Icon();
    void OnRemovedLocation(const FGuid& LocationId, class UPalLocationBase* Location);
    void On Added Location(const FGuid& LocationId, class UPalLocationBase* Location);
    void Update Rotation From Pawn(class APawn* targetPawn);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void Setup();
    void Destruct();
    void ExecuteUbergraph_WBP_Ingame_Compass(int32 EntryPoint);
}; // Size: 0x6F0

#endif
