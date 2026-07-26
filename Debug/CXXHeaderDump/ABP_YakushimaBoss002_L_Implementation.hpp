#ifndef UE4SS_SDK_ABP_YakushimaBoss002_L_Implementation_HPP
#define UE4SS_SDK_ABP_YakushimaBoss002_L_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_71;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_72;                                                          // 0x000C (size: 0x8)
    FName __NameProperty_73;                                                          // 0x0014 (size: 0x8)
    FName __NameProperty_74;                                                          // 0x001C (size: 0x8)
    FName __NameProperty_75;                                                          // 0x0024 (size: 0x8)
    FName __NameProperty_76;                                                          // 0x002C (size: 0x8)
    FName __NameProperty_77;                                                          // 0x0034 (size: 0x8)
    FName __NameProperty_78;                                                          // 0x003C (size: 0x8)
    FName __NameProperty_79;                                                          // 0x0044 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_80;                                         // 0x0050 (size: 0x20)
    FName __NameProperty_81;                                                          // 0x0070 (size: 0x8)
    FName __NameProperty_82;                                                          // 0x0078 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0080 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0100 (size: 0x18)

}; // Size: 0x118

class UABP_YakushimaBoss002_L_Implementation_C : public UPalAnimInstance
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
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;                        // 0x0D50 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0E18 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0E38 (size: 0xC8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0F00 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0F20 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0F40 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x1068 (size: 0x128)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x1190 (size: 0x20)
    FTransform IKTarget;                                                              // 0x11B0 (size: 0x60)
    bool IsIKEnabled;                                                                 // 0x1210 (size: 0x1)
    FRotator IKRot;                                                                   // 0x1218 (size: 0x18)

    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void CustomOverride(FPoseLink PrePose, FPalCustomAnimOverrideData CustomData, FPoseLink& CustomOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_YakushimaBoss002_L_Implementation_AnimGraphNode_ModifyBone_748ED46F47F20C68A42722BF59F9830A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_YakushimaBoss002_L_Implementation_AnimGraphNode_ModifyBone_8601F0A74047BB419045A4939BA3D426();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_YakushimaBoss002_L_Implementation(int32 EntryPoint);
}; // Size: 0x1230

#endif
