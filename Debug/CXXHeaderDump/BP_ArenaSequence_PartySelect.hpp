#ifndef UE4SS_SDK_BP_ArenaSequence_PartySelect_HPP
#define UE4SS_SDK_BP_ArenaSequence_PartySelect_HPP

class UBP_ArenaSequence_PartySelect_C : public UPalArenaSequencePartySelect
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0050 (size: 0x8)
    double PartySelectTime;                                                           // 0x0058 (size: 0x8)
    double PartySelectTime_Solo;                                                      // 0x0060 (size: 0x8)
    double Timer;                                                                     // 0x0068 (size: 0x8)
    FPalArenaPlayerParty SelectParty;                                                 // 0x0070 (size: 0x20)
    FBP_ArenaSequence_PartySelect_COnTimerUpdated OnTimerUpdated;                     // 0x0090 (size: 0x10)
    void OnTimerUpdated(double Time);
    FBP_ArenaSequence_PartySelect_COnPartySelectBreak OnPartySelectBreak;             // 0x00A0 (size: 0x10)
    void OnPartySelectBreak();
    bool Breaked;                                                                     // 0x00B0 (size: 0x1)

    void SetupTimer();
    void EndProcess();
    void PrintPartySelectLog();
    void SendParty();
    void UpdateTimer(double DeltaTime);
    void TickSequence(float DeltaTime);
    void OnBeginSequence();
    void OnTimeup();
    void SetParty(FPalArenaPlayerParty ArenaParty);
    void OnEndSequence();
    void OnBreakSequence();
    void OnConfirmBreak(bool bResult);
    void OnArenaBreak();
    void ExecuteUbergraph_BP_ArenaSequence_PartySelect(int32 EntryPoint);
    void OnPartySelectBreak__DelegateSignature();
    void OnTimerUpdated__DelegateSignature(double Time);
}; // Size: 0xB1

#endif
