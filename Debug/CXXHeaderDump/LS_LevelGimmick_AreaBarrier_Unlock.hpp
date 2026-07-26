#ifndef UE4SS_SDK_LS_LevelGimmick_AreaBarrier_Unlock_HPP
#define UE4SS_SDK_LS_LevelGimmick_AreaBarrier_Unlock_HPP

class ULS_LevelGimmick_AreaBarrier_Unlock (Director BP)_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)

    void SequenceEvent__ENTRYPOINTLS_LevelGimmick_AreaBarrier_Unlock (Director BP)_0(class ABP_LevelGimmick_AreaBarrier_C* BP_LevelGimmick_AreaBarrier);
    void SequenceEvent__ENTRYPOINTLS_LevelGimmick_AreaBarrier_Unlock (Director BP)(class ABP_LevelGimmick_AreaBarrier_C* BP_LevelGimmick_AreaBarrier);
    void Event ResetNiagara(class ABP_LevelGimmick_AreaBarrier_C* BP_LevelGimmick_AreaBarrier);
    void Event StartNiagaraFadeOut(class ABP_LevelGimmick_AreaBarrier_C* BP_LevelGimmick_AreaBarrier);
    void ExecuteUbergraph_LS_LevelGimmick_AreaBarrier_Unlock (Director BP)(int32 EntryPoint);
}; // Size: 0x40

#endif
