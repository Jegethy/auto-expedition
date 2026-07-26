#ifndef UE4SS_SDK_BP_ActionFishingSuccess_HPP
#define UE4SS_SDK_BP_ActionFishingSuccess_HPP

class UBP_ActionFishingSuccess_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0190 (size: 0x8)

    void NotifySalvageSuccessToWeapon();
    void SetUseUpperBodyOnly(bool Enable);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionFishingSuccess(int32 EntryPoint);
}; // Size: 0x198

#endif
