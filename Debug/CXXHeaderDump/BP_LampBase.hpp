#ifndef UE4SS_SDK_BP_LampBase_HPP
#define UE4SS_SDK_BP_LampBase_HPP

class ABP_LampBase_C : public APalPlayerLampBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    TSoftObjectPtr<APPSkyCreator> SkyCreatorCache;                                    // 0x02B8 (size: 0x30)
    FTimerHandle TimerHandle;                                                         // 0x02E8 (size: 0x8)
    FName IgnoreTimerLightCurveFlagKey;                                               // 0x02F0 (size: 0x8)
    bool CachedPrevIsInWorldTree;                                                     // 0x02F8 (size: 0x1)

    void IsInWorldTree(bool& InSide);
    void OnTimer_CheckLightEnable();
    void CheckLightEnable(bool bForceCallEvent);
    void ReceiveBeginPlay();
    void OnChangeCrouchDelegate_イベント_0(class UPalCharacterMovementComponent* Component, bool IsInCrouch);
    void ExecuteUbergraph_BP_LampBase(int32 EntryPoint);
}; // Size: 0x2F9

#endif
