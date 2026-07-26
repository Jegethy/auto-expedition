#ifndef UE4SS_SDK_BP_MonsterAIController_MarchantPal_HPP
#define UE4SS_SDK_BP_MonsterAIController_MarchantPal_HPP

class ABP_MonsterAIController_MarchantPal_C : public ABP_MonsterAIControllerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)
    FVector Spawned Position;                                                         // 0x0598 (size: 0x18)
    bool EscapeMode;                                                                  // 0x05B0 (size: 0x1)
    bool DespawnDelay;                                                                // 0x05B1 (size: 0x1)

    void SetupSpawnedPosition();
    void IsEscapeEnd(bool& IsEscapeEnd);
    void ReceiveTick(float DeltaSeconds);
    void ReceivePossess(class APawn* PossessedPawn);
    void カスタムイベント(FPalInstanceID ID);
    void StartEscape(class AActor* TargetActor);
    void カスタムイベント_1(FPalDeadInfo DeadInfo);
    void カスタムイベント_2(class UPalVisualEffectBase* VisualEffect);
    void ExecuteUbergraph_BP_MonsterAIController_MarchantPal(int32 EntryPoint);
}; // Size: 0x5B2

#endif
