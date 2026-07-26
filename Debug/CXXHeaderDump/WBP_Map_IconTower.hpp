#ifndef UE4SS_SDK_WBP_Map_IconTower_HPP
#define UE4SS_SDK_WBP_Map_IconTower_HPP

class UWBP_Map_IconTower_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0538 (size: 0x8)
    class UImage* Icon;                                                               // 0x0540 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x0548 (size: 0x8)
    class UWBP_Map_IconFTTower_C* FTTower Icon;                                       // 0x0550 (size: 0x8)
    class APalBossTower* BossTower;                                                   // 0x0558 (size: 0x8)

    void UpdateIcon();
    bool GetLocationOnLandscape(FVector& OutLocation);
    void GetInvisibleButton(class UWidget*& Button);
    void BindWithFTTower(class UWBP_Map_IconFTTower_C* FTTowerIcon);
    void SetEnable(bool Enable);
    void BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Map_IconTower(int32 EntryPoint);
}; // Size: 0x560

#endif
