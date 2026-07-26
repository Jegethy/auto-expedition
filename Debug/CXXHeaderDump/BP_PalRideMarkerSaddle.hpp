#ifndef UE4SS_SDK_BP_PalRideMarkerSaddle_HPP
#define UE4SS_SDK_BP_PalRideMarkerSaddle_HPP

class UBP_PalRideMarkerSaddle_C : public UPalRideMarkerComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0660 (size: 0x8)
    class UNiagaraComponent* Effect;                                                  // 0x0668 (size: 0x8)
    double MinSpeed;                                                                  // 0x0670 (size: 0x8)
    double MaxSpeed;                                                                  // 0x0678 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnChangeRiding_イベント_0(bool IsEnable);
    void ExecuteUbergraph_BP_PalRideMarkerSaddle(int32 EntryPoint);
}; // Size: 0x680

#endif
