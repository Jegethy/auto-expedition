#ifndef UE4SS_SDK_BP_Action_RandomIncident_CactusDoll_Dancing_HPP
#define UE4SS_SDK_BP_Action_RandomIncident_CactusDoll_Dancing_HPP

class UBP_Action_RandomIncident_CactusDoll_Dancing_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)

    void OnNotifyEnd_3607AB0248C18CF9345491B25356489F(FName NotifyName);
    void OnNotifyBegin_3607AB0248C18CF9345491B25356489F(FName NotifyName);
    void OnInterrupted_3607AB0248C18CF9345491B25356489F(FName NotifyName);
    void OnBlendOut_3607AB0248C18CF9345491B25356489F(FName NotifyName);
    void OnCompleted_3607AB0248C18CF9345491B25356489F(FName NotifyName);
    void OnBeginAction();
    void ExecuteUbergraph_BP_Action_RandomIncident_CactusDoll_Dancing(int32 EntryPoint);
}; // Size: 0x168

#endif
