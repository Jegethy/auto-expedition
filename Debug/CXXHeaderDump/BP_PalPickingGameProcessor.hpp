#ifndef UE4SS_SDK_BP_PalPickingGameProcessor_HPP
#define UE4SS_SDK_BP_PalPickingGameProcessor_HPP

class UBP_PalPickingGameProcessor_C : public UPalPickingGameProcessor
{
    TMap<class EPalPickingGameDifficultyType, class FDataTableRowHandle> SettingDataRowNameMap; // 0x0110 (size: 0x50)

    void GetSettingDataByDifficultyType(EPalPickingGameDifficultyType DifficultyType, FPalPickingGameSettingData& OutSettingData);
}; // Size: 0x160

#endif
