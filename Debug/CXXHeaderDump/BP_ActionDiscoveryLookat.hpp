#ifndef UE4SS_SDK_BP_ActionDiscoveryLookat_HPP
#define UE4SS_SDK_BP_ActionDiscoveryLookat_HPP

class UBP_ActionDiscoveryLookat_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    class UNiagaraComponent* Niagra;                                                  // 0x0168 (size: 0x8)

    void TurnToTargetOneFrame();
    void OnFinishedFX(class UNiagaraComponent* PSystem);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionDiscoveryLookat(int32 EntryPoint);
}; // Size: 0x170

#endif
