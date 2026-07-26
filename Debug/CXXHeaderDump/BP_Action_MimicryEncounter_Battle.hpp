#ifndef UE4SS_SDK_BP_Action_MimicryEncounter_Battle_HPP
#define UE4SS_SDK_BP_Action_MimicryEncounter_Battle_HPP

class UBP_Action_MimicryEncounter_Battle_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)

    void OnNotifyEnd_4705D5AE4B639DE01B676CBE7405FAB8(FName NotifyName);
    void OnNotifyBegin_4705D5AE4B639DE01B676CBE7405FAB8(FName NotifyName);
    void OnInterrupted_4705D5AE4B639DE01B676CBE7405FAB8(FName NotifyName);
    void OnBlendOut_4705D5AE4B639DE01B676CBE7405FAB8(FName NotifyName);
    void OnCompleted_4705D5AE4B639DE01B676CBE7405FAB8(FName NotifyName);
    void OnBeginAction();
    void ExecuteUbergraph_BP_Action_MimicryEncounter_Battle(int32 EntryPoint);
}; // Size: 0x168

#endif
