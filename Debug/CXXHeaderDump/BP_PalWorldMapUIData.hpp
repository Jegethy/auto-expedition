#ifndef UE4SS_SDK_BP_PalWorldMapUIData_HPP
#define UE4SS_SDK_BP_PalWorldMapUIData_HPP

class UBP_PalWorldMapUIData_C : public UPalWorldMapUIData
{
    float MapMaskPaintSize;                                                           // 0x0130 (size: 0x4)
    class UMaterialInstanceDynamic* RemoveMaskMaterialInstance;                       // 0x0138 (size: 0x8)

    void InitializeRenderTarget(class UObject* WorldContextObject);
    void PaintWorldMap();
    void RemoveMaskByTexture(const class UObject* WorldContextObject, class UTexture2D* RemoveMaskTexture);
    void RemoveMaskByLocation(const class UObject* WorldContextObject, const FVector& WorldLocation);
}; // Size: 0x140

#endif
