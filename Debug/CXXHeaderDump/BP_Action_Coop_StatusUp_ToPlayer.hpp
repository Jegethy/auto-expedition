#ifndef UE4SS_SDK_BP_Action_Coop_StatusUp_ToPlayer_HPP
#define UE4SS_SDK_BP_Action_Coop_StatusUp_ToPlayer_HPP

class UBP_Action_Coop_StatusUp_ToPlayer_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)

    void OnNotifyEnd_ABB535BB4FAAC8D8FB51609FB149C834(FName NotifyName);
    void OnNotifyBegin_ABB535BB4FAAC8D8FB51609FB149C834(FName NotifyName);
    void OnInterrupted_ABB535BB4FAAC8D8FB51609FB149C834(FName NotifyName);
    void OnBlendOut_ABB535BB4FAAC8D8FB51609FB149C834(FName NotifyName);
    void OnCompleted_ABB535BB4FAAC8D8FB51609FB149C834(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Coop_StatusUp_ToPlayer(int32 EntryPoint);
}; // Size: 0x168

#endif
