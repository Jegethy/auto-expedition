#ifndef UE4SS_SDK_WBP_WorldHUD_MapObjectWorkAssignStatus_HPP
#define UE4SS_SDK_WBP_WorldHUD_MapObjectWorkAssignStatus_HPP

class UWBP_WorldHUD_MapObjectWorkAssignStatus_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWBP_PalWork_AccessPoint_C* WBP_PalWork_AccessPoint;                        // 0x0458 (size: 0x8)
    class UPalWorkSlotHUDInfoUIModel* UIModel;                                        // 0x0460 (size: 0x8)

    void SetupUI();
    void ReadyUIModel();
    void OnSetup();
    void ExecuteUbergraph_WBP_WorldHUD_MapObjectWorkAssignStatus(int32 EntryPoint);
}; // Size: 0x468

#endif
