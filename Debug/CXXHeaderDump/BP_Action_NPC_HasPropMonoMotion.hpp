#ifndef UE4SS_SDK_BP_Action_NPC_HasPropMonoMotion_HPP
#define UE4SS_SDK_BP_Action_NPC_HasPropMonoMotion_HPP

class UBP_Action_NPC_HasPropMonoMotion_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0190 (size: 0x8)
    class ABP_Prop_Base_C* PropModel;                                                 // 0x0198 (size: 0x8)
    TSubclassOf<class ABP_Prop_Base_C> PropActorClass;                                // 0x01A0 (size: 0x8)

    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_NPC_HasPropMonoMotion(int32 EntryPoint);
}; // Size: 0x1A8

#endif
