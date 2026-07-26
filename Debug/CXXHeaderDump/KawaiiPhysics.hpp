#ifndef UE4SS_SDK_KawaiiPhysics_HPP
#define UE4SS_SDK_KawaiiPhysics_HPP

#include "KawaiiPhysics_enums.hpp"

struct FAnimNode_KawaiiPhysics : public FAnimNode_SkeletalControlBase
{
    FBoneReference RootBone;                                                          // 0x00C8 (size: 0x10)
    TArray<FBoneReference> ExcludeBones;                                              // 0x00D8 (size: 0x10)
    TArray<FKawaiiPhysicsRootBoneSetting> AdditionalRootBones;                        // 0x00E8 (size: 0x10)
    float DummyBoneLength;                                                            // 0x00F8 (size: 0x4)
    EBoneForwardAxis BoneForwardAxis;                                                 // 0x00FC (size: 0x1)
    FKawaiiPhysicsSettings PhysicsSettings;                                           // 0x0100 (size: 0x18)
    int32 TargetFrameRate;                                                            // 0x0118 (size: 0x4)
    bool OverrideTargetFramerate;                                                     // 0x011C (size: 0x1)
    int32 WarmUpFrames;                                                               // 0x0120 (size: 0x4)
    bool bUseWarmUpWhenResetDynamics;                                                 // 0x0124 (size: 0x1)
    bool bNeedWarmUp;                                                                 // 0x0125 (size: 0x1)
    float TeleportDistanceThreshold;                                                  // 0x0128 (size: 0x4)
    float TeleportRotationThreshold;                                                  // 0x012C (size: 0x4)
    EPlanarConstraint PlanarConstraint;                                               // 0x0130 (size: 0x1)
    bool bUpdatePhysicsSettingsInGame;                                                // 0x0131 (size: 0x1)
    bool ResetBoneTransformWhenBoneNotFound;                                          // 0x0132 (size: 0x1)
    class UCurveFloat* DampingCurve;                                                  // 0x0138 (size: 0x8)
    class UCurveFloat* WorldDampingLocationCurve;                                     // 0x0140 (size: 0x8)
    class UCurveFloat* WorldDampingRotationCurve;                                     // 0x0148 (size: 0x8)
    class UCurveFloat* StiffnessCurve;                                                // 0x0150 (size: 0x8)
    class UCurveFloat* RadiusCurve;                                                   // 0x0158 (size: 0x8)
    class UCurveFloat* LimitAngleCurve;                                               // 0x0160 (size: 0x8)
    FRuntimeFloatCurve DampingCurveData;                                              // 0x0168 (size: 0x88)
    FRuntimeFloatCurve StiffnessCurveData;                                            // 0x01F0 (size: 0x88)
    FRuntimeFloatCurve WorldDampingLocationCurveData;                                 // 0x0278 (size: 0x88)
    FRuntimeFloatCurve WorldDampingRotationCurveData;                                 // 0x0300 (size: 0x88)
    FRuntimeFloatCurve RadiusCurveData;                                               // 0x0388 (size: 0x88)
    FRuntimeFloatCurve LimitAngleCurveData;                                           // 0x0410 (size: 0x88)
    TArray<FSphericalLimit> SphericalLimits;                                          // 0x0498 (size: 0x10)
    TArray<FCapsuleLimit> CapsuleLimits;                                              // 0x04A8 (size: 0x10)
    TArray<FBoxLimit> BoxLimits;                                                      // 0x04B8 (size: 0x10)
    TArray<FPlanarLimit> PlanarLimits;                                                // 0x04C8 (size: 0x10)
    class UKawaiiPhysicsLimitsDataAsset* LimitsDataAsset;                             // 0x04D8 (size: 0x8)
    class UPhysicsAsset* PhysicsAssetForLimits;                                       // 0x04E0 (size: 0x8)
    TArray<FSphericalLimit> SphericalLimitsData;                                      // 0x04E8 (size: 0x10)
    TArray<FCapsuleLimit> CapsuleLimitsData;                                          // 0x04F8 (size: 0x10)
    TArray<FBoxLimit> BoxLimitsData;                                                  // 0x0508 (size: 0x10)
    TArray<FPlanarLimit> PlanarLimitsData;                                            // 0x0518 (size: 0x10)
    EXPBDComplianceType BoneConstraintGlobalComplianceType;                           // 0x0528 (size: 0x1)
    int32 BoneConstraintIterationCountBeforeCollision;                                // 0x052C (size: 0x4)
    int32 BoneConstraintIterationCountAfterCollision;                                 // 0x0530 (size: 0x4)
    bool bAutoAddChildDummyBoneConstraint;                                            // 0x0534 (size: 0x1)
    TArray<FModifyBoneConstraint> BoneConstraints;                                    // 0x0538 (size: 0x10)
    class UKawaiiPhysicsBoneConstraintsDataAsset* BoneConstraintsDataAsset;           // 0x0548 (size: 0x8)
    TArray<FModifyBoneConstraint> BoneConstraintsData;                                // 0x0550 (size: 0x10)
    TArray<FModifyBoneConstraint> MergedBoneConstraints;                              // 0x0560 (size: 0x10)
    FVector Gravity;                                                                  // 0x0570 (size: 0x18)
    bool bEnableWind;                                                                 // 0x0588 (size: 0x1)
    float WindScale;                                                                  // 0x058C (size: 0x4)
    TArray<FInstancedStruct> ExternalForces;                                          // 0x0590 (size: 0x10)
    TArray<class UKawaiiPhysics_CustomExternalForce*> CustomExternalForces;           // 0x05A0 (size: 0x10)
    bool bAllowWorldCollision;                                                        // 0x05B0 (size: 0x1)
    bool bOverrideCollisionParams;                                                    // 0x05B1 (size: 0x1)
    FBodyInstance CollisionChannelSettings;                                           // 0x05B8 (size: 0x190)
    bool bIgnoreSelfComponent;                                                        // 0x0748 (size: 0x1)
    TArray<FBoneReference> IgnoreBones;                                               // 0x0750 (size: 0x10)
    TArray<FName> IgnoreBoneNamePrefix;                                               // 0x0760 (size: 0x10)
    FGameplayTag KawaiiPhysicsTag;                                                    // 0x0770 (size: 0x8)
    TArray<FKawaiiPhysicsModifyBone> ModifyBones;                                     // 0x0778 (size: 0x10)
    float DeltaTime;                                                                  // 0x0788 (size: 0x4)
    FTransform PreSkelCompTransform;                                                  // 0x0790 (size: 0x60)
    bool bInitPhysicsSettings;                                                        // 0x07F0 (size: 0x1)

}; // Size: 0x840

