#ifndef UE4SS_SDK_CT_PlayerHeadAdjustForOctavia_HPP
#define UE4SS_SDK_CT_PlayerHeadAdjustForOctavia_HPP

class UCT_PlayerHeadAdjustForOctavia_C : public UControlRig
{
    bool IsAim;                                                                       // 0x0560 (size: 0x1)
    FVector Lookat;                                                                   // 0x0568 (size: 0x18)

}; // Size: 0x580

class URigVMMemory_Literal : public URigVMMemoryStorage
{
    FRigElementKey RigVMModel___AimItem_Item__Const;                                  // 0x0028 (size: 0xC)
    FRigUnit_AimItem_Target RigVMModel___AimItem_Primary__Const;                      // 0x0038 (size: 0x48)
    FRigElementKey RigVMModel___RigUnit_GetTransform_3_1_Item__Const;                 // 0x0080 (size: 0xC)
    TEnumAsByte<EBoneGetterSetterMode> RigVMModel___RigUnit_GetTransform_3_1_Space__Const; // 0x008C (size: 0x1)
    uint8 RigVMModel___RigUnit_GetTransform_3_1_bInitial__Const;                      // 0x008D (size: 0x1)
    FRigUnit_AimItem_Target RigVMModel___AimItem_Secondary__Const;                    // 0x0090 (size: 0x48)
    float RigVMModel___AimItem_Weight__Const;                                         // 0x00D8 (size: 0x4)
    FRigUnit_AimBone_DebugSettings RigVMModel___AimItem_DebugSettings__Const;         // 0x00E0 (size: 0x70)
    TEnumAsByte<EBoneGetterSetterMode> RigVMModel___RigUnit_SetTransform_2_2_Space__Const; // 0x0150 (size: 0x1)
    FTransform RigVMModel___RigUnit_SetTransform_2_2_Value__Const;                    // 0x0160 (size: 0x60)
    FRotator RigVMModel___Cast_1_Value__Const;                                        // 0x01C0 (size: 0x18)
    double RigVMModel___Clamp_1_Minimum__Const;                                       // 0x01D8 (size: 0x8)
    double RigVMModel___Clamp_1_Maximum__Const;                                       // 0x01E0 (size: 0x8)
    uint8 RigVMModel___RigUnit_SetTransform_2_2_bPropagateToChildren__Const;          // 0x01E8 (size: 0x1)
    FRigElementKey RigVMModel___AimItem_1_Item__Const;                                // 0x01EC (size: 0xC)
    FRigUnit_AimItem_Target RigVMModel___AimItem_1_Primary__Const;                    // 0x01F8 (size: 0x48)
    FRigElementKey RigVMModel___RigUnit_GetTransform_3_1_2_Item__Const;               // 0x0240 (size: 0xC)
    FRigUnit_AimItem_Target RigVMModel___AimItem_1_Secondary__Const;                  // 0x0250 (size: 0x48)
    double RigVMModel___Clamp_2_Minimum__Const;                                       // 0x0298 (size: 0x8)
    double RigVMModel___Clamp_2_Maximum__Const;                                       // 0x02A0 (size: 0x8)

}; // Size: 0x2A8

class URigVMMemory_Work : public URigVMMemoryStorage
{
    FControlRigExecuteContext ExecuteContext_;                                        // 0x0028 (size: 0x38)
    FTransform RigVMModel___RigUnit_GetTransform_3_1_Transform;                       // 0x0060 (size: 0x60)
    TArray<FCachedRigElement> RigVMModel___RigUnit_GetTransform_3_1_CachedIndex;      // 0x00C0 (size: 0x10)
    FRigUnit_AimItem_Target RigVMModel___AimItem_Primary__IO;                         // 0x00D0 (size: 0x48)
    TArray<FCachedRigElement> RigVMModel___AimItem_CachedItem;                        // 0x0118 (size: 0x10)
    TArray<FCachedRigElement> RigVMModel___AimItem_PrimaryCachedSpace;                // 0x0128 (size: 0x10)
    TArray<FCachedRigElement> RigVMModel___AimItem_SecondaryCachedSpace;              // 0x0138 (size: 0x10)
    FQuat RigVMModel___Cast_1_Result;                                                 // 0x0150 (size: 0x20)
    double RigVMModel___Clamp_1_Result;                                               // 0x0170 (size: 0x8)
    FRotator RigVMModel___Cast_Result;                                                // 0x0178 (size: 0x18)
    FTransform RigVMModel___RigUnit_GetTransform_3_1_1_Transform;                     // 0x0190 (size: 0x60)
    TArray<FCachedRigElement> RigVMModel___RigUnit_GetTransform_3_1_1_CachedIndex;    // 0x01F0 (size: 0x10)
    FQuat RigVMModel___Cast_Value;                                                    // 0x0200 (size: 0x20)
    double RigVMModel___Clamp_1_Value;                                                // 0x0220 (size: 0x8)
    FRotator RigVMModel___Cast_1_Value__IO;                                           // 0x0228 (size: 0x18)
    FTransform RigVMModel___RigUnit_SetTransform_2_2_Value__IO;                       // 0x0240 (size: 0x60)
    TArray<FCachedRigElement> RigVMModel___RigUnit_SetTransform_2_2_CachedIndex;      // 0x02A0 (size: 0x10)
    FTransform RigVMModel___RigUnit_GetTransform_3_1_2_Transform;                     // 0x02B0 (size: 0x60)
    TArray<FCachedRigElement> RigVMModel___RigUnit_GetTransform_3_1_2_CachedIndex;    // 0x0310 (size: 0x10)
    FRigUnit_AimItem_Target RigVMModel___AimItem_1_Primary__IO;                       // 0x0320 (size: 0x48)
    TArray<FCachedRigElement> RigVMModel___AimItem_1_CachedItem;                      // 0x0368 (size: 0x10)
    TArray<FCachedRigElement> RigVMModel___AimItem_1_PrimaryCachedSpace;              // 0x0378 (size: 0x10)
    TArray<FCachedRigElement> RigVMModel___AimItem_1_SecondaryCachedSpace;            // 0x0388 (size: 0x10)
    FQuat RigVMModel___Cast_1_1_Result;                                               // 0x03A0 (size: 0x20)
    double RigVMModel___Clamp_2_Result;                                               // 0x03C0 (size: 0x8)
    FRotator RigVMModel___Cast_2_Result;                                              // 0x03C8 (size: 0x18)
    FTransform RigVMModel___RigUnit_GetTransform_3_1_1_1_Transform;                   // 0x03E0 (size: 0x60)
    TArray<FCachedRigElement> RigVMModel___RigUnit_GetTransform_3_1_1_1_CachedIndex;  // 0x0440 (size: 0x10)
    FQuat RigVMModel___Cast_2_Value;                                                  // 0x0450 (size: 0x20)
    double RigVMModel___Clamp_2_Value;                                                // 0x0470 (size: 0x8)
    FRotator RigVMModel___Cast_1_1_Value__IO;                                         // 0x0478 (size: 0x18)
    FTransform RigVMModel___RigUnit_SetTransform_2_2_1_Value__IO;                     // 0x0490 (size: 0x60)
    TArray<FCachedRigElement> RigVMModel___RigUnit_SetTransform_2_2_1_CachedIndex;    // 0x04F0 (size: 0x10)

}; // Size: 0x500

#endif
