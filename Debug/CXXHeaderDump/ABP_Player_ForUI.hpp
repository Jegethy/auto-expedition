#ifndef UE4SS_SDK_ABP_Player_ForUI_HPP
#define UE4SS_SDK_ABP_Player_ForUI_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_19;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_20;                                         // 0x0010 (size: 0x20)
    bool __BoolProperty_21;                                                           // 0x0030 (size: 0x1)
    float __FloatProperty_22;                                                         // 0x0034 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_23;                                // 0x0038 (size: 0x2C)
    float __FloatProperty_24;                                                         // 0x0064 (size: 0x4)
    bool __BoolProperty_25;                                                           // 0x0068 (size: 0x1)
    EAnimSyncMethod __EnumProperty_26;                                                // 0x0069 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_27;                              // 0x006A (size: 0x1)
    FName __NameProperty_28;                                                          // 0x006C (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0078 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F8 (size: 0x18)

}; // Size: 0x110

class UABP_Player_ForUI_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0388 (size: 0xC8)
    FAnimNode_Fabrik AnimGraphNode_Fabrik;                                            // 0x0450 (size: 0x1F0)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0640 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0660 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0680 (size: 0x48)
    FTransform IKPoint;                                                               // 0x06D0 (size: 0x60)
    bool IsIK;                                                                        // 0x0730 (size: 0x1)
    class UAnimSequenceBase* AnimToPlay;                                              // 0x0738 (size: 0x8)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void OnWeaponChange();
    void ExecuteUbergraph_ABP_Player_ForUI(int32 EntryPoint);
}; // Size: 0x740

#endif
