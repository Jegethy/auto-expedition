#ifndef UE4SS_SDK_WBP_BuildObjectIndicator_PowerSufficiency_HPP
#define UE4SS_SDK_WBP_BuildObjectIndicator_PowerSufficiency_HPP

class UWBP_BuildObjectIndicator_PowerSufficiency_C : public UPalUserWidgetWorldHUD
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UImage* Base;                                                               // 0x0458 (size: 0x8)
    class UCanvasPanel* ElectricPower;                                                // 0x0460 (size: 0x8)
    class UImage* Line;                                                               // 0x0468 (size: 0x8)
    class UCanvasPanel* RootCanvas;                                                   // 0x0470 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Electric;                                          // 0x0478 (size: 0x8)
    class UPalHUDDispatchParameter_MapObjectEnergyModule* Parameter;                  // 0x0480 (size: 0x8)
    FDataTableRowHandle PowerOnlineMSGID;                                             // 0x0488 (size: 0x10)
    FDataTableRowHandle PowerOfflineMSGID;                                            // 0x0498 (size: 0x10)

    void OnUpdateEnergyModuleState(class UPalMapObjectEnergyModule* Module);
    void SetupUI();
    void OnSetup();
    void ExecuteUbergraph_WBP_BuildObjectIndicator_PowerSufficiency(int32 EntryPoint);
}; // Size: 0x4A8

#endif
