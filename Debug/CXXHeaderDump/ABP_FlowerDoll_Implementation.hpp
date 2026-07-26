#ifndef UE4SS_SDK_ABP_FlowerDoll_Implementation_HPP
#define UE4SS_SDK_ABP_FlowerDoll_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_68;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_69;                                                          // 0x000C (size: 0x8)
    FName __NameProperty_70;                                                          // 0x0014 (size: 0x8)
    FName __NameProperty_71;                                                          // 0x001C (size: 0x8)
    FName __NameProperty_72;                                                          // 0x0024 (size: 0x8)
    FName __NameProperty_73;                                                          // 0x002C (size: 0x8)
    FName __NameProperty_74;                                                          // 0x0034 (size: 0x8)
    FName __NameProperty_75;                                                          // 0x003C (size: 0x8)
    FName __NameProperty_76;                                                          // 0x0044 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_77;                                         // 0x0050 (size: 0x20)
    FName __NameProperty_78;                                                          // 0x0070 (size: 0x8)
    FName __NameProperty_79;                                                          // 0x0078 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0080 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0100 (size: 0x18)

}; // Size: 0x118

class UABP_FlowerDoll_Implementation_C : public UPalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x06E8 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x06F0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_8;                                              // 0x06F8 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_8;                        // 0x0718 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_7;                                              // 0x07E0 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_7;                        // 0x0800 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_6;                                              // 0x08C8 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_6;                        // 0x08E8 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_5;                                              // 0x09B0 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_5;                        // 0x09D0 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_4;                                              // 0x0A98 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_4;                        // 0x0AB8 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_3;                                              // 0x0B80 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3;                        // 0x0BA0 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_2;                                              // 0x0C68 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2;                        // 0x0C88 (size: 0xC8)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0D50 (size: 0x250)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0FA0 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0FC0 (size: 0x20)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0FE0 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;                        // 0x1000 (size: 0xC8)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x10C8 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x1190 (size: 0x20)
    FVector LookAtWorldLocation;                                                      // 0x11B0 (size: 0x18)

    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FlowerDoll_Implementation(int32 EntryPoint);
}; // Size: 0x11C8

#endif
