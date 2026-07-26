#ifndef UE4SS_SDK_BP_PalFishingComponent_HPP
#define UE4SS_SDK_BP_PalFishingComponent_HPP

class UBP_PalFishingComponent_C : public UPalFishingComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    class APalCutsceneActor* CutsceneActor;                                           // 0x0368 (size: 0x8)
    TSubclassOf<class APalCutsceneActor> TargetCutsceneActor;                         // 0x0370 (size: 0x8)
    class UPalCutsceneComponent* CutsceneComponent;                                   // 0x0378 (size: 0x8)
    FVector CutsceneOffsetLocation;                                                   // 0x0380 (size: 0x18)
    FPalFishingCutsceneInfo FishingCutsceneInfo;                                      // 0x0398 (size: 0xD8)
    bool IsHideWeapon;                                                                // 0x0470 (size: 0x1)
    FName flagName;                                                                   // 0x0474 (size: 0x8)
    class UPalShooterComponent* ShooterComponent;                                     // 0x0480 (size: 0x8)
    bool IsStartCutscene;                                                             // 0x0488 (size: 0x1)

    void GetPlayerFootLocation(FVector SocketLocation, FVector& FloorLocation);
    void SetDisableChangeWeapon(bool isDisable);
    void CreateBindParameter(FPalFishingCutsceneInfo CutsceneInfo, class UPalCutsceneFishingBindParameter*& BindParameter);
    void SetHidePlayerUI(bool IsHide);
    void GetFadeOutParameter(class UPalHUDDispatchParameter_FadeWidget*& FadeParameter);
    void OnLoaded_E5B50C2441AF4766FDFF3BB4606F8B1A(UClass* Loaded);
    void ReceiveBeginPlay();
    void OnStartCutscene(const FPalFishingCutsceneInfo& CutsceneInfo);
    void OnFinishedCutscene(bool bIsSkipped);
    void StartCutscene();
    void OnLoadedCutsceneInfo(const FPalFishingCutsceneInfo& CutsceneInfo);
    void OnEndAim();
    void OnAttachedFloorLargePal(FVector SocketLocation, FRotator SocketRotation);
    void OnStartAim(const TArray<FPalStaticItemIdAndNum>& BaitItemInfoList, int32 SelectedIndex);
    void ExecuteUbergraph_BP_PalFishingComponent(int32 EntryPoint);
}; // Size: 0x489

#endif
