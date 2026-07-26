#ifndef UE4SS_SDK_BP_PalCutsceneCamera_HPP
#define UE4SS_SDK_BP_PalCutsceneCamera_HPP

class ABP_PalCutsceneCamera_C : public ACineCameraActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A20 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x0A28 (size: 0x8)
    TMap<class EPalBossType, class TSoftClassPtr<UWBP_BossDemoBase_C>> BossDemoWidgetMap; // 0x0A30 (size: 0x50)
    class UAsyncAction_CreateWidgetAsync* BossDemoLoadAsyncAction;                    // 0x0A80 (size: 0x8)
    EPalBossType WaitLoadWidgetBossType;                                              // 0x0A88 (size: 0x1)
    class UWBP_BossDemoBase_C* DisplayWidget;                                         // 0x0A90 (size: 0x8)

    void StopBossDemoWidget();
    void DisplayLoadedBossDemoWidget();
    void PreSetupBossDemoCapture();
    void OnComplete_42DB55244656A42BFC71E984CB1360D8(class UUserWidget* UserWidget);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void StartLoadBossDemoWidgetAsync(EPalBossType BossType);
    void ExecuteUbergraph_BP_PalCutsceneCamera(int32 EntryPoint);
}; // Size: 0xA98

#endif
