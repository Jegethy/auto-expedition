#ifndef UE4SS_SDK_BP_Action_Cooking_NPC_HPP
#define UE4SS_SDK_BP_Action_Cooking_NPC_HPP

class UBP_Action_Cooking_NPC_C : public UBP_ActionCooking_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01B8 (size: 0x8)
    class ABP_Prop_Base_C* Prop;                                                      // 0x01C0 (size: 0x8)

    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Cooking_NPC(int32 EntryPoint);
}; // Size: 0x1C8

#endif
