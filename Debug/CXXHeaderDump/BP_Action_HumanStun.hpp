#ifndef UE4SS_SDK_BP_Action_HumanStun_HPP
#define UE4SS_SDK_BP_Action_HumanStun_HPP

class UBP_Action_HumanStun_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    FBP_Action_HumanStun_COnStunActionEnd OnStunActionEnd;                            // 0x0168 (size: 0x10)
    void OnStunActionEnd();
    bool FromBack;                                                                    // 0x0178 (size: 0x1)

    void SetMoveDisable(bool Disable);
    void OnNotifyEnd_AA44E4914F447DE9F50D5984B12BCF41(FName NotifyName);
    void OnNotifyBegin_AA44E4914F447DE9F50D5984B12BCF41(FName NotifyName);
    void OnInterrupted_AA44E4914F447DE9F50D5984B12BCF41(FName NotifyName);
    void OnBlendOut_AA44E4914F447DE9F50D5984B12BCF41(FName NotifyName);
    void OnCompleted_AA44E4914F447DE9F50D5984B12BCF41(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_HumanStun(int32 EntryPoint);
    void OnStunActionEnd__DelegateSignature();
}; // Size: 0x179

#endif
