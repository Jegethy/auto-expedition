#ifndef UE4SS_SDK_BP_ActionSpawnOtomoPal_HPP
#define UE4SS_SDK_BP_ActionSpawnOtomoPal_HPP

class UBP_ActionSpawnOtomoPal_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    double Const_PalDeactiveTime;                                                     // 0x0168 (size: 0x8)
    double Const_PlayerMotionTime;                                                    // 0x0170 (size: 0x8)
    FVector ToOtomoDirection;                                                         // 0x0178 (size: 0x18)
    double Const_WalkSpeedRate;                                                       // 0x0190 (size: 0x8)
    class UBP_ReturnOtomoSphereComponent_C* BallComponent;                            // 0x0198 (size: 0x8)
    class UPalIndividualCharacterHandle* PreHandle;                                   // 0x01A0 (size: 0x8)

    void CompleteDeactivateOtomo();
    void DeleteBallModel();
    void AttachBallModel();
    void SetFlags(bool Disable, double Speed);
    void SetupToOtomoDirection();
    void DeactivateOtomo();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionSpawnOtomoPal(int32 EntryPoint);
}; // Size: 0x1A8

#endif
