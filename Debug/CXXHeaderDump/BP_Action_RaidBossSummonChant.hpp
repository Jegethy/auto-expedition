#ifndef UE4SS_SDK_BP_Action_RaidBossSummonChant_HPP
#define UE4SS_SDK_BP_Action_RaidBossSummonChant_HPP

class UBP_Action_RaidBossSummonChant_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    float Const_LoopTime;                                                             // 0x0168 (size: 0x4)
    class UNiagaraComponent* Effect;                                                  // 0x0170 (size: 0x8)

    void FindMontage(const EPalGeneralMontageType MontageKey, class UAnimMontage*& StartAnime);
    void OnNotifyEnd_BE7A92584840B0EC84580786B9907E36(FName NotifyName);
    void OnNotifyBegin_BE7A92584840B0EC84580786B9907E36(FName NotifyName);
    void OnInterrupted_BE7A92584840B0EC84580786B9907E36(FName NotifyName);
    void OnBlendOut_BE7A92584840B0EC84580786B9907E36(FName NotifyName);
    void OnCompleted_BE7A92584840B0EC84580786B9907E36(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_RaidBossSummonChant(int32 EntryPoint);
}; // Size: 0x178

#endif
