#ifndef UE4SS_SDK_BP_Status_CollectItem_HPP
#define UE4SS_SDK_BP_Status_CollectItem_HPP

class UBP_Status_CollectItem_C : public UPalStatusCollectItem
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C0 (size: 0x8)
    int32 CollectItemTimeMinuteMin;                                                   // 0x00C8 (size: 0x4)
    int32 CollectItemTimeMinuteMax;                                                   // 0x00CC (size: 0x4)
    double CollectItemTimeSec;                                                        // 0x00D0 (size: 0x8)
    double ElapsedTimeSec;                                                            // 0x00D8 (size: 0x8)
    TArray<FFPassiveSkillCollectItemLotteryData> LotteryTable;                        // 0x00E0 (size: 0x10)
    TArray<int32> RankTable;                                                          // 0x00F0 (size: 0x10)
    TMap<FName, int32> DebugLotteryCounter;                                           // 0x0100 (size: 0x50)
    bool IsDebugLottery;                                                              // 0x0150 (size: 0x1)
    FName DebugLotteryItemName;                                                       // 0x0154 (size: 0x8)
    FPalStaticItemIdAndNum AddItemInfo;                                               // 0x015C (size: 0xC)
    bool IsPaused;                                                                    // 0x0168 (size: 0x1)
    TSubclassOf<class UBP_AIAction_SpawnItemBase_C> BaseCampActionClass;              // 0x0170 (size: 0x8)
    class UPalAIActionBase* AIAction;                                                 // 0x0178 (size: 0x8)
    TArray<class UDataTable*> LotteryTables;                                          // 0x0180 (size: 0x10)
    bool IsActionPlaying;                                                             // 0x0190 (size: 0x1)

    void AddLog_UseSkillInBaseCamp();
    void AddLog_UseSkill();
    void GetRank(int32& Rank);
    void Observe AIAction();
    void GetLotteryDataTable(class UDataTable*& DataTable);
    void CreateLotteryTable(TArray<FFPassiveSkillCollectItemLotteryData>& Result);
    void Get Base Camp Action Class(TSubclassOf<class UBP_AIAction_SpawnItemBase_C>& Class);
    void SetPause(bool Pause);
    void IsActorDead(bool& IsDead);
    void Get Name Text Id(FName& SkillNameTextId);
    void OnAddItem(EPalItemOperationResult Result);
    void Get Lottery Index(int32 LotteryValue, int32& Index);
    void GetRandVal(int32 Max, int32& RandVal);
    void Is Actor Active(bool& IsActive);
    void UpdateSkill(double DeltaTime);
    void AddItem(FPalStaticItemIdAndNum ItemInfo);
    void LotteryItem(FPalStaticItemIdAndNum& ItemInfo);
    void ResetElapsedTime();
    void SetCollectItemTime();
    void OnBeginStatus();
    void OnBreakStatus();
    void OnEndStatus();
    void TickStatus(float DeltaTime);
    void PlayAction_SpawnItem(FPalStaticItemIdAndNum AddItemInfo);
    void ExecuteUbergraph_BP_Status_CollectItem(int32 EntryPoint);
}; // Size: 0x191

#endif
