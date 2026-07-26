#ifndef UE4SS_SDK_BP_Status_BulletStackBuff_HPP
#define UE4SS_SDK_BP_Status_BulletStackBuff_HPP

class UBP_Status_BulletStackBuff_C : public UPalStatus_BulletStackBuff
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0100 (size: 0x8)

    float GetDuration_ForHUD();
    int32 GetHUDStackCount_ForHUD();
    float GetRemainingTime_ForHUD();
    void OnRep_StackCount();
    void OnRep_RemainingTime();
    void BP_OnStackBuffActivated();
    void BP_OnStackBuffDeactivated();
    void ExecuteUbergraph_BP_Status_BulletStackBuff(int32 EntryPoint);
}; // Size: 0x108

#endif
