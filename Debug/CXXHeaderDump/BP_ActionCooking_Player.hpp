#ifndef UE4SS_SDK_BP_ActionCooking_Player_HPP
#define UE4SS_SDK_BP_ActionCooking_Player_HPP

class UBP_ActionCooking_Player_C : public UBP_ActionInteractBase_Player_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01C0 (size: 0x8)
    class ABP_CookingFryingPan_C* CookingToolActor_L;                                 // 0x01C8 (size: 0x8)
    FTimerHandle CheckEndCancelTimer_0;                                               // 0x01D0 (size: 0x8)
    class ABP_CookingSpatula_C* CookingToolActor_R;                                   // 0x01D8 (size: 0x8)

    void OnPlayEndMontage(double EndMontageLength);
    void OnMontageEnd();
    void SyncAnim();
    void OnNotifyBegin(FName NotifyName);
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionCooking_Player(int32 EntryPoint);
}; // Size: 0x1E0

#endif
