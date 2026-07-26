#ifndef UE4SS_SDK_BP_Status_WithVisualEffect_HPP
#define UE4SS_SDK_BP_Status_WithVisualEffect_HPP

class UBP_Status_WithVisualEffect_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    EPalVisualEffectID VisualEffectID;                                                // 0x00B8 (size: 0x1)
    bool AutoRemoveWhenOtherElemetAdd;                                                // 0x00B9 (size: 0x1)
    EPalElementType DamageUpElement;                                                  // 0x00BA (size: 0x1)
    EPalElementType DamageDownElement;                                                // 0x00BB (size: 0x1)
    FName CommonFlagName;                                                             // 0x00BC (size: 0x8)
    bool IsHideEffect;                                                                // 0x00C4 (size: 0x1)
    bool RequestHideEffect;                                                           // 0x00C5 (size: 0x1)

    void HideReAddEffectWhenInActiveOtomo();
    void IsIgnoreElement(EPalAdditionalEffectType AddEffect, bool& Ignore);
    void HideReAddEffect();
    void ResetDamageDown();
    void ResetDamageUp();
    void SetDamageDown();
    void SetDamageUp();
    void HasSelfPalElement(EPalElementType MyElement, bool& Has);
    void OnBeginStatus();
    void OnEndStatus();
    void カスタムイベント_OtherStatusAdd(const class UPalStatusComponent* StatusComponent, EPalStatusID statusID, class UPalStatusBase* Status);
    void カスタムイベント_Dead(FPalDeadInfo DeadInfo);
    void TickStatus(float DeltaTime);
    void ExecuteUbergraph_BP_Status_WithVisualEffect(int32 EntryPoint);
}; // Size: 0xC6

#endif
