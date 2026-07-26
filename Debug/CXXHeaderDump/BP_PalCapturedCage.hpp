#ifndef UE4SS_SDK_BP_PalCapturedCage_HPP
#define UE4SS_SDK_BP_PalCapturedCage_HPP

class ABP_PalCapturedCage_C : public APalCapturedCage
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    class UBoxComponent* Box7;                                                        // 0x02F0 (size: 0x8)
    class UBoxComponent* Box6;                                                        // 0x02F8 (size: 0x8)
    class UBoxComponent* Box_PlayerOnly;                                              // 0x0300 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0308 (size: 0x8)
    class UBoxComponent* DoorBoxCollision;                                            // 0x0310 (size: 0x8)
    class UStaticMeshComponent* LockMesh;                                             // 0x0318 (size: 0x8)
    class UStaticMeshComponent* DoorMesh;                                             // 0x0320 (size: 0x8)
    class UStaticMeshComponent* BodyMash;                                             // 0x0328 (size: 0x8)
    class UBoxComponent* Box5;                                                        // 0x0330 (size: 0x8)
    class UBoxComponent* Box4;                                                        // 0x0338 (size: 0x8)
    class UBoxComponent* box3;                                                        // 0x0340 (size: 0x8)
    class UBoxComponent* box2;                                                        // 0x0348 (size: 0x8)
    class UBoxComponent* box1;                                                        // 0x0350 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x0358 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0360 (size: 0x8)
    bool Accessed;                                                                    // 0x0368 (size: 0x1)
    FTimerHandle OpenAnimeTimerHandle;                                                // 0x0370 (size: 0x8)
    double DoorOpenTimer;                                                             // 0x0378 (size: 0x8)
    double Const_DoorOpenSpeed;                                                       // 0x0380 (size: 0x8)
    class UCurveFloat* Const_DoorOpenCurve;                                           // 0x0388 (size: 0x8)
    EPalActionType PlayerActionType;                                                  // 0x0390 (size: 0x1)
    FBP_PalCapturedCage_COnCaptured OnCaptured;                                       // 0x0398 (size: 0x10)
    void OnCaptured();
    double DoorFinishAngle;                                                           // 0x03A8 (size: 0x8)

    void OnSuccessOpenDoor_Client(class APalPlayerCharacter* Player);
    void OpenDoor_BP(bool bIsAnimSkip);
    void SetupSpawnPal();
    FName GetCampSpawnerName();
    void Disable Lock Mesh Outline(class AActor* Other, TScriptInterface<class IPalInteractiveObjectComponentInterface> Component);
    void Enable Lock Mesh Outline(class AActor* Other, TScriptInterface<class IPalInteractiveObjectComponentInterface> Component);
    void OnFinishRescue(class AActor* Player, EPalInteractiveObjectIndicatorType NewParam);
    void StopPlayerAnime(class AActor* Player, EPalInteractiveObjectIndicatorType NewParam);
    void StartPlayerAnime(class AActor* Player, EPalInteractiveObjectIndicatorType NewParam);
    void DoorOpenAnimeLoop();
    void PlayDoorOpenAnime();
    EPalInteractiveObjectIndicatorType GetIndicatorType();
    void ReceiveBeginPlay();
    void OpenDoor();
    void ResetCageByOutside_BP();
    void FullOpenDoor();
    void StartCaptureEffect_ServerBP(class APalPlayerCharacter* Player);
    void ExecuteUbergraph_BP_PalCapturedCage(int32 EntryPoint);
    void OnCaptured__DelegateSignature();
}; // Size: 0x3B0

#endif
