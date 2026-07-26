#ifndef UE4SS_SDK_BP_NPCCampSpawnerAntiAirBase_HPP
#define UE4SS_SDK_BP_NPCCampSpawnerAntiAirBase_HPP

class ABP_NPCCampSpawnerAntiAirBase_C : public APalNPCCampSpawnerBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    class UPalLimitVolumeSphereComponent* PalLimitVolumeSphere;                       // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* DebugMesh;                                            // 0x02C8 (size: 0x8)
    double Probability;                                                               // 0x02D0 (size: 0x8)
    class ABP_NPCCampPresetBase_C* CampObject;                                        // 0x02D8 (size: 0x8)
    FName RewardName;                                                                 // 0x02E0 (size: 0x8)
    double RespawnTime_RealMinutes;                                                   // 0x02E8 (size: 0x8)
    FTimerHandle TimerHand;                                                           // 0x02F0 (size: 0x8)
    bool SpawnPossible;                                                               // 0x02F8 (size: 0x1)
    double RespawnDistance_FromPlayer;                                                // 0x0300 (size: 0x8)
    double DisableDistance_FromBaseCamp;                                              // 0x0308 (size: 0x8)
    FF_NPCCampPreset Preset;                                                          // 0x0310 (size: 0x10)
    TArray<class UPalIndividualCharacterHandle*> CampEnemys;                          // 0x0320 (size: 0x10)
    bool LoadCamp;                                                                    // 0x0330 (size: 0x1)
    TSubclassOf<class ABP_NPCCampPresetBase_C> PresetClass;                           // 0x0338 (size: 0x8)
    TSubclassOf<class ABP_NPCCampPresetBase_C> OverridePresetClass;                   // 0x0340 (size: 0x8)

    void CREATEDELEGATE_PROXYFUNCTION_0(class UPalIndividualCharacterHandle* NewParam);
    void GetPresetClass(TSubclassOf<class ABP_NPCCampPresetBase_C>& PresetClass);
    void OnReceivedReward();
    void ResetCamp();
    FName GetRewardName();
    void SetupCampStatus();
    void Start Reset Timer(double RespawnTime);
    void OnEnemyDead(FPalDeadInfo DeadInfo);
    void OnEnemySpawned(class UPalIndividualCharacterHandle*& SpawnHandle);
    void CheckWorldLoadComplete(bool& Loaded);
    void SetSpawnAble();
    void TryCampSpawn();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_NPCCampSpawnerAntiAirBase(int32 EntryPoint);
}; // Size: 0x348

#endif
