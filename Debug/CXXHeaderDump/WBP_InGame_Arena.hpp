#ifndef UE4SS_SDK_WBP_InGame_Arena_HPP
#define UE4SS_SDK_WBP_InGame_Arena_HPP

class UWBP_InGame_Arena_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWBP_InGame_Match_Draw_C* WBP_InGame_Match_Draw;                            // 0x0280 (size: 0x8)
    class UWBP_InGame_Match_HP_C* WBP_InGame_Match_HP;                                // 0x0288 (size: 0x8)
    class UWBP_InGame_Match_SignalFinish_C* WBP_InGame_Match_SignalFinish;            // 0x0290 (size: 0x8)
    class UWBP_InGame_Match_SignalStart_C* WBP_InGame_Match_SignalStart;              // 0x0298 (size: 0x8)
    class UPalArenaSequencer* CurrentArenaSequence;                                   // 0x02A0 (size: 0x8)
    class UWBP_InGame_Match_Win_C* CurrentWinUI;                                      // 0x02A8 (size: 0x8)
    class UWBP_InGame_Match_ArenaResult_C* CurrentResultUI;                           // 0x02B0 (size: 0x8)
    bool UISet;                                                                       // 0x02B8 (size: 0x1)

    void GetLocalBattleResult(FPalArenaRankPointChangeResult& Result, bool& Finded);
    void SetResult();
    void Finished_7F5F79824D29F484AC06A58453CB091A();
    void Finished_768F02F4466EDA7C23960580EBC813FD();
    void Finished_C631FD5D4353912F9F507C91C9B4CBB7();
    void Finished_F607615543D9F7F46B1668A5448DE853();
    void OnArenaSequenceStart(class UPalArenaSequencer* ArenaSequence);
    void ReadyUI();
    void DrawUI();
    void WinUI(FString WinnerName);
    void OnExitArena();
    void OnSequenceStageChanged(class UPalArenaSequencer* Sequencer, EPalArenaSequenceType PrevType, EPalArenaSequenceType AfterType);
    void SetUIOnce();
    void ExecuteUbergraph_WBP_InGame_Arena(int32 EntryPoint);
}; // Size: 0x2B9

#endif
