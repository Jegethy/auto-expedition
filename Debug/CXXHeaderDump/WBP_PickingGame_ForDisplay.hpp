#ifndef UE4SS_SDK_WBP_PickingGame_ForDisplay_HPP
#define UE4SS_SDK_WBP_PickingGame_ForDisplay_HPP

class UWBP_PickingGame_ForDisplay_C : public UPalUIPickingGame
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UWidgetAnimation* Anm_SetPick;                                              // 0x0488 (size: 0x8)
    class UWidgetAnimation* Anm_Fail;                                                 // 0x0490 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0498 (size: 0x8)
    class UWidgetAnimation* Anm_Success;                                              // 0x04A0 (size: 0x8)
    class UWidgetAnimation* Anm_KeyShake;                                             // 0x04A8 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Hold;                                   // 0x04B0 (size: 0x8)
    class UCanvasPanel* Canvas_Key;                                                   // 0x04B8 (size: 0x8)
    class UCanvasPanel* Canvas_KeyHole;                                               // 0x04C0 (size: 0x8)
    class UCanvasPanel* Canvas_PickingTool;                                           // 0x04C8 (size: 0x8)
    class UCanvasPanel* Canvas_ResultText_Fail;                                       // 0x04D0 (size: 0x8)
    class UCanvasPanel* Canvas_ResultText_Success;                                    // 0x04D8 (size: 0x8)
    class UImage* Image_Eff_RoundBlur;                                                // 0x04E0 (size: 0x8)
    class UImage* Image_Eff_Square_0;                                                 // 0x04E8 (size: 0x8)
    class UImage* Image_Eff_Square_1;                                                 // 0x04F0 (size: 0x8)
    class UImage* Image_Frame_Shadow;                                                 // 0x04F8 (size: 0x8)
    class UImage* Image_Key;                                                          // 0x0500 (size: 0x8)
    class UImage* Image_KeyHole;                                                      // 0x0508 (size: 0x8)
    class UImage* Image_LockBase;                                                     // 0x0510 (size: 0x8)
    class UImage* Image_PickingTool;                                                  // 0x0518 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Break;                                             // 0x0520 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Success;                                           // 0x0528 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_Cancel;                         // 0x0530 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_TurnKey;                        // 0x0538 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_TurnPick;                       // 0x0540 (size: 0x8)
    bool IsTurningKey;                                                                // 0x0548 (size: 0x1)
    bool IsLeftInput;                                                                 // 0x0549 (size: 0x1)
    bool IsRightInput;                                                                // 0x054A (size: 0x1)
    bool IsStoppedKey;                                                                // 0x054B (size: 0x1)
    float LastKeyPosition;                                                            // 0x054C (size: 0x4)
    class UCurveFloat* KeyTurnSpeedCurve;                                             // 0x0550 (size: 0x8)
    double KeyTurnTime;                                                               // 0x0558 (size: 0x8)
    double ToolMoveSpeedPerSecond;                                                    // 0x0560 (size: 0x8)
    FTimerHandle RestartTimer;                                                        // 0x0568 (size: 0x8)
    FTimerHandle ClearGameCloseTimer;                                                 // 0x0570 (size: 0x8)
    bool IsClear;                                                                     // 0x0578 (size: 0x1)
    double AnalogValue;                                                               // 0x0580 (size: 0x8)
    class UForceFeedbackComponent* KeyTurnStopForceFeedback;                          // 0x0588 (size: 0x8)
    TMap<class EPalPickingGameDifficultyType, class TSoftObjectPtr<UTexture2D>> KeyHoleTextureMap; // 0x0590 (size: 0x50)
    float CachedFinalAKETriggerToolPosition;                                          // 0x05E0 (size: 0x4)
    FTimerHandle BlockAKETriggerTImer;                                                // 0x05E8 (size: 0x8)
    bool bIsBlockPickAKE;                                                             // 0x05F0 (size: 0x1)
    bool IsFailed;                                                                    // 0x05F1 (size: 0x1)

    void SequenceEvent__ENTRYPOINTWBP_PickingGame_ForDisplay_2();
    void SequenceEvent__ENTRYPOINTWBP_PickingGame_ForDisplay_1();
    void SequenceEvent__ENTRYPOINTWBP_PickingGame_ForDisplay_0();
    void SequenceEvent__ENTRYPOINTWBP_PickingGame_ForDisplay();
    void SetGameResult(const bool bResult);
    class UPalPickingGameProcessor* RegisterPickinGameProcessor();
    void StartForceFeedback();
    void StopForceFeedback();
    void CalcToolPosition_ForMouse();
    void CalcToolTurnSpeed(double DeltaTime, double& Speed);
    void OnTimer_ClearGame();
    void StopTurnPick_L();
    void StartTurnPick_L();
    void StopTurnPick_R();
    void StartTurnPick_R();
    void StopTurnKey();
    void StartTurnKey();
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void OnChangedInputMethod(ECommonInputType bNewInputType);
    void CalcKeyTurnSpeed(double DeltaTime, double& Speed);
    void OnTimer_Restart();
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnStartGame(const FPalPickingGameSettingData NewSettingData);
    void OnFailGame();
    void OnSuccessGame();
    void OnUpdateKeyPosition(float KeyPositon);
    void OnUpdatePickingToolPosition(float ToolPosition);
    void OnStopTurningKey();
    void UnbindEvent();
    void SetupEvent();
    void UpdateKeyHoleTexture();
    void SequenceEvent();
    void SequenceEvent_0();
    void SequenceEvent_1();
    void SequenceEvent_2();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnSetup();
    void Destruct();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    void Construct();
    void PlayPickSound();
    void カスタムイベント();
    void ExecuteUbergraph_WBP_PickingGame_ForDisplay(int32 EntryPoint);
}; // Size: 0x5F2

#endif
