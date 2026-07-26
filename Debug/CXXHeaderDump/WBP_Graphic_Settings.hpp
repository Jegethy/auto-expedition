#ifndef UE4SS_SDK_WBP_Graphic_Settings_HPP
#define UE4SS_SDK_WBP_Graphic_Settings_HPP

class UWBP_Graphic_Settings_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UOverlay* CautionText;                                                      // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* Text_UpscalingName;                                     // 0x0288 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_AA;                   // 0x0290 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Arachnophobia;        // 0x0298 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_AutoContrast;         // 0x02A0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Brightness;           // 0x02A8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_CameraRecoil;         // 0x02B0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_CameraShake;          // 0x02B8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_DrawDistance;         // 0x02C0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_DrawDIstance_MapObject; // 0x02C8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_DrawGrass;            // 0x02D0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_EffectQuality;        // 0x02D8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_FOV;                  // 0x02E0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_FOV_Type;             // 0x02E8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_FrameGeneration;      // 0x02F0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_LODBias;              // 0x02F8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_MaxFPS;               // 0x0300 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_MotionBlur;           // 0x0308 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_NVIDIAReflex;         // 0x0310 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_PalAura;              // 0x0318 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Preset;               // 0x0320 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Resolution;           // 0x0328 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_RideCameraLength;     // 0x0330 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Screen;               // 0x0338 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Shadow;               // 0x0340 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_TextureQuality;       // 0x0348 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_UpscalingMethod;      // 0x0350 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_VSync;                // 0x0358 (size: 0x8)
    FPalOptionGraphicsSettings Graphics Settings Cache;                               // 0x0360 (size: 0x68)
    FPalOptionLocalStaticSettings LocalStaticSettingCache;                            // 0x03C8 (size: 0xA8)
    TArray<FDataTableRowHandle> ScreenSettingMsgIds;                                  // 0x0470 (size: 0x10)
    TArray<FDataTableRowHandle> LevelMsgIds;                                          // 0x0480 (size: 0x10)
    TArray<FDataTableRowHandle> LevelMsgIds_Graphic;                                  // 0x0490 (size: 0x10)
    bool SomethingChanged;                                                            // 0x04A0 (size: 0x1)
    TMap<int32, TEnumAsByte<EAntiAliasingMethod>> AAMap;                              // 0x04A8 (size: 0x50)
    TArray<FString> AASettings;                                                       // 0x04F8 (size: 0x10)
    TMap<int32, FString> FPSSelection;                                                // 0x0508 (size: 0x50)
    FDataTableRowHandle NoLimitlMsgId;                                                // 0x0558 (size: 0x10)
    TArray<FIntPoint> SupportResolutions;                                             // 0x0568 (size: 0x10)
    TArray<FDataTableRowHandle> UpscalingLevelMsgIds_DLSS;                            // 0x0578 (size: 0x10)
    TArray<FDataTableRowHandle> UpscalingLevelMsgIds_MetalFX;                         // 0x0588 (size: 0x10)
    TMap<int32, EPalOptionUpscalingLevel> UpscalingMap;                               // 0x0598 (size: 0x50)
    TMap<int32, EPalOptionMapObjectDrawDistanceType> MapObjectDrawDistanceMap;        // 0x05E8 (size: 0x50)
    TArray<FString> DrawDistanceStrings;                                              // 0x0638 (size: 0x10)
    TArray<FDataTableRowHandle> NVIDIAReflexMsgIdArray;                               // 0x0648 (size: 0x10)
    TMap<EPalReflexMode, int32> NVIDIAReflexTypeIndexMap;                             // 0x0658 (size: 0x50)
    TArray<FString> FrameGenerationStrings;                                           // 0x06A8 (size: 0x10)

    void UpdateVSync();
    void UpdateFrameGenerationSettingsActive(bool bUserChanged);
    void UpdateNVIDIAReflexAndVSyncSettingsActive();
    void ModifierFrameGenerationSettingsBySelectionIndex(int32 SelectionIndex);
    void GetFrameGenerationSelectionIndex(EPalDLSSGMode FrameGenerationModeType, int32 GeneratedFrame, int32& Index);
    void MakeFrameGenerationInfo();
    void GetFrameGenerationStrings(TArray<FString>& NewParam);
    void SelectionIndexToNVIDIAReflexType(int32 Index, EPalReflexMode& ReflexType);
    void NVIDIAReflexTypeToSelectionIndex(EPalReflexMode ReflexMode, int32& Index);
    void GetNVIDIAReflexMsgIdArray(TArray<FDataTableRowHandle>& MsgIdArray);
    void GetUpscalingMsgIdArray(TArray<FDataTableRowHandle>& MsgIdArray);
    void SetupUpscalingName();
    void GetMapObjectDrawDistanceTypeIndex(EPalOptionMapObjectDrawDistanceType DistanceType, int32& SelectionIndex);
    void SetupDrawDistanceStrings();
    void GetDisplayGraphicLevel(FPalOptionGraphicsSettings GraphicLevel, EPalOptionGraphicsLevel& Graphicsレベル);
    void Construct();
    void OnPresetChanged(int32 Selection);
    void OnWindowChanged(int32 Selection);
    void OnResolutionChanged(int32 Selection);
    void OnVSyncChanged(bool IsOn);
    void OnMotionBlurChanged(bool IsOn);
    void OnAAChanged(int32 Selection);
    void OnCameraShakeChanged(bool IsOn);
    void OnCameraRecoilChanged(bool IsOn);
    void OnFOVChanged(double Value);
    void OnLODChanged(double Value);
    void OnViewDisChanged(int32 Selection);
    void OnFoliageChanged(int32 Selection);
    void OnShadowChanged(int32 Selection);
    void OnBrightnessChanged(double Value);
    void OnAutoContrastChanged(bool IsOn);
    void OnTextureChanged(int32 Selection);
    void ApplySettings();
    void SetDefault();
    void OnRideCameraChanged(double Value);
    void OnUpscalingChanged(int32 DLSSLevel);
    void OnMaxFPSChanged(int32 Selection);
    void OnCommonQualityChanged(int32 Selection);
    void OnChangedMapObjectDrawDistanceType(int32 Selection);
    void OnChangedArachnophobiaMode(bool IsOn);
    void OnChangedReflexType(int32 Selection);
    void OnChangedFrameGenerationType(int32 Selection);
    void OnChangedFriendPalAwakenPalAura(bool IsOn);
    void OnChagedFOVType(bool IsOn);
    void ExecuteUbergraph_WBP_Graphic_Settings(int32 EntryPoint);
}; // Size: 0x6B8

#endif
