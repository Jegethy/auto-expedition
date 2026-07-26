#ifndef UE4SS_SDK_BP_UniqueAction_LegendDeer_Raid_Death_HPP
#define UE4SS_SDK_BP_UniqueAction_LegendDeer_Raid_Death_HPP

class UBP_UniqueAction_LegendDeer_Raid_Death_C : public UBP_ActionDeath_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)

    void OnNotifyEnd_46F58B8345EDAC486B1D4891B83A09F6(FName NotifyName);
    void OnNotifyBegin_46F58B8345EDAC486B1D4891B83A09F6(FName NotifyName);
    void OnInterrupted_46F58B8345EDAC486B1D4891B83A09F6(FName NotifyName);
    void OnBlendOut_46F58B8345EDAC486B1D4891B83A09F6(FName NotifyName);
    void OnCompleted_46F58B8345EDAC486B1D4891B83A09F6(FName NotifyName);
    void ApplyRagdoll();
    void OnBeginAction();
    void ShowEffect();
    void ExecuteUbergraph_BP_UniqueAction_LegendDeer_Raid_Death(int32 EntryPoint);
}; // Size: 0x228

#endif
