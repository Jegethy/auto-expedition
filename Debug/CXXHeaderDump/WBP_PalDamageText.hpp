#ifndef UE4SS_SDK_WBP_PalDamageText_HPP
#define UE4SS_SDK_WBP_PalDamageText_HPP

class UWBP_PalDamageText_C : public UPalUIDamageTextBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWidgetAnimation* In_Mercy;                                                 // 0x0480 (size: 0x8)
    class UWidgetAnimation* Out;                                                      // 0x0488 (size: 0x8)
    class UWidgetAnimation* In_Resist_0;                                              // 0x0490 (size: 0x8)
    class UWidgetAnimation* In_Weak_1;                                                // 0x0498 (size: 0x8)
    class UWidgetAnimation* In_Weak_0;                                                // 0x04A0 (size: 0x8)
    class UWidgetAnimation* In;                                                       // 0x04A8 (size: 0x8)
    class UCanvasPanel* Canvas_Root;                                                  // 0x04B0 (size: 0x8)
    class UHorizontalBox* Horizontal_DamageValue;                                     // 0x04B8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_AdditionalEffect;                             // 0x04C0 (size: 0x8)
    class UImage* Image_CriticalEff;                                                  // 0x04C8 (size: 0x8)
    class UImage* Image_StatusEffect01;                                               // 0x04D0 (size: 0x8)
    class UImage* Image_StatusEffect02;                                               // 0x04D8 (size: 0x8)
    class UImage* Image_StatusEffect03;                                               // 0x04E0 (size: 0x8)
    class UOverlay* Overlay_Damage;                                                   // 0x04E8 (size: 0x8)
    class UOverlay* Overlay_Mercy;                                                    // 0x04F0 (size: 0x8)
    class USizeBox* SizeBox_Enhanced;                                                 // 0x04F8 (size: 0x8)
    class USizeBox* SizeBox_StatusEffect_01;                                          // 0x0500 (size: 0x8)
    class USizeBox* SizeBox_StatusEffect_02;                                          // 0x0508 (size: 0x8)
    class USizeBox* SizeBox_StatusEffect_03;                                          // 0x0510 (size: 0x8)
    class UBP_PalTextBlock_C* Text_DamageValue;                                       // 0x0518 (size: 0x8)
    double animeSpeedScale;                                                           // 0x0520 (size: 0x8)
    EPalDamageTextType textType;                                                      // 0x0528 (size: 0x1)
    double interpolationLength;                                                       // 0x0530 (size: 0x8)
    FVector2D OffsetPosition;                                                         // 0x0538 (size: 0x10)
    FVector2D randomizeOffset;                                                        // 0x0548 (size: 0x10)
    bool Mercy Hit;                                                                   // 0x0558 (size: 0x1)
    FWBP_PalDamageText_COnEndOutAnim OnEndOutAnim;                                    // 0x0560 (size: 0x10)
    void OnEndOutAnim(class UWBP_PalDamageText_C* Widget);
    FTimerHandle WaitEndAnimTimerhandle;                                              // 0x0570 (size: 0x8)
    TArray<class USizeBox*> AdditionalEffetcSizeBoxArray;                             // 0x0578 (size: 0x10)
    TArray<class UImage*> AdditionalEffectIconArray;                                  // 0x0588 (size: 0x10)

    void SetAdditionalPassiveDamageRate(double AdditionalPassiveRate);
    void SetElementEffect(TArray<EPalAdditionalEffectType>& AdditionalEffect);
    void SetMercyHitDisplay(bool bMercyHit);
    void GetPadding(double& Padding);
    void SetDamageTextType(EPalDamageTextType textType);
    void UpdatePosition(const FVector& targetWorldLocation);
    void SetDamageColor(const FSlateColor& InColor);
    void SetDamageValue(int32 InValue);
    void OnRequestClose();
    void EndAnimEvent();
    void Destruct();
    void Construct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalDamageText(int32 EntryPoint);
    void OnEndOutAnim__DelegateSignature(class UWBP_PalDamageText_C* Widget);
}; // Size: 0x598

#endif
