#ifndef UE4SS_SDK_WBP_BossWarningLoupe_HPP
#define UE4SS_SDK_WBP_BossWarningLoupe_HPP

class UWBP_BossWarningLoupe_C : public UWBP_LoupeBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    class UWidgetAnimation* Anm_Caution;                                              // 0x04E8 (size: 0x8)
    class UCanvasPanel* Canvas_Caution;                                               // 0x04F0 (size: 0x8)
    class UImage* Loupe_Angle;                                                        // 0x04F8 (size: 0x8)
    class UPalIndividualCharacterHandle* targetHandle;                                // 0x0500 (size: 0x8)
    FPalInstanceID SyncId;                                                            // 0x0508 (size: 0x30)
    bool AlwaysDisplay;                                                               // 0x0538 (size: 0x1)

    void CallWarning(bool AlwaysDisplay);
    void UpdatePositionAndVisibility(double Dot, FVector rootLocation, FVector TargetLocation);
    void Setup(class UPalIndividualCharacterHandle* targetHandle);
    void CalcScreenPosition();
    bool IsEnableLoupe();
    void GetTargetWidgetSize(FVector2D& outVector);
    void GetTargetWorldLocation(FVector& outVector);
    void SetFinalWidgetOpacity(double calcedOpacity);
    void GetLoupeWidgetSize(FVector2D& widgetSize);
    void UpdateArrowImageAngle(double newAngle);
    void AnmEvent_Warning();
    void ExecuteUbergraph_WBP_BossWarningLoupe(int32 EntryPoint);
}; // Size: 0x539

#endif
