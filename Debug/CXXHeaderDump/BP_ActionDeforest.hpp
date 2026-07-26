#ifndef UE4SS_SDK_BP_ActionDeforest_HPP
#define UE4SS_SDK_BP_ActionDeforest_HPP

class UBP_ActionDeforest_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0190 (size: 0x8)
    FName flagName;                                                                   // 0x0198 (size: 0x8)
    class AActor* ToolActor;                                                          // 0x01A0 (size: 0x8)

    void SetHiddenAttachWeapon(bool isHidden);
    void TriggerWorkActionAttackIfNeed(const class UAnimMontage* Montage, FName SectionName);
    void GetDetectableNotifyNames(TArray<FName>& Array);
    void OnEndAction();
    void OnBeginAction();
    void OnBeginAnimNotify(class UAnimMontage* Montage, FName NotifyName);
    void ExecuteUbergraph_BP_ActionDeforest(int32 EntryPoint);
}; // Size: 0x1A8

#endif
