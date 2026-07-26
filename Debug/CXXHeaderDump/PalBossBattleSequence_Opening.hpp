#ifndef UE4SS_SDK_PalBossBattleSequence_Opening_HPP
#define UE4SS_SDK_PalBossBattleSequence_Opening_HPP

class UPalBossBattleSequence_Opening_C : public UPalBossBattleSequenceBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0040 (size: 0x8)
    int32 LoadingAssetCount;                                                          // 0x0048 (size: 0x4)
    class ULevelSequencePlayer* LSPlayer;                                             // 0x0050 (size: 0x8)
    bool IsEndCutscene;                                                               // 0x0058 (size: 0x1)
    bool IsEndSetBoss;                                                                // 0x0059 (size: 0x1)
    TArray<FTransform> PlayerPosList;                                                 // 0x0060 (size: 0x10)
    bool IsPlayerFix;                                                                 // 0x0070 (size: 0x1)
    class UPalHUDDispatchParameter_FadeWidget* FadeParameter;                         // 0x0078 (size: 0x8)
    bool IsLoaded;                                                                    // 0x0080 (size: 0x1)
    class APalBossBattleInstanceRoot* Boss Battle Instance Root;                      // 0x0088 (size: 0x8)
    class APalBossBattleLevelInstance* BossRoom;                                      // 0x0090 (size: 0x8)
    class UPalBossBattleInstanceModel* InstanceModel;                                 // 0x0098 (size: 0x8)
    bool IsCutscenePlayed;                                                            // 0x00A0 (size: 0x1)
    bool IsTeleportEnd;                                                               // 0x00A1 (size: 0x1)
    double LevelLoadCheckTimer;                                                       // 0x00A8 (size: 0x8)
    class UAkAudioEvent* BGMIntroEvent;                                               // 0x00B0 (size: 0x8)
    class UAkAudioEvent* BGMLoopEvent;                                                // 0x00B8 (size: 0x8)
    TSubclassOf<class APalCutsceneActor> PalCustCeneActorClass;                       // 0x00C0 (size: 0x8)
    bool IsPlayIntroBGM;                                                              // 0x00C8 (size: 0x1)
    class APalBossBattleEventBase* Boss Battle Event;                                 // 0x00D0 (size: 0x8)
    FName flagName;                                                                   // 0x00D8 (size: 0x8)
    FName QuestId_EnterTower;                                                         // 0x00E0 (size: 0x8)
    FName QuestId_WorldTreeAbyss;                                                     // 0x00E8 (size: 0x8)
    class UPalCutsceneSkipHandler* CutsceneSkipHandler;                               // 0x00F0 (size: 0x8)

    void Play Quest Order UI Animation(class APalPlayerController* OwningPlayer, const FName& QuestId, bool& IsPlay);
    void CreateCutsceneSkipHandler();
    void ProgressEnterTowerQuestBlock();
    void isLoadingAction(bool& isLoadingAction);
    void TryEventInitialize();
    void IsAssetLoadingCompleted(bool& NewParam);
    void DecAssetLoadingCount();
    void InitPlayerCameraRotation();
    void CheckLevelInstanceLoaded(double DeltaTime);
    void StartUIFadeIn();
    void StartUIFadeOut();
    void GetLevelSpawnPos(FVector& Pos);
    void FixPlayerPos();
    void DoSequenceFinish();
    void IsSkipCutscene(bool& Skip);
    void ActivateBossAI();
    void PlayIntroMovie(TSubclassOf<class APalCutsceneActor> StartCutscene);
    void SetPlayerLocation_StartPoint();
    void LogShow(FString String);
    void OnLoaded_7D1701CA4A594EE0B85451B16F0DD9FB(class UObject* Loaded);
    void OnLoaded_95B43418450294BEE8289E863350333C(class UObject* Loaded);
    void OnLoaded_87511D084D17A2720B719F91D617DC72(UClass* Loaded);
    void OnLoaded_0BB6844B4A3DED81F68CD7B00B9F7066(UClass* Loaded);
    void OnBeginSequence();
    void カスタムイベント_0(class APalCharacter* SpawnedCharacter);
    void FinishSequence(bool IsSuccess);
    void TickSequence(float DeltaTime);
    void LoadedLevel();
    void InitAssets();
    void OnPlayerTeleported();
    void OnAssetsInitialized();
    void OnEventCreated(class APalBossBattleEventBase* BossBattleEvent);
    void OnActionBegin(const class UPalActionBase* action);
    void OnLoadingActionEnd();
    void OnFinishCutscene(bool IsSkipped);
    void ExecuteUbergraph_PalBossBattleSequence_Opening(int32 EntryPoint);
}; // Size: 0xF8

#endif
