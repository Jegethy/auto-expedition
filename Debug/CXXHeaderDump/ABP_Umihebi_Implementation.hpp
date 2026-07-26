#ifndef UE4SS_SDK_ABP_Umihebi_Implementation_HPP
#define UE4SS_SDK_ABP_Umihebi_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_97;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_98;                                                          // 0x000C (size: 0x8)
    FName __NameProperty_99;                                                          // 0x0014 (size: 0x8)
    float __FloatProperty_100;                                                        // 0x001C (size: 0x4)
    bool __BoolProperty_101;                                                          // 0x0020 (size: 0x1)
    float __FloatProperty_102;                                                        // 0x0024 (size: 0x4)
    bool __BoolProperty_103;                                                          // 0x0028 (size: 0x1)
    EAnimSyncMethod __EnumProperty_104;                                               // 0x0029 (size: 0x1)
    FName __NameProperty_105;                                                         // 0x002C (size: 0x8)
    FName __NameProperty_106;                                                         // 0x0034 (size: 0x8)
    FName __NameProperty_107;                                                         // 0x003C (size: 0x8)
    FName __NameProperty_108;                                                         // 0x0044 (size: 0x8)
    FName __NameProperty_109;                                                         // 0x004C (size: 0x8)
    FName __NameProperty_110;                                                         // 0x0054 (size: 0x8)
    FName __NameProperty_111;                                                         // 0x005C (size: 0x8)
    FName __NameProperty_112;                                                         // 0x0064 (size: 0x8)
    TEnumAsByte<ERefPoseType> __ByteProperty_113;                                     // 0x006C (size: 0x1)
    FAnimNodeFunctionRef __StructProperty_114;                                        // 0x0070 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0090 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0110 (size: 0x18)

}; // Size: 0x128

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x000C (size: 0x4)
    float __FloatProperty_2;                                                          // 0x0010 (size: 0x4)

}; // Size: 0x14

class UABP_Umihebi_Implementation_C : public UPalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x06E8 (size: 0x14)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0700 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0708 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_8;                                              // 0x0710 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_8;                        // 0x0730 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_7;                                              // 0x07F8 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_7;                        // 0x0818 (size: 0xC8)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_1;      // 0x08E0 (size: 0x118)
    FAnimNode_Root AnimGraphNode_Root_6;                                              // 0x09F8 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_6;                        // 0x0A18 (size: 0xC8)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace;        // 0x0AE0 (size: 0x118)
    FAnimNode_Root AnimGraphNode_Root_5;                                              // 0x0BF8 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_5;                        // 0x0C18 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_4;                                              // 0x0CE0 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_4;                        // 0x0D00 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_3;                                              // 0x0DC8 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3;                        // 0x0DE8 (size: 0xC8)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2;                        // 0x0EB0 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_2;                                              // 0x0F78 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;                        // 0x0F98 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x1060 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x1080 (size: 0xC8)
    FAnimNode_LookAt AnimGraphNode_LookAt_2;                                          // 0x1150 (size: 0x250)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x13A0 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x13C0 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x13E0 (size: 0x250)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x1630 (size: 0x250)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x1880 (size: 0x20)
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;                                     // 0x18A0 (size: 0x10)
    FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer;                          // 0x18B0 (size: 0xC8)
    FVector2D LeaningVelocity;                                                        // 0x1978 (size: 0x10)
    FVector2D LeaningVelocity;                                                        // 0x1988 (size: 0x10)
    FVector LookAtWorldLocation;                                                      // 0x1998 (size: 0x18)

    void SwimLeaningOverride(FPoseLink InPose_3, FVector2D LeaningVelocity, FPoseLink& SwimLeaningOverride);
    void WalkLeaningOverride(FPoseLink InPose_2, FVector2D LeaningVelocity, FPoseLink& WalkLeaningOverride);
    void FlyLeaningOverride(FPoseLink InPose_1, FVector2D LeaningVelocity, FPoseLink& FlyLeaningOverride);
    void CustomOverride(FPoseLink PrePose, FPalCustomAnimOverrideData CustomData, FPoseLink& CustomOverride);
    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Umihebi_Implementation(int32 EntryPoint);
}; // Size: 0x19B0

#endif
