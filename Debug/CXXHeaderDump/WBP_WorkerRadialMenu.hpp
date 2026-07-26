#ifndef UE4SS_SDK_WBP_WorkerRadialMenu_HPP
#define UE4SS_SDK_WBP_WorkerRadialMenu_HPP

class UWBP_WorkerRadialMenu_C : public UWBP_CommonRadialMenuBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05F0 (size: 0x8)
    FName CameraModName;                                                              // 0x05F8 (size: 0x8)
    FWBP_WorkerRadialMenu_COnSelectedMenu OnSelectedMenu;                             // 0x0600 (size: 0x10)
    void OnSelectedMenu(EPalWorkerRadialMenuResult Result);
    FDataTableRowHandle MsgID_ShowStatus;                                             // 0x0610 (size: 0x10)
    FDataTableRowHandle MsgID_MoveToOtomo;                                            // 0x0620 (size: 0x10)
    FDataTableRowHandle MsgID_MoveToBox;                                              // 0x0630 (size: 0x10)
    FDataTableRowHandle MsgID_Feed;                                                   // 0x0640 (size: 0x10)
    FDataTableRowHandle MsgID_Pet;                                                    // 0x0650 (size: 0x10)
    bool IsPalDead;                                                                   // 0x0660 (size: 0x1)

    void OnSelectedMenu_Internal(int32 Index);
    void CreateContent(FText Text, class UWBP_WorkerRadialMenuContent_C*& createdWidget);
    void SetupContents();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void OnClosed();
    void ExecuteUbergraph_WBP_WorkerRadialMenu(int32 EntryPoint);
    void OnSelectedMenu__DelegateSignature(EPalWorkerRadialMenuResult Result);
}; // Size: 0x661

#endif
