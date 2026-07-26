#ifndef UE4SS_SDK_WBP_WorldMap_IconBase_NoDesign_HPP
#define UE4SS_SDK_WBP_WorldMap_IconBase_NoDesign_HPP

class UWBP_WorldMap_IconBase_NoDesign_C : public UPalUIWorldMapIcon
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D0 (size: 0x8)
    FWBP_WorldMap_IconBase_NoDesign_COnHovered OnHovered;                             // 0x04D8 (size: 0x10)
    void OnHovered(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
    FWBP_WorldMap_IconBase_NoDesign_COnUnhovered OnUnhovered;                         // 0x04E8 (size: 0x10)
    void OnUnhovered(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
    FWBP_WorldMap_IconBase_NoDesign_COnClicked OnClicked;                             // 0x04F8 (size: 0x10)
    void OnClicked(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
    FGuid LocationId;                                                                 // 0x0508 (size: 0x10)
    bool IsCallInternalClickEvent;                                                    // 0x0518 (size: 0x1)
    bool IgnoreMask;                                                                  // 0x0519 (size: 0x1)
    bool bEnableHideOnZoom;                                                           // 0x051A (size: 0x1)
    EPalLocationType LocationType;                                                    // 0x051B (size: 0x1)
    FName ZoomHideFlagName;                                                           // 0x051C (size: 0x8)
    FName FilteredOutHideFlagName;                                                    // 0x0524 (size: 0x8)
    FName GeneralHideFlagName;                                                        // 0x052C (size: 0x8)

    void SetupForceVisibility(bool& bChangedVisibility);
    void GetLocationType(EPalLocationType& Type);
    void SetFilterState(TSet<EPalLocationType> FilterSet);
    void UpdateHiddenOnZoom(double NewZoom);
    void GetInvisibleButton(class UWidget*& Button);
    void GetLocationRotation(FQuat& LocationRotation);
    void SetGeneralHiding(bool Hiding);
    void IsIgnoreMask(bool& IsIgnore);
    void SetIgnoreMask(bool IsIgnore);
    void SetEnable(bool Enable);
    void OnClicked_Internal();
    void ClickEvent();
    void Setup(class UPalLocationPoint* LocationPoint, FGuid LocationId);
    void GetLocationPosition(FVector& LocationPosition);
    void Setup_Internal(class UPalLocationPoint* LocationPoint);
    void GetText(FText& Text);
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
    void OnUnhovered__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
    void OnHovered__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
}; // Size: 0x534

#endif
