#ifndef UE4SS_SDK_WBP_Map_IconCamp_HPP
#define UE4SS_SDK_WBP_Map_IconCamp_HPP

class UWBP_Map_IconCamp_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0538 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_64;                                   // 0x0540 (size: 0x8)
    class UCanvasPanel* Canvas_PvPItemCount;                                          // 0x0548 (size: 0x8)
    class UImage* Icon;                                                               // 0x0550 (size: 0x8)
    class UImage* Image_105;                                                          // 0x0558 (size: 0x8)
    class UImage* Image_WarningEff;                                                   // 0x0560 (size: 0x8)
    class UImage* Image_WarningIcon;                                                  // 0x0568 (size: 0x8)
    class UImage* Image_WarningIcon_1;                                                // 0x0570 (size: 0x8)
    class UOverlay* Overlay_Warning;                                                  // 0x0578 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x0580 (size: 0x8)
    bool IsEnabled;                                                                   // 0x0588 (size: 0x1)
    bool bIsSameGuild;                                                                // 0x0589 (size: 0x1)

    void GetBaseCampId(FGuid& BaseCampId);
    void SetupInvaderEvent();
    void UpdatePvpItemNum();
    void SetSameGuild(bool bSameGuild);
    void Setup_Internal(class UPalLocationPoint* LocationPoint);
    void GetInvisibleButton(class UWidget*& Button);
    void SetEnable(bool Enable);
    void BndEvt__WBP_Map_IconCamp_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconCamp_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconCamp_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Map_IconCamp(int32 EntryPoint);
}; // Size: 0x58A

#endif
