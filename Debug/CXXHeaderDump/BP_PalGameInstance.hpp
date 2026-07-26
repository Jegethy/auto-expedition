#ifndef UE4SS_SDK_BP_PalGameInstance_HPP
#define UE4SS_SDK_BP_PalGameInstance_HPP

class UBP_PalGameInstance_C : public UPalGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09B8 (size: 0x8)
    class ULoadingProcessTask* CurrentLoadingTask;                                    // 0x09C0 (size: 0x8)
    class UPalHUDDispatchParameter_FadeWidget* LoadingFadeParameter;                  // 0x09C8 (size: 0x8)
    TSoftObjectPtr<UWorld> LoadWorld;                                                 // 0x09D0 (size: 0x30)
    bool ShowedCharaMake;                                                             // 0x0A00 (size: 0x1)
    TSoftClassPtr<APalCutsceneActor> OpeningActor;                                    // 0x0A08 (size: 0x30)
    FName CutsceneName;                                                               // 0x0A38 (size: 0x8)
    class APalCutsceneActor* OpeningCutscene;                                         // 0x0A40 (size: 0x8)
    FName flagName;                                                                   // 0x0A48 (size: 0x8)
    int32 PlayingID;                                                                  // 0x0A50 (size: 0x4)
    FDataTableRowHandle CreateSessionErrorMsgId;                                      // 0x0A58 (size: 0x10)
    FDataTableRowHandle CreateSessionErrorMsgId_Console;                              // 0x0A68 (size: 0x10)
    bool IsStartingGame;                                                              // 0x0A78 (size: 0x1)
    FName UIInputBlockFlagName;                                                       // 0x0A7C (size: 0x8)
    FTimerHandle PollingFadeInWaitHandle;                                             // 0x0A88 (size: 0x8)

    void IsDeadInHardcore(bool& Result);
    void SetActivePlayerActor(bool Active);
    void BP_PalGameInstance_AutoGenFunc(bool bResult);
    void Completed_32AFD11A49E65B7255FF4BA375D305CC(bool IsSuccess, FString ErrorStr);
    void LoadLevel(const TSoftObjectPtr<UWorld> Level, const FString& Options, bool AutoClose);
    void StartLoading(const class UWBP_LoadingScreen_Transition_C*& CurrentLoadingWidget);
    void LoadingFinished();
    void ShowCharacterMakeScreen();
    void OnFinishCutscene(bool IsSkipped);
    void SetupGameInit();
    void StartOpening();
    void StartGame(bool bNewGame, bool bListenServer, bool bCrossPlay);
    void カスタムイベント(bool bResult);
    void OnShowSelectRespawnMap();
    void SetPlayerSelectMap(bool IsSelecting);
    void OnCloseMap(class UPalHUDDispatchParameterBase* Param);
    void OnCompleteSetup();
    void OverrideLoadMap(const TSoftObjectPtr<UWorld>& World);
    void OnPSNChatDisabled(bool bResult);
    void PollingCheckLoadingScreen();
    void ExecuteUbergraph_BP_PalGameInstance(int32 EntryPoint);
}; // Size: 0xA90

#endif
