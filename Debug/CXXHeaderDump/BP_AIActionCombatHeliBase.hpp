#ifndef UE4SS_SDK_BP_AIActionCombatHeliBase_HPP
#define UE4SS_SDK_BP_AIActionCombatHeliBase_HPP

class UBP_AIActionCombatHeliBase_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0138 (size: 0x8)
    bool NewVar;                                                                      // 0x0140 (size: 0x1)
    FVector OilrigCenterPoint;                                                        // 0x0148 (size: 0x18)
    double Const_FindTargetRange;                                                     // 0x0160 (size: 0x8)

    void IsValid Target(class AActor* TargetActor, bool& Validd);
    void FindTarget(class AActor*& TargetActor);
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIActionCombatHeliBase(int32 EntryPoint);
}; // Size: 0x168

#endif
