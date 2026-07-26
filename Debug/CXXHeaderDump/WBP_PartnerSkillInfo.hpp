#ifndef UE4SS_SDK_WBP_PartnerSkillInfo_HPP
#define UE4SS_SDK_WBP_PartnerSkillInfo_HPP

class UWBP_PartnerSkillInfo_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Anm_HideShow;                                             // 0x0458 (size: 0x8)
    class UWBP_Ingame_PalSkillGauge_C* WBP_Ingame_PalSkillGauge;                      // 0x0460 (size: 0x8)
    class UPalPartnerSkillParameterComponent* CurrentPartnerSkillParameter;           // 0x0468 (size: 0x8)
    bool isShowCoolDown;                                                              // 0x0470 (size: 0x1)
    FTimerHandle CheckPartnerSkillUnlockedTimer;                                      // 0x0478 (size: 0x8)
    bool IsHiding;                                                                    // 0x0480 (size: 0x1)
    bool IsOverride;                                                                  // 0x0481 (size: 0x1)
    FDataTableRowHandle RideMsgID;                                                    // 0x0488 (size: 0x10)
    FDataTableRowHandle GetoffMsgID;                                                  // 0x0498 (size: 0x10)
    bool NowRiding;                                                                   // 0x04A8 (size: 0x1)
    bool NowCooping;                                                                  // 0x04A9 (size: 0x1)
    bool CurrentExcuting;                                                             // 0x04AA (size: 0x1)
    FTimerHandle AnmEndTimer;                                                         // 0x04B0 (size: 0x8)
    float CacheRatio;                                                                 // 0x04B8 (size: 0x4)
    FDataTableRowHandle CancelMSGID;                                                  // 0x04C0 (size: 0x10)

    void TriggerSkillCallAnimation();
    void ToggleCoopText(bool ShowOriginal);
    void OnStopCoop();
    void OnStartCoop();
    void EndExecuteAnmTimer();
    void ShowSkillExecuteAnm(bool IsExcuting);
    void Change Ride Key Guide(bool Ride);
    void Setup();
    void Should Show UI(bool& ShouldShow);
    void Check Partner Skill Unlocked Timer();
    void CanRideCharacter(bool& CanRide);
    void ShowCoolDownTime();
    void Show Effect Time();
    void Hide();
    void SetupDisplay();
    void Update Cool Down Time(FFixedPoint Now, FFixedPoint Max);
    void Update Effect Time(FFixedPoint Now, FFixedPoint Max);
    void Get Partner Skill Name Text(FText& SkillNameText);
    void GetPartnerSkillParameter(class UPalPartnerSkillParameterComponent*& PartnerSkillParameter);
    void GetOtomoPalHolder(class UBP_OtomoPalHolderComponent_C*& OtomoPalHolder);
    void OnActivateOtomo();
    void OnInactiveOtomo();
    void TriggerInput();
    void ReleaseInput();
    void Destruct();
    void AnmEvent_HideShow(bool Hide, bool Override);
    void ExecuteUbergraph_WBP_PartnerSkillInfo(int32 EntryPoint);
}; // Size: 0x4D0

#endif
