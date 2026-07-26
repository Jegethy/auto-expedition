#ifndef UE4SS_SDK_BP_NPCEmoteDetectionComponent_HPP
#define UE4SS_SDK_BP_NPCEmoteDetectionComponent_HPP

class UBP_NPCEmoteDetectionComponent_C : public UPalNPCEmoteDetectionComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00E8 (size: 0x8)
    UClass* TargetEmoteClass;                                                         // 0x00F0 (size: 0x8)
    FTimerHandle ActStopTimer;                                                        // 0x00F8 (size: 0x8)
    class APalPlayerCharacter* DetectedLocalPlayer;                                   // 0x0100 (size: 0x8)

    void CanEmote(bool& bCanEmote);
    void OnActionBegin(const class UPalActionBase* action);
    void ActEmote(UClass* Class, class AActor* ActionTarget);
    void OnLoaded_FB93EA3046670DE08CA4E3A6593D68F2(UClass* Loaded);
    void CreateDetector();
    void OnPlayerOverlapStart(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnPlayerOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveBeginPlay();
    void StopEmoteAction();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_NPCEmoteDetectionComponent(int32 EntryPoint);
}; // Size: 0x108

#endif
