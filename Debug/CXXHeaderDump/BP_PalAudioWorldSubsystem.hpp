#ifndef UE4SS_SDK_BP_PalAudioWorldSubsystem_HPP
#define UE4SS_SDK_BP_PalAudioWorldSubsystem_HPP

class UBP_PalAudioWorldSubsystem_C : public UPalAudioWorldSubsystem
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0088 (size: 0x8)
    bool IsDead;                                                                      // 0x0090 (size: 0x1)
    class AActor* DeubugModel;                                                        // 0x0098 (size: 0x8)
    class AActor* LastOneEnemy;                                                       // 0x00A0 (size: 0x8)
    TArray<FGuid> ExecRaid;                                                           // 0x00A8 (size: 0x10)
    TArray<FGuid> ArrivedRaid;                                                        // 0x00B8 (size: 0x10)
    bool IsLocalPlayerInsideBaseCamp;                                                 // 0x00C8 (size: 0x1)
    TArray<class APalSpotAreaBase*> SpotList;                                         // 0x00D0 (size: 0x10)
    TArray<class APalAmbientSoundAreaBase*> AmbientSoundList;                         // 0x00E0 (size: 0x10)
    TArray<class APalAmbientSoundAreaBase*> AmbientSoundListPrev;                     // 0x00F0 (size: 0x10)
    TArray<int32> AmbinetSoundPlayingIdList;                                          // 0x0100 (size: 0x10)
    FPalAmbientSoundAreaData CurrentAmbientData;                                      // 0x0110 (size: 0x28)
    TMap<class EPalBattleBGMType, class EPalAudioState> BattleBGMMap2;                // 0x0138 (size: 0x50)
    bool IsDisableBattleBGM;                                                          // 0x0188 (size: 0x1)
    EPalBattleBGMType BattleBGMRankCache;                                             // 0x0189 (size: 0x1)

    void ResetBossBGMState(EPalBattleBGMType Selection);
    void OnArenaSequenceChanged(class UPalArenaSequencer* Sequencer, EPalArenaSequenceType PrevType, EPalArenaSequenceType AfterType);
    void SetDsiableBattleBGM(bool bIsDisable);
    void On Change Battle BGM(EPalBattleBGMType Rank);
    void OnArenaSequenceEnd();
    void OnArenaSequenceStart(class UPalArenaSequencer* ArenaSequencer);
    void FindMaxPriorityAmbientSoundArea(class APalAmbientSoundAreaBase*& AmbinetSoundArea);
    bool IsPlayingArea(class APalAmbientSoundAreaBase* AmbientSoundArea);
    void OnPlayerEnterAmbientArea(class APalPlayerCharacter* Player, class APalAmbientSoundAreaBase* AmbientSoundArea);
    void OnPlayerExitAmbientArea(class APalPlayerCharacter* Player, class APalAmbientSoundAreaBase* AmbientSoundArea);
    void PlayAmbientSounds(EPalOneDayTimeType OneDayTimeType);
    void OnChangeOneDayTimeType(EPalOneDayTimeType OneDayTimeType);
    void OnNightEnd();
    void OnNightStart();
    void UpdateAmbient();
    void OnBattleRankDown(EPalPlayerBattleFinishType Finish);
    void OnPlayerExitSpotArea(class APalPlayerCharacter* Player, class APalSpotAreaBase* SpotArea);
    void OnPlayerEnterSpotArea(class APalPlayerCharacter* Player, class APalSpotAreaBase* SpotArea);
    void UpdateSpot();
    void OnPlayerExitBaseCamp(class APalPlayerCharacter* Player, class UPalBaseCampModel* BaseCampModel);
    void OnPlayerEnterBaseCamp(class APalPlayerCharacter* Player, class UPalBaseCampModel* BaseCampModel);
    void UpdateRaid();
    void OnArrivedRaid(const FPalIncidentBroadcastParameter& Param);
    void OnEndRaid(const FPalIncidentBroadcastParameter& Parameter);
    void OnStartRaid(const FPalIncidentBroadcastParameter& Parameter);
    void CreateDebugModel(class AActor*& NewParam);
    void OnBattleModeChanged(bool IsBattleMode);
    void UpdateDebugDisplay();
    void UpdateWorldLocation();
    void UpdateWorldTime();
    void UpdateStatePlayerAlive();
    void SetDefaultState();
    void Tick_BP(float DeltaTime);
    void OnEndOfEvent();
    void DeathPlayer();
    void RespawnPlayer(class APalPlayerCharacter* Player);
    void OnSpawnedLocalPlayerCharacter(class APawn* Pawn, class AController* Controller);
    void ExecuteUbergraph_BP_PalAudioWorldSubsystem(int32 EntryPoint);
}; // Size: 0x18A

#endif
