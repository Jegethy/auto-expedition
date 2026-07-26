#ifndef UE4SS_SDK_ABP_Alpaca_Implementation_HPP
#define UE4SS_SDK_ABP_Alpaca_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_77;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_78;                                                          // 0x000C (size: 0x8)
    FName __NameProperty_79;                                                          // 0x0014 (size: 0x8)
    FName __NameProperty_80;                                                          // 0x001C (size: 0x8)
    FName __NameProperty_81;                                                          // 0x0024 (size: 0x8)
    FName __NameProperty_82;                                                          // 0x002C (size: 0x8)
    FName __NameProperty_83;                                                          // 0x0034 (size: 0x8)
    FName __NameProperty_84;                                                          // 0x003C (size: 0x8)
    FName __NameProperty_85;                                                          // 0x0044 (size: 0x8)
    FName __NameProperty_86;                                                          // 0x004C (size: 0x8)
    FName __NameProperty_87;                                                          // 0x0054 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_88;                                         // 0x0060 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0080 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0100 (size: 0x18)

}; // Size: 0x118

class UABP_Alpaca_Implementation_C : public UPalAnimInstance
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
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2;                        // 0x12B8 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_2;                                              // 0x1380 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;                        // 0x13A0 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x1468 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x1488 (size: 0xC8)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x1550 (size: 0x250)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x17A0 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x17C0 (size: 0x20)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x17E0 (size: 0x20)
    FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer;                          // 0x1800 (size: 0xC8)
    double __CustomProperty_PositionAlpha_leg_front_04_l_Goal_0117BC63409F9FFA4E846A8DAF6F36C4; // 0x18C8 (size: 0x8)
    double __CustomProperty_PositionAlpha_leg_front_04_r_Goal_0117BC63409F9FFA4E846A8DAF6F36C4; // 0x18D0 (size: 0x8)
    double __CustomProperty_PositionAlpha_leg_back_04_l_Goal_0117BC63409F9FFA4E846A8DAF6F36C4; // 0x18D8 (size: 0x8)
    double __CustomProperty_PositionAlpha_leg_back_04_r_Goal_0117BC63409F9FFA4E846A8DAF6F36C4; // 0x18E0 (size: 0x8)
    FVector LookAtWorldLocation;                                                      // 0x18E8 (size: 0x18)

    void FootIKOverride(FPoseLink InPose_0, FPoseLink& FootIKOverride);
    void SwimLeaningOverride(FPoseLink InPose_3, FVector2D LeaningVelocity, FPoseLink& SwimLeaningOverride);
    void WalkLeaningOverride(FPoseLink InPose_2, FVector2D LeaningVelocity, FPoseLink& WalkLeaningOverride);
    void FlyLeaningOverride(FPoseLink InPose_1, FVector2D LeaningVelocity, FPoseLink& FlyLeaningOverride);
    void CustomOverride(FPoseLink PrePose, FPalCustomAnimOverrideData CustomData, FPoseLink& CustomOverride);
    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Alpaca_Implementation(int32 EntryPoint);
}; // Size: 0x1900

#endif
