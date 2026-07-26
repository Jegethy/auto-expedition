#ifndef UE4SS_SDK_ABP_GrassMammoth_Implementation_HPP
#define UE4SS_SDK_ABP_GrassMammoth_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_83;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_84;                                                          // 0x000C (size: 0x8)
    FName __NameProperty_85;                                                          // 0x0014 (size: 0x8)
    bool __BoolProperty_86;                                                           // 0x001C (size: 0x1)
    float __FloatProperty_87;                                                         // 0x0020 (size: 0x4)
    float __FloatProperty_88;                                                         // 0x0024 (size: 0x4)
    bool __BoolProperty_89;                                                           // 0x0028 (size: 0x1)
    EAnimSyncMethod __EnumProperty_90;                                                // 0x0029 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_91;                              // 0x002A (size: 0x1)
    FName __NameProperty_92;                                                          // 0x002C (size: 0x8)
    FName __NameProperty_93;                                                          // 0x0034 (size: 0x8)
    FName __NameProperty_94;                                                          // 0x003C (size: 0x8)
    FName __NameProperty_95;                                                          // 0x0044 (size: 0x8)
    FName __NameProperty_96;                                                          // 0x004C (size: 0x8)
    FName __NameProperty_97;                                                          // 0x0054 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_98;                                         // 0x0060 (size: 0x20)
    FName __NameProperty_99;                                                          // 0x0080 (size: 0x8)
    FName __NameProperty_100;                                                         // 0x0088 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0090 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0110 (size: 0x18)

}; // Size: 0x128

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)

}; // Size: 0x8

class UABP_GrassMammoth_Implementation_C : public UPalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x06E8 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x06F0 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x06F8 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_8;                                              // 0x0700 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_8;                        // 0x0720 (size: 0xC8)
    FAnimNode_IKRig AnimGraphNode_IKRig;                                              // 0x07E8 (size: 0x1E0)
    FAnimNode_ControlRig AnimGraphNode_ControlRig;                                    // 0x09C8 (size: 0x470)
    FAnimNode_Root AnimGraphNode_Root_7;                                              // 0x0E38 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_7;                        // 0x0E58 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_6;                                              // 0x0F20 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_6;                        // 0x0F40 (size: 0xC8)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace;        // 0x1008 (size: 0x118)
    FAnimNode_Root AnimGraphNode_Root_5;                                              // 0x1120 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_5;                        // 0x1140 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_4;                                              // 0x1208 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_4;                        // 0x1228 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_3;                                              // 0x12F0 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3;                        // 0x1310 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_2;                                              // 0x13D8 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2;                        // 0x13F8 (size: 0xC8)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x14C0 (size: 0x250)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x1710 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x1730 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x1750 (size: 0x250)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x19A0 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;                        // 0x19C0 (size: 0xC8)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x1A88 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x1B50 (size: 0x20)
    double __CustomProperty_PositionAlpha_foot_back_01_r_Goal_CF045E7E42E1A147E3E37AAFCD70CB28; // 0x1B70 (size: 0x8)
    double __CustomProperty_PositionAlpha_foot_back_01_l_Goal_CF045E7E42E1A147E3E37AAFCD70CB28; // 0x1B78 (size: 0x8)
    double __CustomProperty_PositionAlpha_leg_front_03_l_Goal_CF045E7E42E1A147E3E37AAFCD70CB28; // 0x1B80 (size: 0x8)
    double __CustomProperty_PositionAlpha_leg_front_03_r_Goal_CF045E7E42E1A147E3E37AAFCD70CB28; // 0x1B88 (size: 0x8)
    FVector2D LeaningVelocity;                                                        // 0x1B90 (size: 0x10)
    FVector LookAtWorldLocation;                                                      // 0x1BA0 (size: 0x18)

    void FootIKOverride(FPoseLink InPose_0, FPoseLink& FootIKOverride);
    void SwimLeaningOverride(FPoseLink InPose_3, FVector2D LeaningVelocity, FPoseLink& SwimLeaningOverride);
    void WalkLeaningOverride(FPoseLink InPose_2, FVector2D LeaningVelocity, FPoseLink& WalkLeaningOverride);
    void FlyLeaningOverride(FPoseLink InPose_1, FVector2D LeaningVelocity, FPoseLink& FlyLeaningOverride);
    void CustomOverride(FPoseLink PrePose, FPalCustomAnimOverrideData CustomData, FPoseLink& CustomOverride);
    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_GrassMammoth_Implementation(int32 EntryPoint);
}; // Size: 0x1BB8

#endif
