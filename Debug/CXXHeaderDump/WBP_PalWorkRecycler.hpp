#ifndef UE4SS_SDK_WBP_PalWorkRecycler_HPP
#define UE4SS_SDK_WBP_PalWorkRecycler_HPP

class UWBP_PalWorkRecycler_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Work_Stop;                                            // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Work_Proceed;                                         // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Boost_Off;                                            // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_Boost_On;                                             // 0x0298 (size: 0x8)
    class UWidgetAnimation* Anm_Storage_Full;                                         // 0x02A0 (size: 0x8)
    class UWidgetAnimation* Anm_Storage_NotFull;                                      // 0x02A8 (size: 0x8)
    class UWidgetAnimation* Anm_None;                                                 // 0x02B0 (size: 0x8)
    class UWidgetAnimation* Anm_DetailToSimple;                                       // 0x02B8 (size: 0x8)
    class UCanvasPanel* Canvas_Storage;                                               // 0x02C0 (size: 0x8)
    class UWBP_CommonCircularGauge_C* CircularGauge_Progress;                         // 0x02C8 (size: 0x8)
    class UImage* Image_442;                                                          // 0x02D0 (size: 0x8)
    class UImage* Image_Icon_Stop;                                                    // 0x02D8 (size: 0x8)
    class UOverlay* Overlay_PowerOFF;                                                 // 0x02E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemName;                                          // 0x02E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_WorkBoostNum;                                      // 0x02F0 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;                            // 0x02F8 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal;                              // 0x0300 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_1;                            // 0x0308 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_2;                            // 0x0310 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_3;                            // 0x0318 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_4;                            // 0x0320 (size: 0x8)
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;                                  // 0x0328 (size: 0x8)
    TArray<class UWBP_PalCraftInfo_Pal_C*> workerPalWidgetArray;                      // 0x0330 (size: 0x10)
    FDataTableRowHandle InfinityNumMsgId;                                             // 0x0340 (size: 0x10)
    FDataTableRowHandle RequireGenusMSGID;                                            // 0x0350 (size: 0x10)
    FDataTableRowHandle RequireTypeMSGID;                                             // 0x0360 (size: 0x10)
    bool bLastFullOutput;                                                             // 0x0370 (size: 0x1)

    void SetFullOutputState(bool bFull, bool bForce);
    void SetPowerState(bool bIsOn);
    void SetActiveBoost(bool bActive);
    void SetBoostSpeed(float SpeedMultiplier);
    void UpdateRequireInfo(class UPalWorkBase* Work, TArray<FPalUIMapObjectStatusIndicatorWorkSuitabilityDisplayData>& DisplayData);
    bool IsCharacterAssignedFixedToTargetWork(class UPalCharacterParameterComponent* TargetCharacter, FGuid WorkId);
    void SetProductItemID(FName ItemId);
    void SetWorkProgressRate(double Rate);
    void SetWorkerPalSlots(TArray<class UPalIndividualCharacterSlot*>& Slots, FGuid WorkId);
    void AnmEvent_ToDetail();
    void AnmEvent_ToSimpleDetail();
    void AnmEvent_NoRecipe();
    void AnmEvent_ForceSimple();
    void AnmEvent_Full();
    void AnmEvent_NotFull();
    void AnmEvent_BoostOn();
    void AnmEvent_BoostOff();
    void OnInitialized();
    void Construct();
    void ExecuteUbergraph_WBP_PalWorkRecycler(int32 EntryPoint);
}; // Size: 0x371

#endif
