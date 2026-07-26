#ifndef UE4SS_SDK_BP_AudioSetting_HPP
#define UE4SS_SDK_BP_AudioSetting_HPP

class UBP_AudioSetting_C : public UPalAudioSettingSystem
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0100 (size: 0x8)
    TMap<EPalAudioBus, double> BusVolumes;                                            // 0x0108 (size: 0x50)
    TMap<EPalAudioBus, double> BusVolumes_Debug;                                      // 0x0158 (size: 0x50)
    TMap<class EPalAudioBus, class bool> BusMute;                                     // 0x01A8 (size: 0x50)
    TMap<class EPalAudioBus, class bool> BusMute_Debug;                               // 0x01F8 (size: 0x50)
    TMap<class EPalAudioBus, class FFloatContainer_FloatPair> BusVolumes_0;           // 0x0248 (size: 0x50)
    FTimerHandle DelaySettingAudioSwitchTimerHandle;                                  // 0x0298 (size: 0x8)
    FPalOptionAudioSettings CachedAudioSettings;                                      // 0x02A0 (size: 0x24)
    TSoftObjectPtr<UObject> CachedWorldContextObject;                                 // 0x02C8 (size: 0x30)

    void UpdateAudioSwitchInternal(class UObject* WorldContextObject, FPalOptionAudioSettings AudioSettings);
    void DelaySetupAudioSwitch_Timer();
    void UpdateAudioSwitch(const class UObject* WorldContextObject, const FPalOptionAudioSettings& NewAudioSettings);
    bool IsAudioBusMute(EPalAudioBus AudioBus);
    void SetAudioBusMute_Impl(EPalAudioBus AudioBus, bool IsMute);
    void Set Audio Bus Volume Impl(EPalAudioBus AudioBus, FName Key, double Volume);
    void UpdateAudioVolume(EPalAudioBus AudioBus);
    void Initialize_Impl();
    void IsMuteFromDebugSetting(EPalAudioBus AudioBus, bool& IsMute);
    void GetVolumeFromDebugSetting(EPalAudioBus AudioBus, double& Volume);
    void IsMuteFromMap(EPalAudioBus AuduiBus, TMap<class EPalAudioBus, class bool> ValMap, bool& Find, bool& IsMute);
    void GetVolumeFromMap(EPalAudioBus AuduiBus, TMap<EPalAudioBus, double> ValMap, bool& Find, double& Volume);
    void SetMuteToMap(EPalAudioBus AudioBus, bool IsMute, TMap<class EPalAudioBus, class bool>& MuteMap);
    void SetVolumeToMap(EPalAudioBus AudioBus, double Volume, TMap<EPalAudioBus, double>& ValMap);
    void Initialize();
    void Tick_BP(float DeltaTime);
    void SetAudioBusMute(EPalAudioBus AudioBus, bool IsMute);
    void SetAudioBusVolume(EPalAudioBus AudioBus, const FName& Key, float Volume);
    void ExecuteUbergraph_BP_AudioSetting(int32 EntryPoint);
}; // Size: 0x2F8

#endif
