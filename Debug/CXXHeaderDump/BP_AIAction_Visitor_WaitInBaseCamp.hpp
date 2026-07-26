#ifndef UE4SS_SDK_BP_AIAction_Visitor_WaitInBaseCamp_HPP
#define UE4SS_SDK_BP_AIAction_Visitor_WaitInBaseCamp_HPP

class UBP_AIAction_Visitor_WaitInBaseCamp_C : public UBP_AIAction_NPC_Relax_Wander_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F0 (size: 0x8)
    double Timer;                                                                     // 0x02F8 (size: 0x8)
    int32 ReturnTimeMinutes;                                                          // 0x0300 (size: 0x4)
    FBP_AIAction_Visitor_WaitInBaseCamp_COnWaitTimeFinished OnWaitTimeFinished;       // 0x0308 (size: 0x10)
    void OnWaitTimeFinished();

    void Sight Check(EPalAIResponseType CurrentState, bool OverrideIsDamage, class AActor*& Target, EPalAIResponseType& ResponseType);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp(int32 EntryPoint);
    void OnWaitTimeFinished__DelegateSignature();
}; // Size: 0x318

#endif
