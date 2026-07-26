#ifndef UE4SS_SDK_BP_ActionMining_HPP
#define UE4SS_SDK_BP_ActionMining_HPP

class UBP_ActionMining_C : public UBP_ActionInteractBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01B0 (size: 0x8)
    class AActor* ToolActor;                                                          // 0x01B8 (size: 0x8)
    FName flagName;                                                                   // 0x01C0 (size: 0x8)

    void SetHiddenAttachWeapon(bool isHidden);
    void TriggerWorkActionAttackIfNeed(const class UAnimMontage* Montage, FName SectionName);
    void RequestDamageTargetObject();
    void GetDetectableNotifyNames(TArray<FName>& Array);
    void OnEndAction();
    void OnBeginAction();
    void OnBeginAnimNotify(class UAnimMontage* Montage, FName NotifyName);
    void ExecuteUbergraph_BP_ActionMining(int32 EntryPoint);
}; // Size: 0x1C8

#endif
