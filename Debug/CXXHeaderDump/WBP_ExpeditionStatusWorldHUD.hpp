#ifndef UE4SS_SDK_WBP_ExpeditionStatusWorldHUD_HPP
#define UE4SS_SDK_WBP_ExpeditionStatusWorldHUD_HPP

class UWBP_ExpeditionStatusWorldHUD_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWBP_PalWork_Expedition_C* WBP_PalWork_Expedition;                          // 0x0458 (size: 0x8)
    class UPalUIMapObjectCharacterTeamMissionModel* UIModel;                          // 0x0460 (size: 0x8)
    class UPalMapObjectConcreteModelBase* ConcreteModel;                              // 0x0468 (size: 0x8)
    FTimerHandle LocationCheckTimerHandle;                                            // 0x0470 (size: 0x8)
    bool bAlreadySetup;                                                               // 0x0478 (size: 0x1)

    void OnTimer_LocationCheck();
    void OnChangedMissionState(const EPalMapObjectCharacterTeamMissionState LastState, const EPalMapObjectCharacterTeamMissionState CurrentState);
    void Setup();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnSetup();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_ExpeditionStatusWorldHUD(int32 EntryPoint);
}; // Size: 0x479

#endif
