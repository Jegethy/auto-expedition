#ifndef UE4SS_SDK_WBP_RelicMenu_ForDisplay_HPP
#define UE4SS_SDK_WBP_RelicMenu_ForDisplay_HPP

class UWBP_RelicMenu_ForDisplay_C : public UPalUIRelicMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWBP_Buildup_Player_1_C* WBP_Buildup_Player_1;                              // 0x0480 (size: 0x8)
    class UPalCharacterStatusOperation* StatusOperation;                              // 0x0488 (size: 0x8)
    bool bRequesting;                                                                 // 0x0490 (size: 0x1)
    bool bReplicated_Relic;                                                           // 0x0491 (size: 0x1)
    bool bReplicated_Status;                                                          // 0x0492 (size: 0x1)
    bool bLastOperationSuccessed;                                                     // 0x0493 (size: 0x1)
    TArray<EPalRelicType> LastRequestedRelicType;                                     // 0x0498 (size: 0x10)
    TArray<EPalRelicType> WaitingSynsRelicType;                                       // 0x04A8 (size: 0x10)
    TMap<FName, int32> PreRankupStatusMap;                                            // 0x04B8 (size: 0x50)

    void Reset();
    void TryRequestRankup();
    class UWidget* BP_GetDesiredFocusTarget();
    void On Got Status();
    void OnUpdatedRelicNum(EPalRelicType Type, int32 NewNum);
    void GetLastRequestedRelicType(TArray<EPalRelicType>& OutRelicType);
    void CheckCompleteSynchronize();
    void OnReceiveResult(EPalCharacterStatusOperationResult Result);
    void TeardownEventBind();
    void SetupEventBind();
    void SetupCollectedRelics();
    void OnSetup();
    void Destruct();
    void BndEvt__WBP_RelicMenu_ForDisplay_WBP_Buildup_Player_1_K2Node_ComponentBoundEvent_0_OnClickedConfirm__DelegateSignature();
    void BndEvt__WBP_RelicMenu_ForDisplay_WBP_Buildup_Player_1_K2Node_ComponentBoundEvent_1_OnClickedCloseButton__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_WBP_RelicMenu_ForDisplay(int32 EntryPoint);
}; // Size: 0x508

#endif
