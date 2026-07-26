#ifndef UE4SS_SDK_WBP_Map_Body_HPP
#define UE4SS_SDK_WBP_Map_Body_HPP

class UWBP_Map_Body_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UCanvasPanel* Canvas_ForIcon_Mask;                                          // 0x0458 (size: 0x8)
    class UCanvasPanel* Canvas_ForIcon_NoMask;                                        // 0x0460 (size: 0x8)
    class UCanvasPanel* Canvas_ForIcon_Priority;                                      // 0x0468 (size: 0x8)
    class UCanvasPanel* Canvas_MapBody;                                               // 0x0470 (size: 0x8)
    class UImage* Image_DummyCenter;                                                  // 0x0478 (size: 0x8)
    class UImage* Image_MapBody;                                                      // 0x0480 (size: 0x8)
    class UImage* Image_MapMask;                                                      // 0x0488 (size: 0x8)
    class UWBP_Map_Cursor_C* WBP_Map_Cursor;                                          // 0x0490 (size: 0x8)
    class UWBP_MapPoint_Info_C* WBP_MapPoint_Info;                                    // 0x0498 (size: 0x8)
    class UWBP_MapPoint_Info_Respawn_C* WBP_MapPoint_Info_Respawn;                    // 0x04A0 (size: 0x8)
    class UWBP_Map_Body_Cloud_1_C* WBP_SkyIslandCloud;                                // 0x04A8 (size: 0x8)
    double InputAxisX;                                                                // 0x04B0 (size: 0x8)
    double InputAxisY;                                                                // 0x04B8 (size: 0x8)
    double ScrollSpeedMultiplier;                                                     // 0x04C0 (size: 0x8)
    FVector2D targetPosition;                                                         // 0x04C8 (size: 0x10)
    double ScrollSpeedMultiplierForMouseDrag;                                         // 0x04D8 (size: 0x8)
    double ScrollInterpolationMultiplier;                                             // 0x04E0 (size: 0x8)
    double AddAxisXPerTick;                                                           // 0x04E8 (size: 0x8)
    double AddAxisYPerTick;                                                           // 0x04F0 (size: 0x8)
    int32 DefaultMapZoomStep;                                                         // 0x04F8 (size: 0x4)
    double RightAnalogStickValue;                                                     // 0x0500 (size: 0x8)
    double CachedMapScale;                                                            // 0x0508 (size: 0x8)
    bool IsMouseMode;                                                                 // 0x0510 (size: 0x1)
    bool IsMouseButtonDown;                                                           // 0x0511 (size: 0x1)
    class UWBP_WorldMap_IconBase_NoDesign_C* HoveredIcon;                             // 0x0518 (size: 0x8)
    FVector2D MinLandScapePosition;                                                   // 0x0520 (size: 0x10)
    FVector2D MaxLandScapePosition;                                                   // 0x0530 (size: 0x10)
    FWBP_Map_Body_COnHoveredAnyIcon OnHoveredAnyIcon;                                 // 0x0540 (size: 0x10)
    void OnHoveredAnyIcon(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
    FWBP_Map_Body_COnUnhoveredAnyIcon OnUnhoveredAnyIcon;                             // 0x0550 (size: 0x10)
    void OnUnhoveredAnyIcon(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
    FWBP_Map_Body_COnClickedAnyIcon OnClickedAnyIcon;                                 // 0x0560 (size: 0x10)
    void OnClickedAnyIcon(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
    TMap<class UWBP_Map_IconPlayer_C*, class APalPlayerState*> PlayerIconMaps;        // 0x0570 (size: 0x50)
    FTimerHandle PlayerIconUpdateTimer;                                               // 0x05C0 (size: 0x8)
    double CanvasMaskMult;                                                            // 0x05C8 (size: 0x8)
    bool CursorOnMap;                                                                 // 0x05D0 (size: 0x1)
    bool EnableMapInfo;                                                               // 0x05D1 (size: 0x1)
    bool IsInitSelect;                                                                // 0x05D2 (size: 0x1)
    class UMaterialInstanceDynamic* MaskTextureMaterial;                              // 0x05D8 (size: 0x8)
    bool CanFastTravel;                                                               // 0x05E0 (size: 0x1)
    FWBP_Map_Body_COnMapZoomUpdate OnMapZoomUpdate;                                   // 0x05E8 (size: 0x10)
    void OnMapZoomUpdate(double NewZoom);
    double PreviousMapScale;                                                          // 0x05F8 (size: 0x8)
    class UWBP_Map_IconQuest_C* FindedQuestIcon;                                      // 0x0600 (size: 0x8)
    bool bPauseGamepadCursorInterpolation;                                            // 0x0608 (size: 0x1)
    double ScrollInterpolationMultiplier_GamepadIconSnap;                             // 0x0610 (size: 0x8)
    double ZoomFactor;                                                                // 0x0618 (size: 0x8)
    int32 MaxZoomStep;                                                                // 0x0620 (size: 0x4)
    int32 MinZoomStep;                                                                // 0x0624 (size: 0x4)
    int32 CurrentZoomStep;                                                            // 0x0628 (size: 0x4)
    int32 ZoomStepPerMouseWheel;                                                      // 0x062C (size: 0x4)
    double AnalogStickZoomTimer;                                                      // 0x0630 (size: 0x8)
    int32 AnalogStickZoomStepPerSecond;                                               // 0x0638 (size: 0x4)
    FName MapName;                                                                    // 0x063C (size: 0x8)

    void GetWIndowCenterWorldLocation(FVector& WorldLocation);
    void SetEnableSkyIslandCloud(bool bEnableCloud);
    void GetMapScale(double& CurrentScale);
    void AdjustZoomDefault();
    void GetMapCanvasScalingSize(FVector2D& ScalingSize);
    void GetMapCanvasPosition(FVector2D& ScalingPosition);
    void GetCursorWorldLocation(FVector& WorldLocation);
    void AdjustScrollByWorldLocation(FVector WorldLocation);
    void ShouldShowPlayerIcon(class APalPlayerState* PlayerState, bool& bShouldDisplay);
    void AdjustScrollToQuestLocation(FName QuestId);
    void GetCurrentDisplayQuestId(FName& QuestId);
    void Try Append Quest Info(class UWidget* TargetIcon);
    void Update Icon Visibility(class UWBP_WorldMap_IconBase_NoDesign_C* Icon, bool& Visible);
    void GetCursorScrollOffset(FVector2D& Offset);
    void RequestDismantal();
    FEventReply ZoomInternal(FVector2D CursorOffset, int32 AddZoomStep);
    void Update Player Icon();
    void Update Map Icon(class UWidget* Icon);
    void Update Map Icons();
    void AdjustScrollForRespawn();
    void Adjust Scroll Local Player Position();
    void Setup Player Icon(TArray<class UWBP_Map_IconPlayer_C*>& PlayerIcons);
    void Setup();
    void Add Icon By Location(class UWBP_WorldMap_IconBase_NoDesign_C* Widget, FVector WorldLocation, bool IgnoreMask, bool ToPriority, bool& added);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnClickedAnyIcon_Internal(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
    void OnUnhoveredAnyIcon_Internal(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
    void On Hovered Any Icon Internal(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
    void Add Icon(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget, bool ToPriority, bool& added);
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void UpdateCursorTransform();
    void Update Map Transform(double DeltaTime);
    void OnInputMethodChanged(ECommonInputType bNewInputType);
    void Update Map Zoom Gamepad(double DeltaTime, bool& bIsUpdated);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void UpdateScrollOffset(bool bEnableIconSnap, bool& IsUpdated);
    void CalcMapImagePosition(FVector2D AddOffset, FVector2D& Position);
    void ScrollMapImage_Internal(FVector2D ScrollOffset);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void OnLoaded_D35D903A4572C11561B776A766C7733D(class UObject* Loaded);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void Destruct();
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void LoadAndApplyDefaultMaskTexture();
    void ExecuteUbergraph_WBP_Map_Body(int32 EntryPoint);
    void OnMapZoomUpdate__DelegateSignature(double NewZoom);
    void OnClickedAnyIcon__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
    void OnUnhoveredAnyIcon__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
    void OnHoveredAnyIcon__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
}; // Size: 0x644

#endif
