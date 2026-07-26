#ifndef UE4SS_SDK_BP_ArenaSequence_PreBattle_HPP
#define UE4SS_SDK_BP_ArenaSequence_PreBattle_HPP

class UBP_ArenaSequence_PreBattle_C : public UPalArenaSequenceBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0050 (size: 0x8)
    FBP_ArenaSequence_PreBattle_CActivateReadyUI ActivateReadyUI;                     // 0x0058 (size: 0x10)
    void ActivateReadyUI();

    void SetDisableLocalPlayerInput(bool isDisable);
    void ToggleMutePals(bool DisableCrying);
    void SetDisableLookAtAllPal(bool isDisable);
    void OnCameraTarget(EPalArenaPlayerIndex PlayerIndex);
    void PlayCutscene();
    void FadeIn();
    void RideLeaderPal();
    void SetupLocalPlayerCamera();
    void ActivatePals();
    void SetupFormation();
    void OnBeginSequence();
    void OnEndSequence();
    void OnFinishCutscene(bool bIsSkipped);
    void カスタムイベント();
    void ExecuteUbergraph_BP_ArenaSequence_PreBattle(int32 EntryPoint);
    void ActivateReadyUI__DelegateSignature();
}; // Size: 0x68

#endif
