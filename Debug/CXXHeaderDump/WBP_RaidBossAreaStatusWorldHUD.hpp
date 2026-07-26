#ifndef UE4SS_SDK_WBP_RaidBossAreaStatusWorldHUD_HPP
#define UE4SS_SDK_WBP_RaidBossAreaStatusWorldHUD_HPP

class UWBP_RaidBossAreaStatusWorldHUD_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWBP_Altar_Info_C* WBP_Altar_Info;                                          // 0x0458 (size: 0x8)
    class UPalUIMapObjectRaidBossAreaStatusModel* Cached_UIModel;                     // 0x0460 (size: 0x8)

    void ReflectCurrentRemaingTime();
    void ReflectCurrentPhase(EPalRaidBossAreaPhase InPhase);
    void OnUpdatePhase(class UPalUIMapObjectRaidBossAreaStatusModel* UIModel);
    void OnUpdateRaidBossStaticItemId(class UPalUIMapObjectRaidBossAreaStatusModel* UIModel);
    class UPalUIMapObjectRaidBossAreaStatusModel* GetUIModel();
    void Setup();
    void OnSetup();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_RaidBossAreaStatusWorldHUD(int32 EntryPoint);
}; // Size: 0x468

#endif
