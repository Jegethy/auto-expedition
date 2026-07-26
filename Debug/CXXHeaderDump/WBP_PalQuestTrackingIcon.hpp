#ifndef UE4SS_SDK_WBP_PalQuestTrackingIcon_HPP
#define UE4SS_SDK_WBP_PalQuestTrackingIcon_HPP

class UWBP_PalQuestTrackingIcon_C : public UWBP_LoupeBase_C
{
    class UWBP_NPC_OverheadQuest_C* WBP_NPC_OverheadQuest;                            // 0x04E0 (size: 0x8)
    TSoftObjectPtr<UPalLocationPoint_QuestBase> SoftLocationData;                     // 0x04E8 (size: 0x30)
    double HeadOffset;                                                                // 0x0518 (size: 0x8)
    FName MyQuestId;                                                                  // 0x0520 (size: 0x8)

    void CalcScreenPosition();
    bool IsEnableLoupe();
    void GetTargetWidgetSize(FVector2D& outVector);
    void GetLoupeWidgetSize(FVector2D& widgetSize);
    void SetFinalWidgetOpacity(double calcedOpacity);
    void GetTargetWorldLocation(FVector& outVector);
    void Setup(TSoftObjectPtr<UPalLocationPoint_QuestBase> SoftQuestLocation);
}; // Size: 0x528

#endif
