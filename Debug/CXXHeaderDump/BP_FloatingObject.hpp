#ifndef UE4SS_SDK_BP_FloatingObject_HPP
#define UE4SS_SDK_BP_FloatingObject_HPP

class UBP_FloatingObject_C : public UFloatingObjectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02A8 (size: 0x8)
    FVector BeginPos;                                                                 // 0x02B0 (size: 0x18)
    double Height;                                                                    // 0x02C8 (size: 0x8)
    double Speed;                                                                     // 0x02D0 (size: 0x8)

    void Setup(class USceneComponent* InScene, FVector InBeginPos);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_FloatingObject(int32 EntryPoint);
}; // Size: 0x2D8

#endif
