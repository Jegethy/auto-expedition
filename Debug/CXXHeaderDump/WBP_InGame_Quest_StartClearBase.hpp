#ifndef UE4SS_SDK_WBP_InGame_Quest_StartClearBase_HPP
#define UE4SS_SDK_WBP_InGame_Quest_StartClearBase_HPP

class UWBP_InGame_Quest_StartClearBase_C : public UPalUserWidget
{
    FWBP_InGame_Quest_StartClearBase_COnEnd OnEnd;                                    // 0x0450 (size: 0x10)
    void OnEnd();

    void SetBindData(FPalUIActionBindData BindData);
    void GetQuestNotifyTime(double& NotifyTime);
    void PlayOrder();
    void PlayClear();
    void SetQuestName(FText InQuestName);
    void OnEnd__DelegateSignature();
}; // Size: 0x460

#endif
