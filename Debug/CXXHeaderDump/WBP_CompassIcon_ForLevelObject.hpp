#ifndef UE4SS_SDK_WBP_CompassIcon_ForLevelObject_HPP
#define UE4SS_SDK_WBP_CompassIcon_ForLevelObject_HPP

class UWBP_CompassIcon_ForLevelObject_C : public UWBP_IngameCompass_arrow_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B0 (size: 0x8)

    void SetupTexture(TSoftObjectPtr<UTexture2D> SoftTexture);
    void OnInitialized();
    void ExecuteUbergraph_WBP_CompassIcon_ForLevelObject(int32 EntryPoint);
}; // Size: 0x4B8

#endif
