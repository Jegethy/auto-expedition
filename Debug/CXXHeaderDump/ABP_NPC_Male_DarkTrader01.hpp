#ifndef UE4SS_SDK_ABP_NPC_Male_DarkTrader01_HPP
#define UE4SS_SDK_ABP_NPC_Male_DarkTrader01_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_32;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_33;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_34;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_35;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

class UABP_NPC_Male_DarkTrader01_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x0370 (size: 0x840)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0BB0 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0BD0 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x0BF0 (size: 0x840)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x1430 (size: 0x840)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x1C70 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x1C90 (size: 0x840)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x24D0 (size: 0x840)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x2D10 (size: 0x840)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x3550 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x3618 (size: 0x20)

    void NPC_HairClothLayer(FPoseLink InPose, FPoseLink& NPC_HairClothLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_DarkTrader01_AnimGraphNode_KawaiiPhysics_52FFB24B4059C339758806AE339DFE3F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_DarkTrader01_AnimGraphNode_KawaiiPhysics_CD7A9C7D441051BD1556F9A57B75F107();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_DarkTrader01_AnimGraphNode_KawaiiPhysics_42C7E61E4EFC836AC9A585930B1A359D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_DarkTrader01_AnimGraphNode_KawaiiPhysics_DDE5223947D5C977B259E28D828FC4F3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_DarkTrader01_AnimGraphNode_KawaiiPhysics_3B20406947425116B6D0B7BB221FB1B8();
    void ExecuteUbergraph_ABP_NPC_Male_DarkTrader01(int32 EntryPoint);
}; // Size: 0x3638

#endif
