#ifndef UE4SS_SDK_WBP_PalHUD_InGame_GeneralDispatchEventReciever_HPP
#define UE4SS_SDK_WBP_PalHUD_InGame_GeneralDispatchEventReciever_HPP

class UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C : public UPalUIInGameGeneralDispatchEventReciever
{
    class UWidgetAnimation* Default_In;                                               // 0x0450 (size: 0x8)
    FGuid WidgetId_BuildingUI;                                                        // 0x0458 (size: 0x10)
    FGuid WidgetId_DismantlingUI;                                                     // 0x0468 (size: 0x10)
    FGuid WidgetId_PaintingUI;                                                        // 0x0478 (size: 0x10)

    void AddCameraOffset();
    void UnregisterBuilderModeCameraOffset();
    void ReturnToBuildObjectList();
    void OpenBuildObjectListUI();
    void ClosePaintingUI();
    void OpenPaintingUI();
    void OpenDismantlingUI_Impl();
    void OpenDismantlingUIFromRadialMenu(const int32 LastSelectedIndex);
    void OpenBuildingUI_Impl(FName BuildObjectId);
    void OpenBuildingUIFromRadialMenu(const FName BuildObjectId);
    void SetDisablePlayerInputAction(bool Disable);
    void CloseDismantlingUI();
    void OpenDismantlingUI();
    void CloseBuildingUI();
    void OpenBuildingUI(const FName BuildObjectId);
}; // Size: 0x488

#endif
