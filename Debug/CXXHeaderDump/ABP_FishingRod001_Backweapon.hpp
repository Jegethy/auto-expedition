#ifndef UE4SS_SDK_ABP_FishingRod001_Backweapon_HPP
#define UE4SS_SDK_ABP_FishingRod001_Backweapon_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_20;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_21;                                         // 0x0010 (size: 0x20)
    float __FloatProperty_22;                                                         // 0x0030 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_23;                                // 0x0034 (size: 0x2C)
    float __FloatProperty_24;                                                         // 0x0060 (size: 0x4)
    bool __BoolProperty_25;                                                           // 0x0064 (size: 0x1)
    EAnimSyncMethod __EnumProperty_26;                                                // 0x0065 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_27;                              // 0x0066 (size: 0x1)
    FName __NameProperty_28;                                                          // 0x0068 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0070 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F0 (size: 0x18)

}; // Size: 0x108

class UABP_FishingRod001_Backweapon_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0368 (size: 0x20)
    FAnimNode_RigidBody AnimGraphNode_RigidBody;                                      // 0x0390 (size: 0x9A0)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0D30 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0D50 (size: 0x20)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0D70 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0DB8 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void SetRodBendAmount(double BendAmount);
    void ExecuteUbergraph_ABP_FishingRod001_Backweapon(int32 EntryPoint);
}; // Size: 0xE00

#endif
