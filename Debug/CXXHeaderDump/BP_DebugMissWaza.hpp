#ifndef UE4SS_SDK_BP_DebugMissWaza_HPP
#define UE4SS_SDK_BP_DebugMissWaza_HPP

class UBP_DebugMissWaza_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    double Scale;                                                                     // 0x0168 (size: 0x8)
    double YawSpeed;                                                                  // 0x0170 (size: 0x8)
    double Sequence;                                                                  // 0x0178 (size: 0x8)
    double Yaw;                                                                       // 0x0180 (size: 0x8)
    double tempDeltaTime;                                                             // 0x0188 (size: 0x8)
    FVector Pos;                                                                      // 0x0190 (size: 0x18)
    FVector ShootModeCenterPos;                                                       // 0x01A8 (size: 0x18)
    double ConstShootInterval;                                                        // 0x01C0 (size: 0x8)
    double ShootTimer;                                                                // 0x01C8 (size: 0x8)

    void Shoot();
    void SetTransform();
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_DebugMissWaza(int32 EntryPoint);
}; // Size: 0x1D0

#endif
