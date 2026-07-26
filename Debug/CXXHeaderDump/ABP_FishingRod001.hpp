#ifndef UE4SS_SDK_ABP_FishingRod001_HPP
#define UE4SS_SDK_ABP_FishingRod001_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_32;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_33;                                                          // 0x000C (size: 0x8)
    TEnumAsByte<ERefPoseType> __ByteProperty_34;                                      // 0x0014 (size: 0x1)
    FAnimNodeFunctionRef __StructProperty_35;                                         // 0x0018 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0038 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00B8 (size: 0x18)

}; // Size: 0xD0

class UABP_FishingRod001_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0388 (size: 0xC8)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x0450 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0498 (size: 0x48)
    FAnimNode_RefPose AnimGraphNode_LocalRefPose_1;                                   // 0x04E0 (size: 0x10)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;                              // 0x04F0 (size: 0xC8)
    FAnimNode_RigidBody AnimGraphNode_RigidBody;                                      // 0x05C0 (size: 0x9A0)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0F60 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0F80 (size: 0x20)
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;                                     // 0x0FA0 (size: 0x10)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0FB0 (size: 0xE0)
    double RigidBodyBlendWeight;                                                      // 0x1090 (size: 0x8)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void SetDisableRigidBodyBlend(bool isDisable);
    void ExecuteUbergraph_ABP_FishingRod001(int32 EntryPoint);
}; // Size: 0x1098

#endif
