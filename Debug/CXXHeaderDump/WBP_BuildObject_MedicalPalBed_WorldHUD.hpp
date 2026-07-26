#ifndef UE4SS_SDK_WBP_BuildObject_MedicalPalBed_WorldHUD_HPP
#define UE4SS_SDK_WBP_BuildObject_MedicalPalBed_WorldHUD_HPP

class UWBP_BuildObject_MedicalPalBed_WorldHUD_C : public UPalUserWidgetWorldHUD
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWBP_PalRevivalTimer_C* WBP_PalRevivalTimer;                                // 0x0458 (size: 0x8)
    class UPalUIMapObjectMedicalPalBedModel* UIModelCached;                           // 0x0460 (size: 0x8)

    void TickForDisplay();
    void ShouldDisplay(bool& Return Value);
    void ReflectProgressRate();
    void ReflectResurrectAbility();
    void ReflectRemainingTime();
    void GetUIModel(class UPalUIMapObjectMedicalPalBedModel*& UIModel);
    void Setup();
    void OnSetup();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_BuildObject_MedicalPalBed_WorldHUD(int32 EntryPoint);
}; // Size: 0x468

#endif
