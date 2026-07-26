#ifndef UE4SS_SDK_WBP_InGame_Match_HP_HPP
#define UE4SS_SDK_WBP_InGame_Match_HP_HPP

class UWBP_InGame_Match_HP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UProgressBar* ProgressBar_HPGauge_Player;                                   // 0x0280 (size: 0x8)
    class UProgressBar* ProgressBar_HPGauge_Player_Back;                              // 0x0288 (size: 0x8)
    class UProgressBar* ProgressBar_HPGauge_Rival;                                    // 0x0290 (size: 0x8)
    class UProgressBar* ProgressBar_HPGauge_Rival_Back;                               // 0x0298 (size: 0x8)
    class UWBP_BossBattle_Timer_C* WBP_BossBattle_Timer;                              // 0x02A0 (size: 0x8)
    class UWBP_InGame_Match_HPPal_C* WBP_InGame_Match_HPPal_Player_0;                 // 0x02A8 (size: 0x8)
    class UWBP_InGame_Match_HPPal_C* WBP_InGame_Match_HPPal_Player_1;                 // 0x02B0 (size: 0x8)
    class UWBP_InGame_Match_HPPal_C* WBP_InGame_Match_HPPal_Player_2;                 // 0x02B8 (size: 0x8)
    class UWBP_InGame_Match_HPPal_C* WBP_InGame_Match_HPPal_Rival_0;                  // 0x02C0 (size: 0x8)
    class UWBP_InGame_Match_HPPal_C* WBP_InGame_Match_HPPal_Rival_1;                  // 0x02C8 (size: 0x8)
    class UWBP_InGame_Match_HPPal_C* WBP_InGame_Match_HPPal_Rival_2;                  // 0x02D0 (size: 0x8)
    class UPalUIDelayGaugeCalculator* PlayerHPGauge;                                  // 0x02D8 (size: 0x8)
    class UPalUIDelayGaugeCalculator* RivalHPGauge;                                   // 0x02E0 (size: 0x8)
    TArray<class UWBP_InGame_Match_HPPal_C*> PlayerPals;                              // 0x02E8 (size: 0x10)
    TArray<class UWBP_InGame_Match_HPPal_C*> RivalPals;                               // 0x02F8 (size: 0x10)
    class UPalIndividualCharacterParameter* Player Individual Parameter;              // 0x0308 (size: 0x8)
    class UPalIndividualCharacterParameter* Rival Individual Parameter;               // 0x0310 (size: 0x8)

    void Setup(EPalArenaPlayerIndex LocalPlayerIndex, const TMap<class EPalArenaPlayerIndex, class FPalArenaPlayerInfo>& PlayerInfoMap, int32 MaxBattleTime);
    void Update Rival HP(FFixedPoint64 nowHP, FFixedPoint64 MaxHP);
    void UpdatePlayerHP(FFixedPoint64 nowHP, FFixedPoint64 MaxHP);
    void OnInitialized();
    void Unbind();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_InGame_Match_HP(int32 EntryPoint);
}; // Size: 0x318

#endif
