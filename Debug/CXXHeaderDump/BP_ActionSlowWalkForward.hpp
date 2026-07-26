#ifndef UE4SS_SDK_BP_ActionSlowWalkForward_HPP
#define UE4SS_SDK_BP_ActionSlowWalkForward_HPP

class UBP_ActionSlowWalkForward_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)

    void OnEndAction();
    void TickAction(float DeltaTime);
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionSlowWalkForward(int32 EntryPoint);
}; // Size: 0x168

#endif
