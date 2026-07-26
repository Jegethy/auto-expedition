#ifndef UE4SS_SDK_BP_SpawnerRuleBase_HPP
#define UE4SS_SDK_BP_SpawnerRuleBase_HPP

class UBP_SpawnerRuleBase_C : public UPalSpawnerRuleObjectBase
{
    TArray<FF_Pal_QuestNPCSpawnCondition> Conditions;                                 // 0x0028 (size: 0x10)

    bool Validate(const class UObject* WorldContextObject, const FGuid& PlayerUId);
}; // Size: 0x38

#endif
