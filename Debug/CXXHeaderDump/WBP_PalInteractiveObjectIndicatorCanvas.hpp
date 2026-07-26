#ifndef UE4SS_SDK_WBP_PalInteractiveObjectIndicatorCanvas_HPP
#define UE4SS_SDK_WBP_PalInteractiveObjectIndicatorCanvas_HPP

class UWBP_PalInteractiveObjectIndicatorCanvas_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0458 (size: 0x8)
    class UVerticalBox* AdditionalWidgetBOx;                                          // 0x0460 (size: 0x8)
    class UCanvasPanel* CanvasPanel_1;                                                // 0x0468 (size: 0x8)
    class UImage* Image;                                                              // 0x0470 (size: 0x8)
    class UImage* Image_78;                                                           // 0x0478 (size: 0x8)
    class UVerticalBox* IndicatorVerticalBox;                                         // 0x0480 (size: 0x8)
    class UOverlay* Overlay_CustomName;                                               // 0x0488 (size: 0x8)
    class UBP_PalTextBlock_C* Text_InteractTargetName;                                // 0x0490 (size: 0x8)
    TMap<class EPalInteractiveObjectActionType, class UWBP_PalInteractiveObjectIndicatorUI_C*> IndicatorUIs; // 0x0498 (size: 0x50)
    int32 ZOrder;                                                                     // 0x04E8 (size: 0x4)
    bool bInteracting;                                                                // 0x04EC (size: 0x1)
    TScriptInterface<class IPalInteractiveObjectComponentInterface> Interactive Object; // 0x04F0 (size: 0x10)
    FVector IndicatorBoxOffset;                                                       // 0x0500 (size: 0x18)
    FPalInteractiveObjectActionInfoData OtomoIndicatorActionInfo;                     // 0x0518 (size: 0x10)
    bool bOtomoIndicatorDisplaying;                                                   // 0x0528 (size: 0x1)
    double otomoInteractDistance;                                                     // 0x0530 (size: 0x8)

    void CREATEDELEGATE_PROXYFUNCTION_0(const FPalKeyConfigSettings& PrevSettings, const FPalKeyConfigSettings& NewSettings);
    void HideInteractTargetName();
    void UpdateInteractTargetName();
    void OnKeyConfigChanged(FPalKeyConfigSettings PreSetting, FPalKeyConfigSettings NewSetting);
    void GetIndicatorText(TScriptInterface<class IPalInteractiveObjectComponentInterface> InteractiveObject, EPalInteractiveObjectIndicatorType IndicatorType, EPalInteractiveObjectButtonType buttonType, bool CanToggle, FText& NewParam);
    void OnRide(class AActor* RideActor);
    void SetupEvent();
    void HideInteractHUDInterfaceWidget();
    void ShowInteractHUDInterfaceWidget();
    void OnChangeOtomo();
    void SetupAfterCreatePlayer();
    void ShowOtomoIndicator(EPalInteractiveObjectActionType ActionType, FPalInteractiveObjectActionInfoData ActionInfo);
    void ShowOtomoIndicators();
    void UpdateOtomoIndicators();
    void UpdateOtomoIndicatorPosition();
    void CanDisplayCoop(bool& CanDisplay);
    void UpdateIndicatorBoxPosition();
    void Update Indicator UIs();
    void HideIndicators();
    void ShowIndicator(EPalInteractiveObjectActionType ActionType, FPalInteractiveObjectActionInfoData actionInfoData);
    void ShowIndicators();
    void SetZOrder(int32 ZOrder);
    void CreateIndicatorUI();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void OnUpdateTargetInteractiveObject(TScriptInterface<class IPalInteractiveObjectComponentInterface> InteractiveObject);
    void OnInitialized();
    void OnApplicationActivationStateChanged(bool bIsFocused);
    void ExecuteUbergraph_WBP_PalInteractiveObjectIndicatorCanvas(int32 EntryPoint);
}; // Size: 0x538

#endif
