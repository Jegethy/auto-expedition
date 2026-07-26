#ifndef UE4SS_SDK_WBP_PalLoupe_HPP
#define UE4SS_SDK_WBP_PalLoupe_HPP

class UWBP_PalLoupe_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0658 (size: 0x8)
    class UImage* Loupe_Angle;                                                        // 0x0660 (size: 0x8)
    class UImage* Loupe_Circle;                                                       // 0x0668 (size: 0x8)
    class UImage* Pal_base;                                                           // 0x0670 (size: 0x8)
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot;                  // 0x0678 (size: 0x8)
    class UWBP_PalLoupe_GaugeHP_C* WBP_PalLoupe_GaugeHP;                              // 0x0680 (size: 0x8)
    class UWBP_PalLoupe_GaugeHunger_C* WBP_PalLoupe_GaugeHunger;                      // 0x0688 (size: 0x8)
    class UPalIndividualCharacterHandle* targetHandle;                                // 0x0690 (size: 0x8)

    void UpdateHunger(double nowHunger, double nowMaxHunger);
    void UpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void Clear();
    void SetTargetPal(class UPalIndividualCharacterSlot* TargetSlot);
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalLoupe(int32 EntryPoint);
}; // Size: 0x698

#endif
