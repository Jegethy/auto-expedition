#ifndef UE4SS_SDK_ABP_M_Plastic002_Implimentation_HPP
#define UE4SS_SDK_ABP_M_Plastic002_Implimentation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_29;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_30;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_31;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_32;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

class UABP_M_Plastic002_Implimentation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x0370 (size: 0x840)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x0BB0 (size: 0x840)
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics;                                // 0x13F0 (size: 0x520)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x1910 (size: 0x840)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x2150 (size: 0x840)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x2990 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x29B0 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x29D0 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x29F0 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x2AB8 (size: 0x20)

    void ClothLayer(FPoseLink InPose, FPoseLink& ClothLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_M_Plastic002_Implimentation_AnimGraphNode_KawaiiPhysics_B6A7BD7342024E800AEE588D04F04002();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_M_Plastic002_Implimentation_AnimGraphNode_KawaiiPhysics_A8135BD144074621AAF68B874088E818();
    void ExecuteUbergraph_ABP_M_Plastic002_Implimentation(int32 EntryPoint);
}; // Size: 0x2AD8

#endif
