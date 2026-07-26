#ifndef UE4SS_SDK_BP_NPC_Base_HPP
#define UE4SS_SDK_BP_NPC_Base_HPP

class ABP_NPC_Base_C : public ABP_NPC_NewBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0BF8 (size: 0x8)
    class UBP_PalNPCTalkFlowComponent_C* BP_PalNPCTalkFlowComponent;                  // 0x0C00 (size: 0x8)
    class UBP_NPCInteractionComponent_C* BP_NPCInteractionComponent;                  // 0x0C08 (size: 0x8)
    class UPalFacialComponent* PalFacial;                                             // 0x0C10 (size: 0x8)
    class UPalNavigationInvokerComponent* PalNavigationInvoker;                       // 0x0C18 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x0C20 (size: 0x8)
    class UPalShooterComponent* PalShooter;                                           // 0x0C28 (size: 0x8)
    FBP_NPC_Base_COnDestoryEvent OnDestoryEvent;                                      // 0x0C30 (size: 0x10)
    void OnDestoryEvent(class APalCharacter* Character);
    TSubclassOf<class UAnimInstance> AnimLayerClass;                                  // 0x0C40 (size: 0x8)
    double TickInterval;                                                              // 0x0C48 (size: 0x8)
    bool DisableEXP;                                                                  // 0x0C50 (size: 0x1)
    FName AIResponse;                                                                 // 0x0C54 (size: 0x8)
    TSubclassOf<class UPalNPCWeaponGenerator> WeaponGeneratorClass;                   // 0x0C60 (size: 0x8)

    void SetMaterial(class UMaterialInstance* Material);
    void SetupInteraction();
    void DestoryWeapon();
    void CreateWeapon();
    void ReceiveBeginPlay();
    void カスタムイベント_0(class APalCharacter* InCharacter);
    void カスタムイベント_2(FPalDeadInfo DeadInfo);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__BP_NPC_Base_CharacterMovement_K2Node_ComponentBoundEvent_0_OnJumpDelegate__DelegateSignature(class UPalCharacterMovementComponent* Component);
    void SetActive_Interact_ToAll(bool Active);
    void ReceiveTick(float DeltaSeconds);
    void UnregisterSwimEvent();
    void OnExitWater();
    void OnEnterWater();
    void RegisterSwimEvent();
    void ExecuteUbergraph_BP_NPC_Base(int32 EntryPoint);
    void OnDestoryEvent__DelegateSignature(class APalCharacter* Character);
}; // Size: 0xC68

#endif
