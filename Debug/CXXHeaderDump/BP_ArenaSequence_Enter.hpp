#ifndef UE4SS_SDK_BP_ArenaSequence_Enter_HPP
#define UE4SS_SDK_BP_ArenaSequence_Enter_HPP

class UBP_ArenaSequence_Enter_C : public UPalArenaSequenceBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0050 (size: 0x8)

    void OnBeginSequence();
    void OnPlayerTeleported();
    void OnPlayerInfoInitialized();
    void OnEndSequence();
    void ExecuteUbergraph_BP_ArenaSequence_Enter(int32 EntryPoint);
}; // Size: 0x58

#endif
