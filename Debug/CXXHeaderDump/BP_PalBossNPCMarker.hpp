#ifndef UE4SS_SDK_BP_PalBossNPCMarker_HPP
#define UE4SS_SDK_BP_PalBossNPCMarker_HPP

class UBP_PalBossNPCMarker_C : public USkeletalMeshComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0F80 (size: 0x8)
    FST_BossAnimations Anim List;                                                     // 0x0F88 (size: 0x40)
    bool DoUniqueWazaSeparetedAnim?;                                                  // 0x0FC8 (size: 0x1)
    bool DoCommonWazaSeparetedAnim?;                                                  // 0x0FC9 (size: 0x1)
    TMap<class EPalWazaID, class UAnimMontage*> WazaMontage;                          // 0x0FD0 (size: 0x50)
    TMap<class EPalActionType, class FST_RideBossAnimation> ActionMontageMap;         // 0x1020 (size: 0x50)
    class UPalActionBase* action;                                                     // 0x1070 (size: 0x8)
    EPalActionType EAction;                                                           // 0x1078 (size: 0x1)
    FST_RideBossAnimation STAnim;                                                     // 0x1080 (size: 0x18)
    TSubclassOf<class UAnimInstance> AnimLayerClass;                                  // 0x1098 (size: 0x8)
    bool OriginalParent;                                                              // 0x10A0 (size: 0x1)
    FName Original_CollisionProfile;                                                  // 0x10A4 (size: 0x8)
    class USceneComponent* OriginalParent_Component;                                  // 0x10B0 (size: 0x8)
    FName OriginalParent_SocketName;                                                  // 0x10B8 (size: 0x8)
    FTransform OriginalParent_Transform;                                              // 0x10C0 (size: 0x60)

    void FindEActionFromAction(const class UObject* AnyAction, EPalActionType& EAction);
    void OnWaza(const class UObject* Object);
    void SetRotation();
    void IsAbsoluteRotation();
    void OnNotifyEnd_3695005744180F167B404E8D464E2EA8(FName NotifyName);
    void OnNotifyBegin_3695005744180F167B404E8D464E2EA8(FName NotifyName);
    void OnInterrupted_3695005744180F167B404E8D464E2EA8(FName NotifyName);
    void OnBlendOut_3695005744180F167B404E8D464E2EA8(FName NotifyName);
    void OnCompleted_3695005744180F167B404E8D464E2EA8(FName NotifyName);
    void OnNotifyEnd_DEAF772043DFD4BDE4BE3D9B4DB706D9(FName NotifyName);
    void OnNotifyBegin_DEAF772043DFD4BDE4BE3D9B4DB706D9(FName NotifyName);
    void OnInterrupted_DEAF772043DFD4BDE4BE3D9B4DB706D9(FName NotifyName);
    void OnBlendOut_DEAF772043DFD4BDE4BE3D9B4DB706D9(FName NotifyName);
    void OnCompleted_DEAF772043DFD4BDE4BE3D9B4DB706D9(FName NotifyName);
    void OnNotifyEnd_1FADD12E42BDE1A6BBA9A5942B550B40(FName NotifyName);
    void OnNotifyBegin_1FADD12E42BDE1A6BBA9A5942B550B40(FName NotifyName);
    void OnInterrupted_1FADD12E42BDE1A6BBA9A5942B550B40(FName NotifyName);
    void OnBlendOut_1FADD12E42BDE1A6BBA9A5942B550B40(FName NotifyName);
    void OnCompleted_1FADD12E42BDE1A6BBA9A5942B550B40(FName NotifyName);
    void OnNotifyEnd_79DC72A149AE065376517699E9FF8157(FName NotifyName);
    void OnNotifyBegin_79DC72A149AE065376517699E9FF8157(FName NotifyName);
    void OnInterrupted_79DC72A149AE065376517699E9FF8157(FName NotifyName);
    void OnBlendOut_79DC72A149AE065376517699E9FF8157(FName NotifyName);
    void OnCompleted_79DC72A149AE065376517699E9FF8157(FName NotifyName);
    void ReceiveBeginPlay();
    void OnAction(const class UPalActionBase* action);
    void OnAnyAction_(class UPalActionBase* action);
    void OnAnyActionEnd();
    void ForcePlayAnimWithEAction(const EPalActionType& EAction);
    void ForceEndAnimWithEAction(const EPalActionType& EAction);
    void ExecuteUbergraph_BP_PalBossNPCMarker(int32 EntryPoint);
}; // Size: 0x1120

#endif
