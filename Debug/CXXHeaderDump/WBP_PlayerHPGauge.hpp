#ifndef UE4SS_SDK_WBP_PlayerHPGauge_HPP
#define UE4SS_SDK_WBP_PlayerHPGauge_HPP

class UWBP_PlayerHPGauge_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0658 (size: 0x8)
    class UWBP_GuildGauge_C* WBP_GuildGauge;                                          // 0x0660 (size: 0x8)
    float ImportedSphereRadius;                                                       // 0x0668 (size: 0x4)
    FVector2D DrawOffset;                                                             // 0x0670 (size: 0x10)
    FTimerHandle CheckActorTimerHandle;                                               // 0x0680 (size: 0x8)
    FTimerHandle CheckDisplayTypeTimerHandle;                                         // 0x0688 (size: 0x8)
    class UBP_Status_Dying_C* CachedDyingStatus;                                      // 0x0690 (size: 0x8)
    FWBP_PlayerHPGauge_COnDelayClose OnDelayClose;                                    // 0x0698 (size: 0x10)
    void OnDelayClose(class UWidget* Widget);
    FDiscordUniqueID DiscordID;                                                       // 0x06A8 (size: 0x8)

    void OnDyingEnd();
    void On Update Shield Binded(FFixedPoint64 NowShield, FFixedPoint64 nowMaxShield);
    void SetupDying();
    void UpdateWidgetPosition();
    void OnUpdateLevel_Binded(int32 NewLevel);
    void On Update HP Binded(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void SetupByActor();
    void BindFromHandle(class UPalIndividualCharacterHandle* targetHandle);
    void UpdateForTick(double DeltaTime);
    void OnUpdateNickName_Binded(FString NewNickName);
    void On Timer Event Check Guild();
    void OnTimerEvent_CheckActor();
    void OnInitialized();
    void Destruct();
    void DelayClose();
    void OnVoiceChatUserStateChanged(FDiscordUniqueID UserId);
    void ExecuteUbergraph_WBP_PlayerHPGauge(int32 EntryPoint);
    void OnDelayClose__DelegateSignature(class UWidget* Widget);
}; // Size: 0x6B0

#endif
