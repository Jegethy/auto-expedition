#ifndef UE4SS_SDK_ABP_DrillGame_Implementation_HPP
#define UE4SS_SDK_ABP_DrillGame_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_74;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_75;                                                          // 0x000C (size: 0x8)
    FName __NameProperty_76;                                                          // 0x0014 (size: 0x8)
    FName __NameProperty_77;                                                          // 0x001C (size: 0x8)
    FName __NameProperty_78;                                                          // 0x0024 (size: 0x8)
    FName __NameProperty_79;                                                          // 0x002C (size: 0x8)
    FName __NameProperty_80;                                                          // 0x0034 (size: 0x8)
    FName __NameProperty_81;                                                          // 0x003C (size: 0x8)
    FName __NameProperty_82;                                                          // 0x0044 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_83;                                         // 0x0050 (size: 0x20)
    FName __NameProperty_84;                                                          // 0x0070 (size: 0x8)
    FName __NameProperty_85;                                                          // 0x0078 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0080 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0100 (size: 0x18)

}; // Size: 0x118

class UABP_DrillGame_Implementation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_8;                                              // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_8;                        // 0x0388 (size: 0xC8)
    FAnimNode_ControlRig AnimGraphNode_ControlRig;                                    // 0x0450 (size: 0x470)
    FAnimNode_IKRig AnimGraphNode_IKRig;                                              // 0x08C0 (size: 0x1E0)
    FAnimNode_Root AnimGraphNode_Root_7;                                              // 0x0AA0 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_7;                        // 0x0AC0 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_6;                                              // 0x0B88 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_6;                        // 0x0BA8 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_5;                                              // 0x0C70 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_5;                        // 0x0C90 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_4;                                              // 0x0D58 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_4;                        // 0x0D78 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_3;                                              // 0x0E40 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3;                        // 0x0E60 (size: 0xC8)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2;                        // 0x0F28 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_2;                                              // 0x0FF0 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;                        // 0x1010 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x10D8 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x10F8 (size: 0xC8)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x11C0 (size: 0x250)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x1410 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x1430 (size: 0x20)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x1450 (size: 0x20)
    double __CustomProperty_PositionAlpha_foot_r_Goal_D2F3F63942D32410A40553B5A87A99DD; // 0x1470 (size: 0x8)
    double __CustomProperty_PositionAlpha_foot_l_Goal_D2F3F63942D32410A40553B5A87A99DD; // 0x1478 (size: 0x8)
    double __CustomProperty_PositionAlpha_hand_l_Goal_D2F3F63942D32410A40553B5A87A99DD; // 0x1480 (size: 0x8)
    double __CustomProperty_PositionAlpha_hand_r_Goal_D2F3F63942D32410A40553B5A87A99DD; // 0x1488 (size: 0x8)
    FVector LookAtWorldLocation;                                                      // 0x1490 (size: 0x18)

    void FootIKOverride(FPoseLink InPose_0, FPoseLink& FootIKOverride);
    void SwimLeaningOverride(FPoseLink InPose_3, FVector2D LeaningVelocity, FPoseLink& SwimLeaningOverride);
    void WalkLeaningOverride(FPoseLink InPose_2, FVector2D LeaningVelocity, FPoseLink& WalkLeaningOverride);
    void FlyLeaningOverride(FPoseLink InPose_1, FVector2D LeaningVelocity, FPoseLink& FlyLeaningOverride);
    void CustomOverride(FPoseLink PrePose, FPalCustomAnimOverrideData CustomData, FPoseLink& CustomOverride);
    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_DrillGame_Implementation(int32 EntryPoint);
}; // Size: 0x14A8

#endif
