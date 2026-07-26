#ifndef UE4SS_SDK_PalBossBattleSequence_PreEntry_HPP
#define UE4SS_SDK_PalBossBattleSequence_PreEntry_HPP

class UPalBossBattleSequence_PreEntry_C : public UPalBossBattleSequenceBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0040 (size: 0x8)
    class UPalCutsceneSkipHandler* CutsceneSkipHandler;                               // 0x0048 (size: 0x8)
    FName Flag Name;                                                                  // 0x0050 (size: 0x8)

    void Play Quest Clear UI Animation(class APalPlayerController* OwningPlayer, const FName& QuestId, bool& IsPlay);
    void OnLoaded_4BE3B30E48801C171EB1B397EBB4E259(UClass* Loaded);
    void カスタムイベント(bool bIsSkipped);
    void FinishSequence(bool IsSuccess);
    void OnBeginSequence();
    void ExecuteUbergraph_PalBossBattleSequence_PreEntry(int32 EntryPoint);
}; // Size: 0x58

#endif
