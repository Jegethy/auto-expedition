#ifndef UE4SS_SDK_ABP_Weapon_AssaultRifle_011_HPP
#define UE4SS_SDK_ABP_Weapon_AssaultRifle_011_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_7;                                                           // 0x0004 (size: 0x8)
    FName __NameProperty_8;                                                           // 0x000C (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_9;                                          // 0x0018 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0038 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00B8 (size: 0x18)

}; // Size: 0xD0

class UABP_Weapon_AssaultRifle_011_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0388 (size: 0xC8)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0450 (size: 0x48)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Weapon_AssaultRifle_011(int32 EntryPoint);
}; // Size: 0x498

#endif
