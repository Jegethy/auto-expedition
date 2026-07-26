#ifndef UE4SS_SDK_WBP_PalWorlSkillFruitFarm_HPP
#define UE4SS_SDK_WBP_PalWorlSkillFruitFarm_HPP

class UWBP_PalWorlSkillFruitFarm_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Anm_Progress_Pre_Loop;                                    // 0x0458 (size: 0x8)
    class UWidgetAnimation* Anm_DetailToSimple;                                       // 0x0460 (size: 0x8)
    class UCanvasPanel* Canvas_Progress_Aft;                                          // 0x0468 (size: 0x8)
    class UCanvasPanel* Canvas_Progress_Pre;                                          // 0x0470 (size: 0x8)
    class UCanvasPanel* Canvas_Progress_Simple;                                       // 0x0478 (size: 0x8)
    class UImage* CircleGauge_Progress;                                               // 0x0480 (size: 0x8)
    class UImage* Image;                                                              // 0x0488 (size: 0x8)
    class UImage* ProgressArrow0;                                                     // 0x0490 (size: 0x8)
    class UImage* ProgressArrow0_1;                                                   // 0x0498 (size: 0x8)
    class UImage* ProgressArrow0_2;                                                   // 0x04A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemName;                                          // 0x04A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Progress_Aft;                                      // 0x04B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Progress_Pre;                                      // 0x04B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Progress_Simple;                                   // 0x04C0 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;                            // 0x04C8 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal;                              // 0x04D0 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_1;                            // 0x04D8 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_2;                            // 0x04E0 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_3;                            // 0x04E8 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_4;                            // 0x04F0 (size: 0x8)
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;                                  // 0x04F8 (size: 0x8)
    TArray<class UWBP_PalCraftInfo_Pal_C*> PalInfos;                                  // 0x0500 (size: 0x10)
    FTimerHandle DisplayCheckTimer;                                                   // 0x0510 (size: 0x8)
    bool isDisplayedDetail;                                                           // 0x0518 (size: 0x1)
    bool HideNextState;                                                               // 0x0519 (size: 0x1)
    class UPalMapObjectFarmSkillFruitsModel* MyModel;                                 // 0x0520 (size: 0x8)
    TMap<class EPalFarmSkillFruitsState, class FDataTableRowHandle> StateMsgIdMap;    // 0x0528 (size: 0x50)

    void CREATEDELEGATE_PROXYFUNCTION_0(float NewValue);
    void SetGrowingItemId(FName StaticItemId);
    void OnUpdateState(EPalFarmSkillFruitsState NextState);
    void On Updated Worker Pal(class UPalWorkBase* Work);
    void OnUpdateProgress(double Progress);
    void OnSetup();
    void DisplayCheck();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_PalWorlSkillFruitFarm(int32 EntryPoint);
}; // Size: 0x578

#endif
