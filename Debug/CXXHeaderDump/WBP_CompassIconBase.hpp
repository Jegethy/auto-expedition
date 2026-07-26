#ifndef UE4SS_SDK_WBP_CompassIconBase_HPP
#define UE4SS_SDK_WBP_CompassIconBase_HPP

class UWBP_CompassIconBase_C : public UPalUICompassIconBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    FVector Target Location;                                                          // 0x0458 (size: 0x18)
    FGuid MyLocationID;                                                               // 0x0470 (size: 0x10)
    float HiddenDistance;                                                             // 0x0480 (size: 0x4)
    double CurrentDistance;                                                           // 0x0488 (size: 0x8)
    bool bDistanceXY;                                                                 // 0x0490 (size: 0x1)

    void ShouldForceHide(bool& bForceHide);
    void GetLocation(class UPalLocationBase*& Location);
    void PostSetup();
    void UpdateDistance();
    void SetupTexture(TSoftObjectPtr<UTexture2D> SoftTexture);
    void SetDistanceText(double Length);
    void UpdateVisibility(bool& InDistance);
    void SetLocationId(FGuid LocationId);
    void SetTargetLocation(FVector TargetLocation, bool bInDistanceXY);
    void Get Offset Value(double& offSetValue);
    void SetDisplayDistance(double Length);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_CompassIconBase(int32 EntryPoint);
}; // Size: 0x491

#endif
