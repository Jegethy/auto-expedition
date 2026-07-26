#ifndef UE4SS_SDK_WBP_Ingame_PartnerSkillIcon_HPP
#define UE4SS_SDK_WBP_Ingame_PartnerSkillIcon_HPP

class UWBP_Ingame_PartnerSkillIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Loop;                                                 // 0x0280 (size: 0x8)
    class UImage* Image_Gauge;                                                        // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Stack;                                             // 0x0290 (size: 0x8)
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;                  // 0x0298 (size: 0x8)
    class UMaterialInstanceDynamic* GaugeMaterial;                                    // 0x02A0 (size: 0x8)
    class UPalStatusBase* MyStatus;                                                   // 0x02A8 (size: 0x8)

    void SetRemainingTimeRate(double TimeRate);
    void OnChangedSkillStack(int32 NewStackCount);
    void OnChangedRemainingTime(float RemainingTime);
    void SetupWithStatus(FPalInstanceID GranterId, FPalPassiveSkillEffect SkillEffect, class UPalStatusBase* Status);
    void Setup(FPalInstanceID GranterId, FPalPassiveSkillEffect SkillEffect);
    void Construct();
    void ExecuteUbergraph_WBP_Ingame_PartnerSkillIcon(int32 EntryPoint);
}; // Size: 0x2B0

#endif
