#ifndef UE4SS_SDK_WBP_Ingame_Incubator_Multiple_HPP
#define UE4SS_SDK_WBP_Ingame_Incubator_Multiple_HPP

class UWBP_Ingame_Incubator_Multiple_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Anm_DetailToSimple;                                       // 0x0458 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_NoSet;                          // 0x0460 (size: 0x8)
    class UImage* LineCenter;                                                         // 0x0468 (size: 0x8)
    class UOverlay* OverlayStatus;                                                    // 0x0470 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Status;                                            // 0x0478 (size: 0x8)
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot;    // 0x0480 (size: 0x8)
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot_1;  // 0x0488 (size: 0x8)
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot_2;  // 0x0490 (size: 0x8)
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot_3;  // 0x0498 (size: 0x8)
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot_4;  // 0x04A0 (size: 0x8)
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot_5;  // 0x04A8 (size: 0x8)
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot_6;  // 0x04B0 (size: 0x8)
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot_7;  // 0x04B8 (size: 0x8)
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot_8;  // 0x04C0 (size: 0x8)
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot_9;  // 0x04C8 (size: 0x8)
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot_Simple; // 0x04D0 (size: 0x8)
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;                                  // 0x04D8 (size: 0x8)
    class UPalMapObjectMultiHatchingEggModel* Model;                                  // 0x04E0 (size: 0x8)
    bool isDisplayedDetail;                                                           // 0x04E8 (size: 0x1)
    FTimerHandle DisplayCheckTimer;                                                   // 0x04F0 (size: 0x8)
    TArray<class UWBP_Ingame_Incubator_MultipleSlot_C*> Slots;                        // 0x04F8 (size: 0x10)
    int32 LastSimpleSlotIndex;                                                        // 0x0508 (size: 0x4)
    FTimerHandle SimpleSlotUpdateTimer;                                               // 0x0510 (size: 0x8)
    bool NoEgg;                                                                       // 0x0518 (size: 0x1)
    bool HasPower;                                                                    // 0x0519 (size: 0x1)

    void OnEggArrayUpdated();
    void UpdateSimpleSlot();
    void Update Power Suffcient(class UPalMapObjectEnergyModule* Module);
    void Update Slots(class UPalItemContainer* ItemContainer);
    void Setup();
    void OnSetup();
    void Destruct();
    void Construct();
    void DisplayCheck();
    void OnInitialized();
    void ExecuteUbergraph_WBP_Ingame_Incubator_Multiple(int32 EntryPoint);
}; // Size: 0x51A

#endif
