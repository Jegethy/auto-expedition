#ifndef UE4SS_SDK_BP_PalIncidentNPCTalk_HPP
#define UE4SS_SDK_BP_PalIncidentNPCTalk_HPP

class UBP_PalIncidentNPCTalk_C : public UBP_PalIncidentBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    bool IsTalking;                                                                   // 0x0168 (size: 0x1)
    class ABP_PalIncidentCamera_C* Camera;                                            // 0x0170 (size: 0x8)
    class AActor* PlayerViewTarget;                                                   // 0x0178 (size: 0x8)
    bool IsDelayFinish;                                                               // 0x0180 (size: 0x1)
    double DelayFinishElapsedTime;                                                    // 0x0188 (size: 0x8)
    bool IsPlayerDead;                                                                // 0x0190 (size: 0x1)

    void StopLookAt();
    void StartLookAt();
    void DisableTalkMouth();
    void Enable Talk Mouth();
    void OnTeleportMoveEnd();
    void UnbindTalkPlayer();
    void BindTalkPlayer();
    void CancelTalk();
    void UnregisterEndTalkEvent();
    void OnEndTalkFlow(class UPalNPCTalkFlowComponent* SelfComponent);
    void StartTalkFlow();
    void OnDamageReaction(FPalDamageRactionInfo DamageReactionInfo);
    void OnTalkCharacterBattleModeChanged(bool IsBattle);
    void On Talk Character Captured();
    void OnTalkCharacterDead(FPalDeadInfo Info);
    void Terminate();
    void Set Disable Movement For Target(bool isDisable);
    void FindTalkCameraLocation_NoHitPlayer(FVector PlayerLocation, FVector TargetLocation, FVector TalkCameraLocation, bool& Result, FVector& NewTalkCameraLocation);
    void DetachCamera(double BlendTime);
    void AttachCamera();
    void CreateCamera();
    void GetTalkPlayer(class APalPlayerCharacter*& TalkPlayer);
    void GetTalkerActor(class AActor*& TalkActor);
    void GetTalkerCharacter(class APalCharacter*& TalkCharacter);
    void Tick_DelayFinish(double DeltaTime);
    void Tick_Talking(double DeltaTime);
    void Setup(bool& Talkable);
    void StartTalk();
    void OnBegin();
    void Tick(float DeltaTime);
    void OnEnd();
    void OnGenerated();
    void OnInitialized();
    void OnForceStop();
    void OnCanceled();
    void ExecuteUbergraph_BP_PalIncidentNPCTalk(int32 EntryPoint);
}; // Size: 0x191

#endif
