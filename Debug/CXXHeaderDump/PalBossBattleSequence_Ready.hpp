#ifndef UE4SS_SDK_PalBossBattleSequence_Ready_HPP
#define UE4SS_SDK_PalBossBattleSequence_Ready_HPP

class UPalBossBattleSequence_Ready_C : public UPalBossBattleSequenceBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0040 (size: 0x8)
    FName flagName;                                                                   // 0x0048 (size: 0x8)

    void isLoadingAction(bool& isLoadingAction);
    void OnBeginSequence();
    void OnPlayerTeleported();
    void OnActionBegin(const class UPalActionBase* action);
    void OnLoadingActionEnd();
    void ExecuteUbergraph_PalBossBattleSequence_Ready(int32 EntryPoint);
}; // Size: 0x50

#endif
