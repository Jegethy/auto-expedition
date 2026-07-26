#ifndef UE4SS_SDK_BP_ActionSurprised_HPP
#define UE4SS_SDK_BP_ActionSurprised_HPP

class UBP_ActionSurprised_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    class UNiagaraComponent* Niagra;                                                  // 0x0168 (size: 0x8)
    double Timer;                                                                     // 0x0170 (size: 0x8)

    void ChangeFace(bool Angry);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_ActionSurprised(int32 EntryPoint);
}; // Size: 0x178

#endif
