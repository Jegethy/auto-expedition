#ifndef UE4SS_SDK_WBP_PalAim_HPP
#define UE4SS_SDK_WBP_PalAim_HPP

class UWBP_PalAim_C : public UPalUIAimReticleWindowBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0458 (size: 0x8)
    class UCanvasPanel* Canvas_AdditionalReticle;                                     // 0x0460 (size: 0x8)
    class UCanvasPanel* Canvas_CommonReticle;                                         // 0x0468 (size: 0x8)
    class UCanvasPanel* CanvasPanel_CommonReticle;                                    // 0x0470 (size: 0x8)
    class UImage* Image_Fishing_NG;                                                   // 0x0478 (size: 0x8)
    class UImage* Image_Fishing_OK;                                                   // 0x0480 (size: 0x8)
    class UImage* Image_Grappling;                                                    // 0x0488 (size: 0x8)
    class UImage* Image_Outline;                                                      // 0x0490 (size: 0x8)
    class UImage* Image_Reticle;                                                      // 0x0498 (size: 0x8)
    class UWBP_Reticle_KeyGuide_C* WBP_Reticle_KeyGuide_Cancel;                       // 0x04A0 (size: 0x8)
    class UWBP_Reticle_Pal_C* WBP_Reticle_Pal;                                        // 0x04A8 (size: 0x8)
    double TargetScale;                                                               // 0x04B0 (size: 0x8)
    double nowScale;                                                                  // 0x04B8 (size: 0x8)
    bool isThrowPalMode;                                                              // 0x04C0 (size: 0x1)
    class APalCharacter* CurrentCampLiftingPal;                                       // 0x04C8 (size: 0x8)
    TMap<class FPalDataTableRowName_ItemData, class TSubclassOf<UPalUIAimReticleBase>> FixedItemIDReticleClassMap; // 0x04D0 (size: 0x50)
    TMap<class EPalItemTypeB, class TSubclassOf<UPalUIAimReticleBase>> ItemTypeBReticleClassMap; // 0x0520 (size: 0x50)
    TMap<class EPalItemTypeA, class TSubclassOf<UPalUIAimReticleBase>> ItemTypeAReticleClassMap; // 0x0570 (size: 0x50)
    TMap<class TSubclassOf<UPalUIAimReticleBase>, class UPalUIAimReticleBase*> AdditionalReticleWidgetMap; // 0x05C0 (size: 0x50)
    class UPalUIAimReticleBase* CurrentAdditionalWidget;                              // 0x0610 (size: 0x8)

    void ActivateAdditionalWidget(FPalItemId WeaponItemId, bool& bActivated);
    void UpdateFishingReticle();
    void On Changed UISettings(const FPalOptionUISettings& PrevSettings, const FPalOptionUISettings& NewSettings);
    void UpdateGrapplingReticle();
    void SetGrapplingReticleVisible(bool IsVisible);
    void OnEndLiftCampPal();
    void OnLiftCampPal(class APalCharacter* TargetCharacter);
    void On Dead Detail();
    void DisplayOutlineTarget(FHitResult& HitResult);
    void Raycast Reticle Direction Body();
    void EndThrowPalMode();
    void StartThrowPalMode();
    void Get Reticle Hit Result(FHitResult& HitResult);
    void GetNowSelectedOtomoParameter(class UPalCharacterParameterComponent*& Parameter);
    void Show Assignable Throwing Pal(FHitResult& HitResult);
    void OnChangedWeaon(class APalWeaponBase* Weapon);
    void Setup_AfterCreatedPlayer();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void InitializeReticleMap();
    void ExecuteUbergraph_WBP_PalAim(int32 EntryPoint);
}; // Size: 0x618

#endif
