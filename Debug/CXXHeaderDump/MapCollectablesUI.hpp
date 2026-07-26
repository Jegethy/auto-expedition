#ifndef UE4SS_SDK_MapCollectablesUI_HPP
#define UE4SS_SDK_MapCollectablesUI_HPP

class UMapCollectablesUI_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UTextBlock* AncientRuinsText;                                               // 0x0280 (size: 0x8)
    class UImage* ChestIcon;                                                          // 0x0288 (size: 0x8)
    class UTextBlock* ChestsText;                                                     // 0x0290 (size: 0x8)
    class UImage* CoalIcon;                                                           // 0x0298 (size: 0x8)
    class UTextBlock* CoalText;                                                       // 0x02A0 (size: 0x8)
    class UVerticalBox* Collectables1;                                                // 0x02A8 (size: 0x8)
    class UVerticalBox* Collectables2;                                                // 0x02B0 (size: 0x8)
    class UTextBlock* CollectedNotesText;                                             // 0x02B8 (size: 0x8)
    class UTextBlock* CollectedRelicsText;                                            // 0x02C0 (size: 0x8)
    class UImage* CopperIcon;                                                         // 0x02C8 (size: 0x8)
    class UTextBlock* CopperText;                                                     // 0x02D0 (size: 0x8)
    class UTextBlock* DebugText;                                                      // 0x02D8 (size: 0x8)
    class UImage* DungeonIcon;                                                        // 0x02E0 (size: 0x8)
    class UTextBlock* DungeonsText;                                                   // 0x02E8 (size: 0x8)
    class UTextBlock* EffigiesLabelText;                                              // 0x02F0 (size: 0x8)
    class UImage* EffigyIcon;                                                         // 0x02F8 (size: 0x8)
    class UImage* EggIcon;                                                            // 0x0300 (size: 0x8)
    class UTextBlock* EggsText;                                                       // 0x0308 (size: 0x8)
    class UImage* FruitTreeIcon;                                                      // 0x0310 (size: 0x8)
    class UTextBlock* FruitTreesText;                                                 // 0x0318 (size: 0x8)
    class UImage* HexoliteIcon;                                                       // 0x0320 (size: 0x8)
    class UTextBlock* HexoliteText;                                                   // 0x0328 (size: 0x8)
    class UDupeButton_C* HideUIButton;                                                // 0x0330 (size: 0x8)
    class UAnalogSlider* IconSizeSlider;                                              // 0x0338 (size: 0x8)
    class UTextBlock* IconSizeText;                                                   // 0x0340 (size: 0x8)
    class UCheckBox* IncludeCollectedNotesCheckBox;                                   // 0x0348 (size: 0x8)
    class UCheckBox* IncludeCollectedRelicsCheckBox;                                  // 0x0350 (size: 0x8)
    class UCheckBox* IncludeSolvedRuinsCheckBox;                                      // 0x0358 (size: 0x8)
    class UTextBlock* IncludeSolvedRuinsText;                                         // 0x0360 (size: 0x8)
    class UImage* JunkIcon;                                                           // 0x0368 (size: 0x8)
    class UTextBlock* JunkText;                                                       // 0x0370 (size: 0x8)
    class UComboBoxString* LanguageComboBox;                                          // 0x0378 (size: 0x8)
    class UBorder* MainBorder;                                                        // 0x0380 (size: 0x8)
    class UTextBlock* ModVersion;                                                     // 0x0388 (size: 0x8)
    class UVerticalBox* Noncollectables;                                              // 0x0390 (size: 0x8)
    class USpacer* NoncollectablesSpacer;                                             // 0x0398 (size: 0x8)
    class UImage* NoteIcon;                                                           // 0x03A0 (size: 0x8)
    class UTextBlock* NotesLabelText;                                                 // 0x03A8 (size: 0x8)
    class UTextBlock* NotesText;                                                      // 0x03B0 (size: 0x8)
    class UImage* NPCCampfireIcon;                                                    // 0x03B8 (size: 0x8)
    class UTextBlock* NPCCampfiresText;                                               // 0x03C0 (size: 0x8)
    class UTextBlock* NumCollectedNotesText;                                          // 0x03C8 (size: 0x8)
    class UTextBlock* NumCollectedRelicsText;                                         // 0x03D0 (size: 0x8)
    class UTextBlock* NumTotalNotesText;                                              // 0x03D8 (size: 0x8)
    class UTextBlock* NumTotalRelicsText;                                             // 0x03E0 (size: 0x8)
    class UImage* OilIcon;                                                            // 0x03E8 (size: 0x8)
    class UTextBlock* OilText;                                                        // 0x03F0 (size: 0x8)
    class UImage* OutpostIcon;                                                        // 0x03F8 (size: 0x8)
    class UTextBlock* OutpostsText;                                                   // 0x0400 (size: 0x8)
    class UImage* QuartzIcon;                                                         // 0x0408 (size: 0x8)
    class UTextBlock* QuartzText;                                                     // 0x0410 (size: 0x8)
    class UTextBlock* RelicsText;                                                     // 0x0418 (size: 0x8)
    class UTextBlock* RelicsTooltiptText;                                             // 0x0420 (size: 0x8)
    class UDupeButton_C* RemoveOldMarkersButton;                                      // 0x0428 (size: 0x8)
    class USpacer* RemoveOldMarkersSpacer;                                            // 0x0430 (size: 0x8)
    class UTextBlock* ResourcesText;                                                  // 0x0438 (size: 0x8)
    class UCanvasPanel* Root;                                                         // 0x0440 (size: 0x8)
    class UImage* RuinIcon;                                                           // 0x0448 (size: 0x8)
    class UCheckBox* ShowChestsCheckBox;                                              // 0x0450 (size: 0x8)
    class UCheckBox* ShowChestsOnCompassCheckBox;                                     // 0x0458 (size: 0x8)
    class UTextBlock* ShowChestsOnCompassText;                                        // 0x0460 (size: 0x8)
    class UCheckBox* ShowCoalCheckBox;                                                // 0x0468 (size: 0x8)
    class UCheckBox* ShowCopperCheckBox;                                              // 0x0470 (size: 0x8)
    class UCheckBox* ShowDungeonsCheckBox;                                            // 0x0478 (size: 0x8)
    class UCheckBox* ShowEffigyOnCompassCheckBox;                                     // 0x0480 (size: 0x8)
    class UTextBlock* ShowEffigyOnCompassText;                                        // 0x0488 (size: 0x8)
    class UCheckBox* ShowEggsCheckBox;                                                // 0x0490 (size: 0x8)
    class UCheckBox* ShowFruitTreesCheckBox;                                          // 0x0498 (size: 0x8)
    class UCheckBox* ShowHexoliteCheckBox;                                            // 0x04A0 (size: 0x8)
    class UCheckBox* ShowJunkCheckBox;                                                // 0x04A8 (size: 0x8)
    class UCheckBox* ShowJunkOnCompassCheckBox;                                       // 0x04B0 (size: 0x8)
    class UTextBlock* ShowJunkOnCompassText;                                          // 0x04B8 (size: 0x8)
    class UCheckBox* ShowNotesCheckBox;                                               // 0x04C0 (size: 0x8)
    class UCheckBox* ShowNPCCampfiresCheckBox;                                        // 0x04C8 (size: 0x8)
    class UCheckBox* ShowOilCheckBox;                                                 // 0x04D0 (size: 0x8)
    class UCheckBox* ShowOutpostsCheckBox;                                            // 0x04D8 (size: 0x8)
    class UCheckBox* ShowQuartzCheckBox;                                              // 0x04E0 (size: 0x8)
    class UCheckBox* ShowRelicsCheckBox;                                              // 0x04E8 (size: 0x8)
    class UCheckBox* ShowResourcesCheckBox;                                           // 0x04F0 (size: 0x8)
    class UCheckBox* ShowRuinsCheckBox;                                               // 0x04F8 (size: 0x8)
    class UCheckBox* ShowSulfurCheckBox;                                              // 0x0500 (size: 0x8)
    class UCheckBox* ShowTooltipsCheckBox;                                            // 0x0508 (size: 0x8)
    class UImage* SulfurIcon;                                                         // 0x0510 (size: 0x8)
    class UTextBlock* SulfurText;                                                     // 0x0518 (size: 0x8)
    class UDupeButton_C* TeleportButton1;                                             // 0x0520 (size: 0x8)
    class UDupeButton_C* TeleportButton2;                                             // 0x0528 (size: 0x8)
    class USpacer* TeleportButtonsSpacer;                                             // 0x0530 (size: 0x8)
    class UScaleBox* UIScaleBox;                                                      // 0x0538 (size: 0x8)
    class UVerticalBox* UIVerticalBox;                                                // 0x0540 (size: 0x8)
    bool IsUIHidden;                                                                  // 0x0548 (size: 0x1)
    bool IsRemoveOldMarkersHidden;                                                    // 0x0549 (size: 0x1)
    TEnumAsByte<AnchorPositionEnum::Type> AnchorPosition;                             // 0x054A (size: 0x1)
    FString HideTeleportButtonSetting;                                                // 0x0550 (size: 0x10)
    int32 CurrentLanguageIndex;                                                       // 0x0560 (size: 0x4)
    TArray<FString> LanguageCodes;                                                    // 0x0568 (size: 0x10)
    TArray<FString> LanguageNames;                                                    // 0x0578 (size: 0x10)
    bool bSuppressLangEvent ;                                                         // 0x0588 (size: 0x1)
    bool CollapsedModUI;                                                              // 0x0589 (size: 0x1)

    bool Get_IncludeSolvedRuinsCheckBox_bIsEnabled();
    ESlateVisibility Get_UIVerticalBox_Visibility();
    void ResolveInitialLanguage(int32& Index);
    void ApplyLanguage();
    void GetUIString(FString Key, FText& Result);
    void SetDebugText(FText DebugText, bool Clear);
    void SetCheckboxesToShow(FString Mode);
    ESlateVisibility Get_TeleportButtonsSpacer_Visibility();
    void SetTeleportButton2Text(bool IsNearHiddenRelic);
    void SetTeleportButton2Visibility(ESlateVisibility Visibility);
    void SetTeleportButton1Text(bool IsNearHiddenRelic);
    void Set Teleport Button 1Visibility(ESlateVisibility Visibility);
    void SetupIconImages();
    void SetStylesToMatchGame();
    void SetAnchorPosition(FString Position);
    void SetRemoveOldMarkersButtonVisibility(bool Hide);
    bool Get_ShowResourcesCheckBox_IsEnabled();
    bool Get_IncludeCollectedNotesCheckBox_IsEnabled();
    bool Get_IncludeCollectedRelicsCheckBox_IsEnabled();
    void Get UIVertical Box Visibility(ESlateVisibility& NewParam);
    void SetUIVisibility(bool Hide);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__MapCollectablesUI_LanguageComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ExecuteUbergraph_MapCollectablesUI(int32 EntryPoint);
}; // Size: 0x58A

#endif
