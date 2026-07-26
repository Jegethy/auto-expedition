#ifndef UE4SS_SDK_WBP_WorkerRadialMenu_Overlay_HPP
#define UE4SS_SDK_WBP_WorkerRadialMenu_Overlay_HPP

class UWBP_WorkerRadialMenu_Overlay_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWBP_WorkerRadialMenu_C* WBP_WorkerRadialMenu;                              // 0x0480 (size: 0x8)
    FName disableCrouchFlagName;                                                      // 0x0488 (size: 0x8)
    FPalDataTableRowName_UIInputAction CloseShortcutINputAction;                      // 0x0490 (size: 0x8)
    FPalDataTableRowName_UIInputAction DecideMenuAction;                              // 0x0498 (size: 0x8)

    void Construct();
    void OnClosed();
    void OnInitialized();
    void OnSelectedEvent(EPalWorkerRadialMenuResult Result);
    void OnAnyUIPushed(const FGuid& pushedWidgetID);
    void Destruct();
    void CancelEvent();
    void OnSetup();
    void ExecuteUbergraph_WBP_WorkerRadialMenu_Overlay(int32 EntryPoint);
}; // Size: 0x4A0

#endif