struct FBoxLimit : public FCollisionLimitBase
{
    FVector Extent;                                                                   // 0x0088 (size: 0x18)

}; // Size: 0xA0

struct FBoxLimitData : public FCollisionLimitDataBase
{
    FVector Extent;                                                                   // 0x0090 (size: 0x18)

}; // Size: 0xB0

struct FCapsuleLimit : public FCollisionLimitBase
{
    float Radius;                                                                     // 0x0088 (size: 0x4)
    float Length;                                                                     // 0x008C (size: 0x4)

}; // Size: 0x90

struct FCapsuleLimitData : public FCollisionLimitDataBase
{
    float Radius;                                                                     // 0x0090 (size: 0x4)
    float Length;                                                                     // 0x0094 (size: 0x4)

}; // Size: 0xA0

struct FCollisionLimitBase
{
    FBoneReference DrivingBone;                                                       // 0x0000 (size: 0x10)
    FVector OffsetLocation;                                                           // 0x0010 (size: 0x18)
    FRotator OffsetRotation;                                                          // 0x0028 (size: 0x18)
    FVector Location;                                                                 // 0x0040 (size: 0x18)
    FQuat Rotation;                                                                   // 0x0060 (size: 0x20)
    bool bEnable;                                                                     // 0x0080 (size: 0x1)
    ECollisionSourceType SourceType;                                                  // 0x0081 (size: 0x1)

}; // Size: 0x90

