#ifndef UE4SS_SDK_BP_PalItemIDManager_HPP
#define UE4SS_SDK_BP_PalItemIDManager_HPP

class UBP_PalItemIDManager_C : public UPalItemIDManager
{
    TMap<class EPalElementType, class FPalItemPalEggDataHandle> PalEggStaticItemIdMap; // 0x0168 (size: 0x50)
    FDataTableRowHandle DefaultPalEggStaticItemId;                                    // 0x01B8 (size: 0x10)
    FPalItemPalEggDataHandle WorldTreePalEggStaticItemIds;                            // 0x01C8 (size: 0x10)
    FPalItemPalEggDataHandle MutationPalEggStaticItemIds;                             // 0x01D8 (size: 0x10)

    bool IsWorldTreePalEggStaticItemId(const FName StaticItemId);
    void GetPalEggRank(int32 PalRarity, class UObject* WorldContextObject, int32& PalEggRank);
    FName GetStaticItemIdPalEgg(const class UObject* WorldContextObject, const FName CharacterID, EPalEggSpecialType InEggSpecialType);
}; // Size: 0x1E8

#endif
