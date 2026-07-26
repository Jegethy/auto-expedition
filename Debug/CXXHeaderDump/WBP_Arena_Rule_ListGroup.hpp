#ifndef UE4SS_SDK_WBP_Arena_Rule_ListGroup_HPP
#define UE4SS_SDK_WBP_Arena_Rule_ListGroup_HPP

class UWBP_Arena_Rule_ListGroup_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWBP_Arena_RuleListContent_0_C* WBP_Arena_RuleListContent_Boss;             // 0x0280 (size: 0x8)
    class UWBP_Arena_RuleListContent_0_C* WBP_Arena_RuleListContent_Duplicate;        // 0x0288 (size: 0x8)
    class UWBP_Arena_RuleListContent_1_C* WBP_Arena_RuleListContent_Element;          // 0x0290 (size: 0x8)
    class UWBP_Arena_RuleListContent_0_C* WBP_Arena_RuleListContent_Human;            // 0x0298 (size: 0x8)
    class UWBP_Arena_RuleListContent_0_C* WBP_Arena_RuleListContent_Legend;           // 0x02A0 (size: 0x8)
    class UWBP_Arena_RuleListContent_0_C* WBP_Arena_RuleListContent_LevelSync;        // 0x02A8 (size: 0x8)
    class UWBP_Arena_RuleListContent_0_C* WBP_Arena_RuleListContent_PalDamage;        // 0x02B0 (size: 0x8)
    class UWBP_Arena_RuleListContent_0_C* WBP_Arena_RuleListContent_PalRestrict;      // 0x02B8 (size: 0x8)
    class UWBP_Arena_RuleListContent_0_C* WBP_Arena_RuleListContent_PlayerDamage;     // 0x02C0 (size: 0x8)
    class UWBP_Arena_RuleListContent_0_C* WBP_Arena_RuleListContent_Ride;             // 0x02C8 (size: 0x8)
    class UWBP_Arena_RuleListContent_0_C* WBP_Arena_RuleListContent_Time;             // 0x02D0 (size: 0x8)
    bool SomethingChanged;                                                            // 0x02D8 (size: 0x1)
    FPalArenaRule CurrentRule;                                                        // 0x02E0 (size: 0x38)
    FWBP_Arena_Rule_ListGroup_COnRuleUpdated OnRuleUpdated;                           // 0x0318 (size: 0x10)
    void OnRuleUpdated(FPalArenaRule NewRule);
    FWBP_Arena_Rule_ListGroup_COnRestrictPalClicked OnRestrictPalClicked;             // 0x0328 (size: 0x10)
    void OnRestrictPalClicked();
    TArray<class UWBP_Arena_RuleListContent_0_C*> SettingContents;                    // 0x0338 (size: 0x10)
    class UCommonButtonBase* LastHoveredConten;                                       // 0x0348 (size: 0x8)
    FWBP_Arena_Rule_ListGroup_CToggleLevelSyncInfo ToggleLevelSyncInfo;               // 0x0350 (size: 0x10)
    void ToggleLevelSyncInfo(bool Show);

    void OnTimeLimitDamageChanged(double Value);
    void OnHumanRestrictChanged(bool IsOn);
    void OnElementRestrictChanged(TArray<EPalElementType>& Elements);
    void OnPalRestrictClicked();
    void OnDuplicateRestrictChanged(bool IsOn);
    void OnRideRestrictChanged(bool IsOn);
    void OnLegendRestrictChanged(bool IsOn);
    void OnBossRestrictChanged(bool IsOn);
    void OnPalDamageChanged(double Value);
    void OnPlayerDamageChanged(double Value);
    void OnLevelSyncChanged(bool IsOn);
    void GetDesiredFocusTarget(class UWidget*& Widget);
    void Setup(FPalArenaRule ArenaRule, bool RuleEditable);
    void OnInitialized();
    void OnContentHovered(class UWidget* Button);
    void OnContentUnhovered();
    void ExecuteUbergraph_WBP_Arena_Rule_ListGroup(int32 EntryPoint);
    void ToggleLevelSyncInfo__DelegateSignature(bool Show);
    void OnRestrictPalClicked__DelegateSignature();
    void OnRuleUpdated__DelegateSignature(FPalArenaRule NewRule);
}; // Size: 0x360

#endif
