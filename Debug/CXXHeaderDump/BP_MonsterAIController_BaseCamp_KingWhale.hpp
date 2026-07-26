#ifndef UE4SS_SDK_BP_MonsterAIController_BaseCamp_KingWhale_HPP
#define UE4SS_SDK_BP_MonsterAIController_BaseCamp_KingWhale_HPP

class ABP_MonsterAIController_BaseCamp_KingWhale_C : public ABP_MonsterAIController_BaseCamp_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05B0 (size: 0x8)

    void K2Node_Event_19();
    void K2Node_Event_18();
    void K2Node_Event_17();
    void K2Node_Event_16(const FPalMonsterControllerBaseCampHungryParameter Parameter);
    void K2Node_Event_15(const FPalAIActionBaseCampSleepActivelyParameter& Parameter);
    void K2Node_Event_14(class UPalAIActionBase* action, const TEnumAsByte<EAIRequestPriority::Type> Priority);
    void K2Node_Event_13(const EPalMapBaseCampWorkerOrderType OrderType);
    void K2Node_Event_12();
    void K2Node_Event_11(TSubclassOf<class UPalAIActionBase> actionClass);
    void K2Node_Event_10();
    void ExecuteUbergraph_BP_MonsterAIController_BaseCamp_KingWhale(int32 EntryPoint);
}; // Size: 0x5B8

#endif
