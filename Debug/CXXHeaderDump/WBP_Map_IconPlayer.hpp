#ifndef UE4SS_SDK_WBP_Map_IconPlayer_HPP
#define UE4SS_SDK_WBP_Map_IconPlayer_HPP

class UWBP_Map_IconPlayer_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0538 (size: 0x8)
    class UImage* Arrow;                                                              // 0x0540 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_64;                                   // 0x0548 (size: 0x8)
    class UCanvasPanel* Canvas_PvPItemCount;                                          // 0x0550 (size: 0x8)
    class UImage* Image_105;                                                          // 0x0558 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PlayerName;                                        // 0x0560 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x0568 (size: 0x8)
    FPalPlayerInfoForMap Cached Map Info;                                             // 0x0570 (size: 0x80)
    bool Is Local;                                                                    // 0x05F0 (size: 0x1)

    void UpdatePvPItemCount();
    void SetupForceVisibility(bool& bChangedVisibility);
    void UpdateMapInfo(FPalPlayerInfoForMap mapInfo);
    void GetLocationPosition(FVector& LocationPosition);
    void SetupLocalPlayer(bool IsLocal);
    void SetPlayerStateMapInfo(FPalPlayerInfoForMap mapInfo, bool bIsLocalPlayer);
    void BndEvt__WBP_Map_IconPlayer_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconPlayer_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Map_IconPlayer(int32 EntryPoint);
}; // Size: 0x5F1

#endif
