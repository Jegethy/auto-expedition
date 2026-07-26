#ifndef UE4SS_SDK_WBP_CompassIcon_ForMapObject_HPP
#define UE4SS_SDK_WBP_CompassIcon_ForMapObject_HPP

class UWBP_CompassIcon_ForMapObject_C : public UWBP_IngameCompass_arrow_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B0 (size: 0x8)

    void SetupTexture(TSoftObjectPtr<UTexture2D> SoftTexture);
    void OnInitialized();
    void ExecuteUbergraph_WBP_CompassIcon_ForMapObject(int32 EntryPoint);
}; // Size: 0x4B8

#endif
