#ifndef UE4SS_SDK_WBP_PalWorkProduct_Dual_HPP
#define UE4SS_SDK_WBP_PalWorkProduct_Dual_HPP

class UWBP_PalWorkProduct_Dual_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_None;                                                 // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_DetailToSimple;                                       // 0x0288 (size: 0x8)
    class UWidgetAnimation* Test_Color_R;                                             // 0x0290 (size: 0x8)
    class UWidgetAnimation* Test_Color_L;                                             // 0x0298 (size: 0x8)
    class UWidgetAnimation* Test_Over;                                                // 0x02A0 (size: 0x8)
    class UImage* CircleGauge_Base_L;                                                 // 0x02A8 (size: 0x8)
    class UImage* CircleGauge_Base_R;                                                 // 0x02B0 (size: 0x8)
    class UImage* CircleGauge_Over_L;                                                 // 0x02B8 (size: 0x8)
    class UImage* CircleGauge_Over_R;                                                 // 0x02C0 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02C8 (size: 0x8)
    class UImage* Image_65;                                                           // 0x02D0 (size: 0x8)
    class UImage* Image_IconBloom_L;                                                  // 0x02D8 (size: 0x8)
    class UImage* Image_IconBloom_R;                                                  // 0x02E0 (size: 0x8)
    class UImage* Image_Plus;                                                         // 0x02E8 (size: 0x8)
    class UImage* Image_Plus_1;                                                       // 0x02F0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemName;                                          // 0x02F8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxItemNum;                                        // 0x0300 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowItemNum;                                        // 0x0308 (size: 0x8)
    class UBP_PalTextBlock_C* Text_WorkNum_L;                                         // 0x0310 (size: 0x8)
    class UBP_PalTextBlock_C* Text_WorkNum_R;                                         // 0x0318 (size: 0x8)
    class UWBP_CommonCircularGauge_C* WBP_CommonCircularGauge_L;                      // 0x0320 (size: 0x8)
    class UWBP_CommonCircularGauge_C* WBP_CommonCircularGauge_R;                      // 0x0328 (size: 0x8)
    class UWBP_IconPalWork_C* WBP_IconPalWork_L;                                      // 0x0330 (size: 0x8)
    class UWBP_IconPalWork_C* WBP_IconPalWork_R;                                      // 0x0338 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon_1;                          // 0x0340 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_L;                            // 0x0348 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_R;                            // 0x0350 (size: 0x8)
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;                                  // 0x0358 (size: 0x8)
    FFPalUIWorkProductDualWidgetSet WidgetSetL;                                       // 0x0360 (size: 0x30)
    FFPalUIWorkProductDualWidgetSet WidgetSetR;                                       // 0x0390 (size: 0x30)
    FDataTableRowHandle InfinityNumMsgId;                                             // 0x03C0 (size: 0x10)
    FDataTableRowHandle RequireGenusMSGID;                                            // 0x03D0 (size: 0x10)
    FDataTableRowHandle RequireTypeMSGID;                                             // 0x03E0 (size: 0x10)
    TMap<class EPalWorkSuitability, class FLinearColor> BaseColorWorkSuitability;     // 0x03F0 (size: 0x50)

    FLinearColor GetWorkSuitabilityColor(EPalWorkSuitability Target);
    FFPalUIWorkProductDualWidgetSet GetWidgetSetByIndex(int32 Index);
    void RefreshWorkPalSlot(class UPalWorkProgressMultiType* Work, const int32 WidgetIndex);
    TArray<class UWBP_PalCraftInfo_Pal_C*> GetWorkerPalWidgetArray();
    void SetWorkSuitability(EPalWorkSuitability WorkSuitability);
    void UpdateRequireInfo(class UPalWorkBase* Work, TArray<FPalUIMapObjectStatusIndicatorWorkSuitabilityDisplayData>& DisplayData);
    bool IsCharacterAssignedFixedToTargetWork(class UPalCharacterParameterComponent* TargetCharacter, FGuid WorkId);
    void Set Invalid Recipe Detail();
    void SetProductItemID(FName ItemId);
    void ReflectWorkProgressRateForTargetSlot(class UPalWorkProgressMultiType* WorkProgress, int32 WidgetIndex);
    void ReflectWorkProgressRate(class UPalWorkProgressMultiType* WorkProgress);
    void SetIcon(FName ItemId);
    void SetInfinityProductMode();
    void SetProductNum(int32 nowProductNum, int32 maxProductNum);
    void RefreshWorkPalSlots(class UPalWorkProgressMultiType* Work);
    void GetTargetWorkSuitabilityByWork(bool bLeft, class UPalWorkProgress* Work);
    void OnUpdateProgress_ForTarget(class UPalWorkProgressMultiType* Work, EPalWorkSuitability WorkSuitability, class UImage* WidgetImage_Progress);
    void CreateWidgetSets();
    void SetupUI_ForWorkSlot(class UPalWorkProgressMultiType* Work, int32 Index);
    void SetupUI(class UPalWorkProgressMultiType* WorkProgressMulti);
    void AnmEvent_ToDetail();
    void AnmEvent_ToSimpleDetail();
    void AnmEvent_NoRecipe();
    void AnmEvent_ForceSimple();
    void OnInitialized();
    void Construct();
    void ExecuteUbergraph_WBP_PalWorkProduct_Dual(int32 EntryPoint);
}; // Size: 0x440

#endif
