#ifndef UE4SS_SDK_WBP_PalLogWidget_HPP
#define UE4SS_SDK_WBP_PalLogWidget_HPP

class UWBP_PalLogWidget_C : public UPalLogWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0458 (size: 0x8)
    class UCanvasPanel* CanvasPanel_22;                                               // 0x0460 (size: 0x8)
    class UBorder* ImportantBorder;                                                   // 0x0468 (size: 0x8)
    class UScrollBox* ScrollBox_NormalLog;                                            // 0x0470 (size: 0x8)
    class UVerticalBox* VerticalBox_KillDeathLog;                                     // 0x0478 (size: 0x8)
    class UBorder* VeryImportantBorder;                                               // 0x0480 (size: 0x8)
    TArray<class UPalLogWidgetBase*> NormalLogList;                                   // 0x0488 (size: 0x10)
    TArray<class UPalLogWidgetBase*> ImportantLogList;                                // 0x0498 (size: 0x10)
    double MoveTime;                                                                  // 0x04A8 (size: 0x8)
    int32 MaxDisplayImportantLog;                                                     // 0x04B0 (size: 0x4)
    FSoftObjectPath Icon Path;                                                        // 0x04B8 (size: 0x20)
    TMap<class FGuid, class UPalLogWidgetBase*> veryImportantLogMap;                  // 0x04D8 (size: 0x50)
    float Normal Log Display Time;                                                    // 0x0528 (size: 0x4)
    float Important Log Display Time;                                                 // 0x052C (size: 0x4)
    FGuid nowDisplayVeryImportantLog;                                                 // 0x0530 (size: 0x10)
    double veryImportantLogDisplayTime;                                               // 0x0540 (size: 0x8)
    double veryImportantLogDisplayTimer;                                              // 0x0548 (size: 0x8)
    TArray<FGuid> veryImportantLogIDArray;                                            // 0x0550 (size: 0x10)
    TArray<class UWBP_Notice_Deathlog_C*> DeathLogList;                               // 0x0560 (size: 0x10)
    float Death Log Short Display Time;                                               // 0x0570 (size: 0x4)
    float Death Log Long Display Time;                                                // 0x0574 (size: 0x4)
    TArray<class UWBP_Notice_Deathlog_C*> KillLogList;                                // 0x0578 (size: 0x10)

    void CREATEDELEGATE_PROXYFUNCTION_0(const FPalKillLogDisplayData& DeathLogDisplayData);
    void OnKillLogEnd(class UWBP_Notice_Deathlog_C* EndedLog);
    void OnAddedKillLog(const FPalKillLogDisplayData& KillLogData);
    void OnDeathLogEnd(class UWBP_Notice_Deathlog_C* EndedLog);
    void DisplayNextVeryImportantLog();
    void CheckVeryImportantLog(double DeltaTime);
    void OnAddedDeathLog(FPalKillLogDisplayData DeathLogDisplayData);
    void OnRemovedVeryImportantLog(const FGuid& logId);
    void OnAddedVeryImportantLog(const FGuid& logId, const FText& LogText, const FPalLogAdditionalData& logAdditionalData);
    void CreateLogWidget(TSubclassOf<class UPalLogWidgetBase> logWidgeClass, FText Text, FPalLogAdditionalData AdditionalData, class UPalLogWidgetBase*& createdWidget);
    void CheckImportantLog(bool& IsRemoved);
    void CheckRemoveLog(const TArray<class UPalLogWidgetBase*>& TargetArray, bool& Removed);
    void SetupWidgetTranslation(class UPalLogWidgetBase* TargetWidget, class UCanvasPanelSlot* relationSlot);
    void OnAddedImportantLog(const FText& LogText, const FPalLogAdditionalData& logAdditionalData);
    void On Added Normal Log(const FText& LogText, const FPalLogAdditionalData& logAdditionalData);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destruct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalLogWidget(int32 EntryPoint);
}; // Size: 0x588

#endif
