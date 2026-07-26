#ifndef UE4SS_SDK_BP_NPCAIController_Quest_HPP
#define UE4SS_SDK_BP_NPCAIController_Quest_HPP

class ABP_NPCAIController_Quest_C : public ABP_NPCAIController_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D8 (size: 0x8)
    bool Is Enable Tick Turn;                                                         // 0x05E0 (size: 0x1)
    class AActor* Talk Player;                                                        // 0x05E8 (size: 0x8)

    void EnableTickTurn(bool IsEnableTickTurn);
    void ReceiveTick(float DeltaSeconds);
    void OnNpcTalkIncidentNotify(class UPalIncidentNotifyListener* Listener, EPalIncidentState IncidentState, const FPalIncidentNotifyParameter& Parameter);
    void NotifyTalkStart(class APalPlayerCharacter* TalkPlayer);
    void ExecuteUbergraph_BP_NPCAIController_Quest(int32 EntryPoint);
}; // Size: 0x5F0

#endif
