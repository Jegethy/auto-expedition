#ifndef UE4SS_SDK_BP_OilrigNPCSpawner_Mono_HPP
#define UE4SS_SDK_BP_OilrigNPCSpawner_Mono_HPP

class ABP_OilrigNPCSpawner_Mono_C : public ABP_OilrigNPCSpawnerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)

    void On Captured(class APalCharacter* SelfCharacter, class APalCharacter* Attacker);
    void On Dead(FPalDeadInfo DeadInfo);
    void InitializeSpawnedCharacter(class UPalIndividualCharacterHandle* Handle);
    void ReceiveBeginPlay();
    void OnResetOilrig_BP();
    void BlueprintTick_Spawning(float DeltaTime);
    void BlueprintTick_Despawning(float DeltaTime);
    void ExecuteUbergraph_BP_OilrigNPCSpawner_Mono(int32 EntryPoint);
}; // Size: 0x330

#endif
