#ifndef UE4SS_SDK_BP_Action_RandomIncident_DrillGame_SpiningShell_HPP
#define UE4SS_SDK_BP_Action_RandomIncident_DrillGame_SpiningShell_HPP

class UBP_Action_RandomIncident_DrillGame_SpiningShell_C : public UBP_Action_Coop_SpinningShell_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0188 (size: 0x8)
    FTimerHandle TimerHandle;                                                         // 0x0190 (size: 0x8)
    bool IsEndByTimer;                                                                // 0x0198 (size: 0x1)

    void OnBeginAction();
    void カスタムイベント();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_RandomIncident_DrillGame_SpiningShell(int32 EntryPoint);
}; // Size: 0x199

#endif
