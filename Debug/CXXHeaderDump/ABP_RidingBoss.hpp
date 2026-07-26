#ifndef UE4SS_SDK_ABP_RidingBoss_HPP
#define UE4SS_SDK_ABP_RidingBoss_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_237;                                                         // 0x0004 (size: 0x8)
    FName __NameProperty_238;                                                         // 0x000C (size: 0x8)
    FName __NameProperty_239;                                                         // 0x0014 (size: 0x8)
    int32 __IntProperty_240;                                                          // 0x001C (size: 0x4)
    FName __NameProperty_241;                                                         // 0x0020 (size: 0x8)
    int32 __IntProperty_242;                                                          // 0x0028 (size: 0x4)
    FName __NameProperty_243;                                                         // 0x002C (size: 0x8)
    int32 __IntProperty_244;                                                          // 0x0034 (size: 0x4)
    FName __NameProperty_245;                                                         // 0x0038 (size: 0x8)
    int32 __IntProperty_246;                                                          // 0x0040 (size: 0x4)
    FName __NameProperty_247;                                                         // 0x0044 (size: 0x8)
    int32 __IntProperty_248;                                                          // 0x004C (size: 0x4)
    FName __NameProperty_249;                                                         // 0x0050 (size: 0x8)
    int32 __IntProperty_250;                                                          // 0x0058 (size: 0x4)
    FName __NameProperty_251;                                                         // 0x005C (size: 0x8)
    int32 __IntProperty_252;                                                          // 0x0064 (size: 0x4)
    FName __NameProperty_253;                                                         // 0x0068 (size: 0x8)
    int32 __IntProperty_254;                                                          // 0x0070 (size: 0x4)
    FName __NameProperty_255;                                                         // 0x0074 (size: 0x8)
    int32 __IntProperty_256;                                                          // 0x007C (size: 0x4)
    bool __BoolProperty_257;                                                          // 0x0080 (size: 0x1)
    float __FloatProperty_258;                                                        // 0x0084 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_259;                               // 0x0088 (size: 0x2C)
    float __FloatProperty_260;                                                        // 0x00B4 (size: 0x4)
    bool __BoolProperty_261;                                                          // 0x00B8 (size: 0x1)
    EAnimSyncMethod __EnumProperty_262;                                               // 0x00B9 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_263;                             // 0x00BA (size: 0x1)
    FName __NameProperty_264;                                                         // 0x00BC (size: 0x8)
    FName __NameProperty_265;                                                         // 0x00C4 (size: 0x8)
    int32 __IntProperty_266;                                                          // 0x00CC (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_267;                                        // 0x00D0 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00F0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0170 (size: 0x18)

}; // Size: 0x188

class UABP_RidingBoss_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0388 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0450 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0470 (size: 0x250)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x06C0 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14;                     // 0x06E0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13;                     // 0x0708 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;                     // 0x0730 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;                     // 0x0758 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;                     // 0x0780 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;                      // 0x07A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;                      // 0x07D0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x07F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x0820 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0848 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0870 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0898 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x08C0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x08E8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0910 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;                          // 0x0938 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_9;                                // 0x0980 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;                          // 0x09A0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_8;                                // 0x09E8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;                          // 0x0A08 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_7;                                // 0x0A50 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;                          // 0x0A70 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_6;                                // 0x0AB8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x0AD8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x0B20 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x0B40 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x0B88 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0BA8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0BF0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0C10 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0C58 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0C78 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0CC0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0CE0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0D28 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0D48 (size: 0xC8)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0E10 (size: 0x20)
    FAnimNode_Inertialization AnimGraphNode_Inertialization;                          // 0x0E30 (size: 0x100)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0F30 (size: 0x48)
    FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer;                          // 0x0F78 (size: 0xC8)
    FVector OwnerTargetDirection;                                                     // 0x1040 (size: 0x18)
    TEnumAsByte<E_RideActionType::Type> RideActionType;                               // 0x1058 (size: 0x1)
    bool DoUniqueWazaSeparetedAnim?;                                                  // 0x1059 (size: 0x1)
    bool DoCommonWazaSeparetedAnim?;                                                  // 0x105A (size: 0x1)
    FST_BossAnimations AnimList;                                                      // 0x1060 (size: 0x40)
    bool DoLookat?;                                                                   // 0x10A0 (size: 0x1)
    class UPalActionComponent* ActionComponent;                                       // 0x10A8 (size: 0x8)
    class UPhysicsAsset* ShakePhysics;                                                // 0x10B0 (size: 0x8)
    bool DisableLookat;                                                               // 0x10B8 (size: 0x1)

    void NPC_HairClothLayer(FPoseLink InPose, FPoseLink& NPC_HairClothLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void Find if Input Is Unique Waza(class UPalActionBase* Input, class UPalStaticCharacterParameterComponent* StaticCharacterComponent, bool& IsUniqueWaza?);
    void ChangeRideActionTypeByAction(class UPalActionBase* Object);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_LookAt_798FB0D24EEC3FBB06D3DA841EFE4A30();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_556152964AD30A70B1F926AD317E7441();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_306B502444B12DC45E0E19A24F8AB33F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_6266333F4ACB96C3A82AB08C7201AED8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_660DF48D40D305A6CC81638EFF33E556();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_41FC7A384219171EC0C0658341049D32();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_43A34FE84928851FE2FFF3AC987329E3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_B975B7A341E1772362811F997C382EFF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_07D8A20D411F356B0FF8D5AF7EDC6D53();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void OnActionBeginDelegate_Event_0(const class UPalActionBase* action);
    void BlueprintBeginPlay();
    void OnAllActionFinishDelegate_Event_0(const class UPalActionComponent* ActionComponent);
    void OnProcess();
    void ExecuteUbergraph_ABP_RidingBoss(int32 EntryPoint);
}; // Size: 0x10B9

#endif
