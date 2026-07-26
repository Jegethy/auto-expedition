#ifndef UE4SS_SDK_BP_ActionSimpleRandomMonoMontage_HPP
#define UE4SS_SDK_BP_ActionSimpleRandomMonoMontage_HPP

class UBP_ActionSimpleRandomMonoMontage_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    EPalActionType ActionType;                                                        // 0x0168 (size: 0x1)
    FString ErrorString;                                                              // 0x0170 (size: 0x10)
    double AnimPlayRate;                                                              // 0x0180 (size: 0x8)
    TArray<class UAnimMontage*> montageList;                                          // 0x0188 (size: 0x10)
    class UAnimMontage* Motage;                                                       // 0x0198 (size: 0x8)
    bool IsStop;                                                                      // 0x01A0 (size: 0x1)
    TArray<class TSubclassOf<APalCharacter>> IgnoreBPList;                            // 0x01A8 (size: 0x10)
    bool IsIgnore;                                                                    // 0x01B8 (size: 0x1)
    bool IsStopNPCTalkMothOnMontageComplete;                                          // 0x01B9 (size: 0x1)

    void CheckIgnoreBP(bool& IsIgnore);
    void FindMontage(class UAnimMontage*& Montage, bool& Exist);
    void OnNotifyEnd_906C2FBA4BA290487DF11DB86632BE52(FName NotifyName);
    void OnNotifyBegin_906C2FBA4BA290487DF11DB86632BE52(FName NotifyName);
    void OnInterrupted_906C2FBA4BA290487DF11DB86632BE52(FName NotifyName);
    void OnBlendOut_906C2FBA4BA290487DF11DB86632BE52(FName NotifyName);
    void OnCompleted_906C2FBA4BA290487DF11DB86632BE52(FName NotifyName);
    void OnEndAction();
    void OnNotifyBegin(FName NotifyName);
    void OnNotifyEnd(FName NotifyName);
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionSimpleRandomMonoMontage(int32 EntryPoint);
}; // Size: 0x1BA

#endif
