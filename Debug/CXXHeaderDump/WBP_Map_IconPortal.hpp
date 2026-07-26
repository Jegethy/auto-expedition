#ifndef UE4SS_SDK_WBP_Map_IconPortal_HPP
#define UE4SS_SDK_WBP_Map_IconPortal_HPP

class UWBP_Map_IconPortal_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    class UImage* Image_Direction;                                                    // 0x0538 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0540 (size: 0x8)
    class UImage* Image_Scroll;                                                       // 0x0548 (size: 0x8)
    class UOverlay* Overlay_Direction;                                                // 0x0550 (size: 0x8)

    void SetupForceVisibility(bool& bChangedVisibility);
    void Setup_Internal(class UPalLocationPoint* LocationPoint);
}; // Size: 0x558

#endif
