#ifndef UE4SS_SDK_F_Pal_QuestNPCSpawnCondition_HPP
#define UE4SS_SDK_F_Pal_QuestNPCSpawnCondition_HPP

struct FF_Pal_QuestNPCSpawnCondition
{
    FDataTableRowHandle QuestId_20_D9B7606F4D3DB528F17220BE3FDFFB8B;                  // 0x0000 (size: 0x10)
    TEnumAsByte<E_PalQuestState::Type> State_10_BA3ED0E440A013B313AF37B99E1D72A4;     // 0x0010 (size: 0x1)
    TSubclassOf<class UPalQuestBlock> Block_15_0276D8934E105B50A62AE298D3936387;      // 0x0018 (size: 0x8)
    bool Spawn_22_70A3F05C43562CEB543238A681D7F8FC;                                   // 0x0020 (size: 0x1)

}; // Size: 0x21

#endif
