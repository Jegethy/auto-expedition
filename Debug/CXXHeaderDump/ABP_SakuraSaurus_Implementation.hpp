#ifndef UE4SS_SDK_ABP_SakuraSaurus_Implementation_HPP
#define UE4SS_SDK_ABP_SakuraSaurus_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_86;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_87;                                                          // 0x000C (size: 0x8)
    FName __NameProperty_88;                                                          // 0x0014 (size: 0x8)
    FName __NameProperty_89;                                                          // 0x001C (size: 0x8)
    FName __NameProperty_90;                                                          // 0x0024 (size: 0x8)
    FName __NameProperty_91;                                                          // 0x002C (size: 0x8)
    FName __NameProperty_92;                                                          // 0x0034 (size: 0x8)
    FName __NameProperty_93;                                                          // 0x003C (size: 0x8)
    FName __NameProperty_94;                                                          // 0x0044 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_95;                                         // 0x0050 (size: 0x20)
    FName __NameProperty_96;                                                          // 0x0070 (size: 0x8)
    FName __NameProperty_97;                                                          // 0x0078 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0080 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0100 (size: 0x18)

}; // Size: 0x118

class UABP_SakuraSaurus_Implementation_C : public UPalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x06E8 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x06F0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_8;                                              // 0x06F8 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_8;                        // 0x0718 (size: 0xC8)
    FAnimNode_ControlRig AnimGraphNode_ControlRig;                                    // 0x07E0 (size: 0x470)
    FAnimNode_IKRig AnimGraphNode_IKRig;                                              // 0x0C50 (size: 0x1E0)
    FAnimNode_Root AnimGraphNode_Root_7;                                              // 0x0E30 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_7;                        // 0x0E50 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_6;                                              // 0x0F18 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_6;                        // 0x0F38 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_5;                                              // 0x1000 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_5;                        // 0x1020 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_4;                                              // 0x10E8 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_4;                        // 0x1108 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_3;                                              // 0x11D0 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3;                        // 0x11F0 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_2;                                              // 0x12B8 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2;                        // 0x12D8 (size: 0xC8)
    FAnimNode_LookAt AnimGraphNode_LookAt_4;                                          // 0x13A0 (size: 0x250)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x15F0 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x1610 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt_3;                                          // 0x1630 (size: 0x250)
    FAnimNode_LookAt AnimGraphNode_LookAt_2;                                          // 0x1880 (size: 0x250)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x1AD0 (size: 0x250)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x1D20 (size: 0x250)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x1F70 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;                        // 0x1F90 (size: 0xC8)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x2058 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x2120 (size: 0x20)
    double __CustomProperty_PositionAlpha_leg_front_03_l_Goal_D20958294F75A2AC205398B8BD512C6D; // 0x2140 (size: 0x8)
    double __CustomProperty_PositionAlpha_leg_front_03_r_Goal_D20958294F75A2AC205398B8BD512C6D; // 0x2148 (size: 0x8)
    double __CustomProperty_PositionAlpha_leg_back_03_l_Goal_D20958294F75A2AC205398B8BD512C6D; // 0x2150 (size: 0x8)
    double __CustomProperty_PositionAlpha_leg_back_03_r_Goal_D20958294F75A2AC205398B8BD512C6D; // 0x2158 (size: 0x8)
    FVector LookAtWorldLocation;                                                      // 0x2160 (size: 0x18)

    void FootIKOverride(FPoseLink InPose_0, FPoseLink& FootIKOverride);
    void SwimLeaningOverride(FPoseLink InPose_3, FVector2D LeaningVelocity, FPoseLink& SwimLeaningOverride);
    void WalkLeaningOverride(FPoseLink InPose_2, FVector2D LeaningVelocity, FPoseLink& WalkLeaningOverride);
    void FlyLeaningOverride(FPoseLink InPose_1, FVector2D LeaningVelocity, FPoseLink& FlyLeaningOverride);
    void CustomOverride(FPoseLink PrePose, FPalCustomAnimOverrideData CustomData, FPoseLink& CustomOverride);
    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_SakuraSaurus_Implementation(int32 EntryPoint);
}; // Size: 0x2178

#endif
