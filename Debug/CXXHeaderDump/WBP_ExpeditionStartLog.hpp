#ifndef UE4SS_SDK_WBP_ExpeditionStartLog_HPP
#define UE4SS_SDK_WBP_ExpeditionStartLog_HPP

class UWBP_ExpeditionStartLog_C : public UPalExpeditionStartLogWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0470 (size: 0x8)
    class UWidgetAnimation* Blink;                                                    // 0x0478 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0480 (size: 0x8)
    class UImage* Image_Effect;                                                       // 0x0488 (size: 0x8)
    class UImage* Image_Effect_1;                                                     // 0x0490 (size: 0x8)
    class UWBP_ItemGet_C* WBP_ItemGet;                                                // 0x0498 (size: 0x8)
    double ElapsedTimeBySpawn;                                                        // 0x04A0 (size: 0x8)
    double SelfDestroyTime;                                                           // 0x04A8 (size: 0x8)
    int32 State;                                                                      // 0x04B0 (size: 0x4)
    class UMaterialInstanceDynamic* effectMat;                                        // 0x04B8 (size: 0x8)
    double totalTime;                                                                 // 0x04C0 (size: 0x8)
    bool isReverse;                                                                   // 0x04C8 (size: 0x1)

    void OverrideBgColor(EPalLogContentToneType ToneType);
    void OnLoaded_3A37B9DD49AD984D46FE91B38B42A88A(class UObject* Loaded);
    void OnFinishOpen();
    void OnFinishClose();
    void SetLogText(const FText& InText);
    void RequestInAnime();
    void RequestOutAnime();
    void RequestLoadIconTexture(const TSoftObjectPtr<UTexture2D>& softTexturePtr);
    void OnInitialized();
    void SetAdditionalData(const FPalLogAdditionalData& inAdditionalData);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_ExpeditionStartLog(int32 EntryPoint);
}; // Size: 0x4C9

#endif