struct FCollisionLimitDataBase
{
    FBoneReference DrivingBoneReference;                                              // 0x0000 (size: 0x10)
    FName DrivingBoneName;                                                            // 0x0010 (size: 0x8)
    FVector OffsetLocation;                                                           // 0x0018 (size: 0x18)
    FRotator OffsetRotation;                                                          // 0x0030 (size: 0x18)
    FVector Location;                                                                 // 0x0048 (size: 0x18)
    FQuat Rotation;                                                                   // 0x0060 (size: 0x20)
    FGuid Guid;                                                                       // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FKawaiiPhysicsModifyBone
{
    FBoneReference BoneRef;                                                           // 0x0000 (size: 0x10)
    int32 Index;                                                                      // 0x0010 (size: 0x4)
    int32 ParentIndex;                                                                // 0x0014 (size: 0x4)
    TArray<int32> ChildIndices;                                                       // 0x0018 (size: 0x10)
    FKawaiiPhysicsSettings PhysicsSettings;                                           // 0x0028 (size: 0x18)
    FVector Location;                                                                 // 0x0040 (size: 0x18)
    FVector PrevLocation;                                                             // 0x0058 (size: 0x18)
    FQuat PrevRotation;                                                               // 0x0070 (size: 0x20)
    FVector PoseLocation;                                                             // 0x0090 (size: 0x18)
    FQuat PoseRotation;                                                               // 0x00B0 (size: 0x20)
    FVector PoseScale;                                                                // 0x00D0 (size: 0x18)
    float LengthFromRoot;                                                             // 0x00E8 (size: 0x4)
    float LengthRateFromRoot;                                                         // 0x00EC (size: 0x4)
    bool bDummy;                                                                      // 0x00F0 (size: 0x1)
    bool bSkipSimulate;                                                               // 0x00F1 (size: 0x1)

}; // Size: 0x100

struct FKawaiiPhysicsReference : public FAnimNodeReference
{
}; // Size: 0x10

struct FKawaiiPhysicsRootBoneSetting
{
    FBoneReference RootBone;                                                          // 0x0000 (size: 0x10)
    TArray<FBoneReference> OverrideExcludeBones;                                      // 0x0010 (size: 0x10)
    bool bUseOverrideExcludeBones;                                                    // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FKawaiiPhysicsSettings
{
    float Damping;                                                                    // 0x0000 (size: 0x4)
    float Stiffness;                                                                  // 0x0004 (size: 0x4)
    float WorldDampingLocation;                                                       // 0x0008 (size: 0x4)
    float WorldDampingRotation;                                                       // 0x000C (size: 0x4)
    float Radius;                                                                     // 0x0010 (size: 0x4)
    float LimitAngle;                                                                 // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FKawaiiPhysics_ExternalForce
{
    bool bIsEnabled;                                                                  // 0x0010 (size: 0x1)
    bool bDrawDebug;                                                                  // 0x0011 (size: 0x1)
    TArray<FBoneReference> ApplyBoneFilter;                                           // 0x0018 (size: 0x10)
    TArray<FBoneReference> IgnoreBoneFilter;                                          // 0x0028 (size: 0x10)
    EExternalForceSpace ExternalForceSpace;                                           // 0x0038 (size: 0x1)
    FFloatInterval RandomForceScaleRange;                                             // 0x003C (size: 0x8)
    class UObject* ExternalOwner;                                                     // 0x0048 (size: 0x8)
    bool bIsOneShot;                                                                  // 0x0050 (size: 0x1)
    float RandomizedForceScale;                                                       // 0x0054 (size: 0x4)
    FVector Force;                                                                    // 0x0058 (size: 0x18)
    FTransform ComponentTransform;                                                    // 0x0070 (size: 0x60)
    bool bCanSelectForceSpace;                                                        // 0x00D0 (size: 0x1)

}; // Size: 0xE0

struct FKawaiiPhysics_ExternalForce_Basic : public FKawaiiPhysics_ExternalForce
{
    FVector ForceDir;                                                                 // 0x00D8 (size: 0x18)
    FRuntimeFloatCurve ForceRateByBoneLengthRate;                                     // 0x00F0 (size: 0x88)
    float Interval;                                                                   // 0x0178 (size: 0x4)
    float Time;                                                                       // 0x017C (size: 0x4)
    float PrevTime;                                                                   // 0x0180 (size: 0x4)

}; // Size: 0x190

struct FKawaiiPhysics_ExternalForce_Curve : public FKawaiiPhysics_ExternalForce
{
    FRuntimeVectorCurve ForceCurve;                                                   // 0x00D8 (size: 0x188)
    EExternalForceCurveEvaluateType CurveEvaluateType;                                // 0x0260 (size: 0x1)
    int32 SubstepCount;                                                               // 0x0264 (size: 0x4)
    float TimeScale;                                                                  // 0x0268 (size: 0x4)
    FRuntimeFloatCurve ForceRateByBoneLengthRate;                                     // 0x0270 (size: 0x88)
    float Time;                                                                       // 0x02F8 (size: 0x4)
    float PrevTime;                                                                   // 0x02FC (size: 0x4)
    float MaxCurveTime;                                                               // 0x0300 (size: 0x4)

}; // Size: 0x310

struct FKawaiiPhysics_ExternalForce_Gravity : public FKawaiiPhysics_ExternalForce
{
    FRuntimeFloatCurve ForceRateByBoneLengthRate;                                     // 0x00D8 (size: 0x88)
    bool bUseCharacterGravityDirection;                                               // 0x0160 (size: 0x1)
    bool bUseCharacterGravityScale;                                                   // 0x0161 (size: 0x1)
    FVector OverrideGravityDirection;                                                 // 0x0168 (size: 0x18)
    bool bUseOverrideGravityDirection;                                                // 0x0180 (size: 0x1)

}; // Size: 0x190

struct FKawaiiPhysics_ExternalForce_Wind : public FKawaiiPhysics_ExternalForce
{
    FRuntimeFloatCurve ForceRateByBoneLengthRate;                                     // 0x00D8 (size: 0x88)
    class UWorld* World;                                                              // 0x0160 (size: 0x8)

}; // Size: 0x170

struct FModifyBoneConstraint
{
    FBoneReference Bone1;                                                             // 0x0000 (size: 0x10)
    FBoneReference Bone2;                                                             // 0x0010 (size: 0x10)
    bool bOverrideCompliance;                                                         // 0x0020 (size: 0x1)
    EXPBDComplianceType ComplianceType;                                               // 0x0021 (size: 0x1)
    int32 ModifyBoneIndex1;                                                           // 0x0024 (size: 0x4)
    int32 ModifyBoneIndex2;                                                           // 0x0028 (size: 0x4)
    float Length;                                                                     // 0x002C (size: 0x4)
    bool bIsDummy;                                                                    // 0x0030 (size: 0x1)
    float Lambda;                                                                     // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FModifyBoneConstraintData
{
    FName BoneName1;                                                                  // 0x0000 (size: 0x8)
    FName BoneName2;                                                                  // 0x0008 (size: 0x8)
    FBoneReference BoneReference1;                                                    // 0x0010 (size: 0x10)
    FBoneReference BoneReference2;                                                    // 0x0020 (size: 0x10)
    bool bOverrideCompliance;                                                         // 0x0030 (size: 0x1)
    EXPBDComplianceType ComplianceType;                                               // 0x0031 (size: 0x1)

}; // Size: 0x34

struct FPlanarLimit : public FCollisionLimitBase
{
    FPlane Plane;                                                                     // 0x0090 (size: 0x20)

}; // Size: 0xB0

struct FPlanarLimitData : public FCollisionLimitDataBase
{
    FPlane Plane;                                                                     // 0x0090 (size: 0x20)

}; // Size: 0xB0

struct FRegexPatternBoneSet
{
    FString RegexPatternBone1;                                                        // 0x0000 (size: 0x10)
    FString RegexPatternBone2;                                                        // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FSphericalLimit : public FCollisionLimitBase
{
    float Radius;                                                                     // 0x0088 (size: 0x4)
    ESphericalLimitType LimitType;                                                    // 0x008C (size: 0x1)

}; // Size: 0x90

struct FSphericalLimitData : public FCollisionLimitDataBase
{
    float Radius;                                                                     // 0x0090 (size: 0x4)
    ESphericalLimitType LimitType;                                                    // 0x0094 (size: 0x1)

}; // Size: 0xA0

class UAnimNotifyState_KawaiiPhysicsAddExternalForce : public UAnimNotifyState
{
    TArray<FInstancedStruct> AdditionalExternalForces;                                // 0x0030 (size: 0x10)
    FGameplayTagContainer FilterTags;                                                 // 0x0040 (size: 0x20)
    bool bFilterExactMatch;                                                           // 0x0060 (size: 0x1)

}; // Size: 0x68

class UAnimNotify_KawaiiPhysicsAddExternalForce : public UAnimNotify
{
    TArray<FInstancedStruct> AdditionalExternalForces;                                // 0x0038 (size: 0x10)
    FGameplayTagContainer FilterTags;                                                 // 0x0048 (size: 0x20)
    bool bFilterExactMatch;                                                           // 0x0068 (size: 0x1)

}; // Size: 0x70

class UKawaiiPhysicsBoneConstraintsDataAsset : public UDataAsset
{
    TArray<FModifyBoneConstraintData> BoneConstraintsData;                            // 0x0038 (size: 0x10)

}; // Size: 0x48

class UKawaiiPhysicsLibrary : public UBlueprintFunctionLibrary
{

    FKawaiiPhysicsReference SetWindScale(const FKawaiiPhysicsReference& KawaiiPhysics, float WindScale);
    FKawaiiPhysicsReference SetTeleportRotationThreshold(const FKawaiiPhysicsReference& KawaiiPhysics, float TeleportRotationThreshold);
    FKawaiiPhysicsReference SetTeleportDistanceThreshold(const FKawaiiPhysicsReference& KawaiiPhysics, float TeleportDistanceThreshold);
    FKawaiiPhysicsReference SetRootBoneName(const FKawaiiPhysicsReference& KawaiiPhysics, FName& RootBoneName);
    FKawaiiPhysicsReference SetPhysicsSettings(const FKawaiiPhysicsReference& KawaiiPhysics, FKawaiiPhysicsSettings& PhysicsSettings);
    FKawaiiPhysicsReference SetNeedWarmUp(const FKawaiiPhysicsReference& KawaiiPhysics, bool bNeedWarmUp);
    FKawaiiPhysicsReference SetLimitsDataAsset(const FKawaiiPhysicsReference& KawaiiPhysics, class UKawaiiPhysicsLimitsDataAsset* LimitsDataAsset);
    FKawaiiPhysicsReference SetGravity(const FKawaiiPhysicsReference& KawaiiPhysics, FVector Gravity);
    void SetExternalForceWildcardProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, const int32& Value);
    FKawaiiPhysicsReference SetExternalForceVectorProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, FVector Value);
    FKawaiiPhysicsReference SetExternalForceTransformProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, FTransform Value);
    FKawaiiPhysicsReference SetExternalForceRotatorProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, FRotator Value);
    FKawaiiPhysicsReference SetExternalForceIntProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, int32 Value);
    FKawaiiPhysicsReference SetExternalForceFloatProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, float Value);
    FKawaiiPhysicsReference SetExternalForceBoolProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, bool Value);
    FKawaiiPhysicsReference SetExcludeBoneNames(const FKawaiiPhysicsReference& KawaiiPhysics, TArray<FName>& ExcludeBoneNames);
    FKawaiiPhysicsReference SetEnableWind(const FKawaiiPhysicsReference& KawaiiPhysics, bool bEnableWind);
    FKawaiiPhysicsReference SetDummyBoneLength(const FKawaiiPhysicsReference& KawaiiPhysics, float DummyBoneLength);
    FKawaiiPhysicsReference SetAllowWorldCollision(const FKawaiiPhysicsReference& KawaiiPhysics, bool bAllowWorldCollision);
    FKawaiiPhysicsReference ResetDynamics(const FKawaiiPhysicsReference& KawaiiPhysics);
    bool RemoveExternalForcesFromComponent(class USkeletalMeshComponent* MeshComp, class UObject* Owner, FGameplayTagContainer& FilterTags, bool bFilterExactMatch);
    float GetWindScale(const FKawaiiPhysicsReference& KawaiiPhysics);
    float GetTeleportRotationThreshold(const FKawaiiPhysicsReference& KawaiiPhysics);
    float GetTeleportDistanceThreshold(const FKawaiiPhysicsReference& KawaiiPhysics);
    FName GetRootBoneName(const FKawaiiPhysicsReference& KawaiiPhysics);
    FKawaiiPhysicsSettings GetPhysicsSettings(const FKawaiiPhysicsReference& KawaiiPhysics);
    bool GetNeedWarmUp(const FKawaiiPhysicsReference& KawaiiPhysics);
    class UKawaiiPhysicsLimitsDataAsset* GetLimitsDataAsset(const FKawaiiPhysicsReference& KawaiiPhysics);
    FVector GetGravity(const FKawaiiPhysicsReference& KawaiiPhysics);
    void GetExternalForceWildcardProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, int32& Value);
    FVector GetExternalForceVectorProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName);
    FTransform GetExternalForceTransformProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName);
    FRotator GetExternalForceRotatorProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName);
    int32 GetExternalForceIntProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName);
    float GetExternalForceFloatProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName);
    bool GetExternalForceBoolProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName);
    TArray<FName> GetExcludeBoneNames(const FKawaiiPhysicsReference& KawaiiPhysics);
    bool GetEnableWind(const FKawaiiPhysicsReference& KawaiiPhysics);
    float GetDummyBoneLength(const FKawaiiPhysicsReference& KawaiiPhysics);
    bool GetAllowWorldCollision(const FKawaiiPhysicsReference& KawaiiPhysics);
    void ConvertToKawaiiPhysicsPure(const FAnimNodeReference& Node, FKawaiiPhysicsReference& KawaiiPhysics, bool& Result);
    FKawaiiPhysicsReference ConvertToKawaiiPhysics(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    FKawaiiPhysicsReference AddExternalForceWithExecResult(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, FInstancedStruct& ExternalForce, class UObject* Owner);
    bool AddExternalForcesToComponent(class USkeletalMeshComponent* MeshComp, TArray<FInstancedStruct>& ExternalForces, class UObject* Owner, FGameplayTagContainer& FilterTags, bool bFilterExactMatch, bool bIsOneShot);
    bool AddExternalForce(const FKawaiiPhysicsReference& KawaiiPhysics, FInstancedStruct& ExternalForce, class UObject* Owner, bool bIsOneShot);
}; // Size: 0x28

class UKawaiiPhysicsLimitsDataAsset : public UDataAsset
{
    TArray<FSphericalLimit> SphericalLimits;                                          // 0x0038 (size: 0x10)
    TArray<FCapsuleLimit> CapsuleLimits;                                              // 0x0048 (size: 0x10)
    TArray<FBoxLimit> BoxLimits;                                                      // 0x0058 (size: 0x10)
    TArray<FPlanarLimit> PlanarLimits;                                                // 0x0068 (size: 0x10)

}; // Size: 0x78

class UKawaiiPhysics_CustomExternalForce : public UObject
{
    bool bIsEnabled;                                                                  // 0x0028 (size: 0x1)
    bool bDrawDebug;                                                                  // 0x0029 (size: 0x1)

    void PreApply(FAnimNode_KawaiiPhysics& Node, const class USkeletalMeshComponent* SkelComp);
    bool IsDebugEnabled();
    void Apply(FAnimNode_KawaiiPhysics& Node, int32 ModifyBoneIndex, const class USkeletalMeshComponent* SkelComp, const FTransform& BoneTransform);
}; // Size: 0x30

#endif
