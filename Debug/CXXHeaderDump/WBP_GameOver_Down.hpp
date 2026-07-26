#ifndef UE4SS_SDK_WBP_GameOver_Down_HPP
#define UE4SS_SDK_WBP_GameOver_Down_HPP

class UWBP_GameOver_Down_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_CountDown;                              // 0x0480 (size: 0x8)
    class UCanvasPanel* CanvasPanel_CountDown;                                        // 0x0488 (size: 0x8)
    class UImage* RoundProgress;                                                      // 0x0490 (size: 0x8)
    class UWBP_Ingame_Interact_C* WBP_Ingame_Interact;                                // 0x0498 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x04A0 (size: 0x8)
    bool CurrentInRescue;                                                             // 0x04A8 (size: 0x1)
    FPalDataTableRowName_UIInputAction UIInputAction;                                 // 0x04AC (size: 0x8)
    FPalUIActionBindData Trigger Action Handle;                                       // 0x04B4 (size: 0x4)
    FPalUIActionBindData End Trigger Actionhandle;                                    // 0x04B8 (size: 0x4)
    double longPushTime;                                                              // 0x04C0 (size: 0x8)
    bool PressingGiveup;                                                              // 0x04C8 (size: 0x1)
    double CurrentPressedTime;                                                        // 0x04D0 (size: 0x8)
    FWBP_GameOver_Down_COnGiveup OnGiveup;                                            // 0x04D8 (size: 0x10)
    void OnGiveup();
    FWBP_GameOver_Down_COnCreateRescueWidget OnCreateRescueWidget;                    // 0x04E8 (size: 0x10)
    void OnCreateRescueWidget(class UWBP_GameOver_Rescue_C* Widget);
    FDataTableRowHandle GiveupMsgId;                                                  // 0x04F8 (size: 0x10)
    bool Is Partner Skill Revive;                                                     // 0x0508 (size: 0x1)
    FPalDataTableRowName_UIInputAction OpenChatActionName;                            // 0x050C (size: 0x8)

    void GetDesiredFocusTargetInternal(class UWidget*& Widget);
    void OnCompleteChat();
    void OnRequestOpenChat();
    void CencelPartnerSkillReive();
    class UWidget* BP_GetDesiredFocusTarget();
    void Setup();
    void EndTriggerInteract();
    void StartTriggerInteract();
    void Unregister Action();
    void RegisterAction(bool isInputConsume);
    void UpdateDying(double Remain, double Max);
    void OnSetup();
    void CloseWidget();
    void SetInRescue(bool InRescue);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destruct();
    void Construct();
    void CustomEvent();
    void ExecuteUbergraph_WBP_GameOver_Down(int32 EntryPoint);
    void OnCreateRescueWidget__DelegateSignature(class UWBP_GameOver_Rescue_C* Widget);
    void OnGiveup__DelegateSignature();
}; // Size: 0x514

#endif
