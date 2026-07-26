#ifndef UE4SS_SDK_WBP_PalTarget_HPP
#define UE4SS_SDK_WBP_PalTarget_HPP

class UWBP_PalTarget_C : public UWBP_LoupeBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x04E8 (size: 0x8)
    class UImage* Image;                                                              // 0x04F0 (size: 0x8)
    class UImage* Image_24;                                                           // 0x04F8 (size: 0x8)
    class UImage* Image_Ring;                                                         // 0x0500 (size: 0x8)
    class UImage* Image_Ring_1;                                                       // 0x0508 (size: 0x8)
    class UImage* Image_Shadow;                                                       // 0x0510 (size: 0x8)
    TSoftObjectPtr<APalCharacter> SoftTargetCharacter;                                // 0x0518 (size: 0x30)
    FWBP_PalTarget_COnMissingTarget OnMissingTarget;                                  // 0x0548 (size: 0x10)
    void OnMissingTarget();
    FTimerHandle ValidCheckTimerHandle;                                               // 0x0558 (size: 0x8)
    FVector LocationOffset;                                                           // 0x0560 (size: 0x18)

    bool IsEnableLoupe();
    void SetFinalWidgetOpacity(double calcedOpacity);
    void GetTranslationTarget(class UWidget*& Widget);
    void CalcScreenPosition();
    void GetLoupeWidgetSize(FVector2D& widgetSize);
    void GetTargetWidgetSize(FVector2D& outVector);
    void GetTargetWorldLocation(FVector& outVector);
    void OnDeadTarget(FPalDeadInfo DeadInfo);
    void ValidCheck();
    void Setup(class APalCharacter* TargetCharacter);
    void AnmEvent_In();
    void Destruct();
    void ExecuteUbergraph_WBP_PalTarget(int32 EntryPoint);
    void OnMissingTarget__DelegateSignature();
}; // Size: 0x578

#endif
