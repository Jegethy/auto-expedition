#ifndef UE4SS_SDK_MapCollectablesSaveGame_HPP
#define UE4SS_SDK_MapCollectablesSaveGame_HPP

class UMapCollectablesSaveGame_C : public USaveGame
{
    FString StateJSON;                                                                // 0x0028 (size: 0x10)
    bool ShowTooltips;                                                                // 0x0038 (size: 0x1)
    double SavedUserIconScale;                                                        // 0x0040 (size: 0x8)
    int32 SavedLanguageIndex;                                                         // 0x0048 (size: 0x4)
    bool SavedCollapsedModUI;                                                         // 0x004C (size: 0x1)
    bool SavedShowRelicOnCompass;                                                     // 0x004D (size: 0x1)
    bool SavedShowChestsOnCompass;                                                    // 0x004E (size: 0x1)
    bool SavedShowJunkOnCompass;                                                      // 0x004F (size: 0x1)

}; // Size: 0x50

#endif
