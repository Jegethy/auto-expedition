#ifndef UE4SS_SDK_WBP_AssignBoard_PalSlot_HPP
#define UE4SS_SDK_WBP_AssignBoard_PalSlot_HPP

class UWBP_AssignBoard_PalSlot_C : public UWBP_PalCharacterSlotBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0950 (size: 0x8)
    class UImage* Image_Check;                                                        // 0x0958 (size: 0x8)
    class UImage* Image_FocusedFrame;                                                 // 0x0960 (size: 0x8)
    class UImage* Image_PalDying;                                                     // 0x0968 (size: 0x8)
    class UImage* Image_PalWorkShadow;                                                // 0x0970 (size: 0x8)
    class UOverlay* Overlay_FixedAssign;                                              // 0x0978 (size: 0x8)
    class UOverlay* Overlay_GenderIcon;                                               // 0x0980 (size: 0x8)
    class UOverlay* Overlay_PalWork;                                                  // 0x0988 (size: 0x8)
    class UWBP_IconPalWork_C* WBP_IconPalWork;                                        // 0x0990 (size: 0x8)
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;                  // 0x0998 (size: 0x8)
    class UWBP_PalGenderIcon_C* WBP_PalGenderIcon;                                    // 0x09A0 (size: 0x8)
    FGuid ReferemceWorkId;                                                            // 0x09A8 (size: 0x10)

    void OnSetIconEmpty_Binded();
    void Set Suitability(EPalWorkSuitability Suitability);
    void SetReferenceWorkId(FGuid WorkId);
    void OnUpdateWorkId_Binded(FGuid WorkId, bool IsFixedAssign);
    void SetVisibilityFixedAssignFrame(ESlateVisibility NewVisibility);
    void SetVisibilityGenderIcon(ESlateVisibility NewVisibility);
    void OnSetValidSlot_Binded();
    void OnSetEmpty_Binded();
    void OnUpdateHP_Binded(int64 nowHP, int64 nowMaxHP);
    void SetVisibilityCheck(ESlateVisibility NewVisibility);
    void Set Visibility Focus Frame(ESlateVisibility NewVisibility);
    void RegisterCharacterIconWidget(class UWBP_PalCharacterIconBase_C*& IconWidget);
    void OnInitialized();
    void Destruct();
    void ExecuteUbergraph_WBP_AssignBoard_PalSlot(int32 EntryPoint);
}; // Size: 0x9B8

#endif
