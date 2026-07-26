#ifndef UE4SS_SDK_BP_CoopSkillSearchDungeonMapObject_HPP
#define UE4SS_SDK_BP_CoopSkillSearchDungeonMapObject_HPP

class UBP_CoopSkillSearchDungeonMapObject_C : public UPalCoopSkillSearchDungeonPortalMapObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    TArray<FName> Search Map Obj Ids;                                                 // 0x00B0 (size: 0x10)

    void Start(const FVector& Origin, int32 Rank, const FGuid& RequestPlayerUId);
    void ExecuteUbergraph_BP_CoopSkillSearchDungeonMapObject(int32 EntryPoint);
}; // Size: 0xC0

#endif
