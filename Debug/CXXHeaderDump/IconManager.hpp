#ifndef UE4SS_SDK_IconManager_HPP
#define UE4SS_SDK_IconManager_HPP

class AIconManager_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0290 (size: 0x8)
    class UTexture2D* _EffigyIcon;                                                    // 0x0298 (size: 0x8)
    class UTexture2D* _NoteIcon;                                                      // 0x02A0 (size: 0x8)
    class UTexture2D* _DungeonIcon;                                                   // 0x02A8 (size: 0x8)
    class UTexture2D* _ChestIcon;                                                     // 0x02B0 (size: 0x8)
    class UTexture2D* _EggIcon;                                                       // 0x02B8 (size: 0x8)
    class UTexture2D* _NPCCampfireIcon;                                               // 0x02C0 (size: 0x8)
    class UTexture2D* _OutpostIcon;                                                   // 0x02C8 (size: 0x8)
    class UTexture2D* _FruitTreeIcon;                                                 // 0x02D0 (size: 0x8)
    class UTexture2D* _JunkIcon;                                                      // 0x02D8 (size: 0x8)
    class UTexture2D* _CoalIcon;                                                      // 0x02E0 (size: 0x8)
    class UTexture2D* _CopperIcon;                                                    // 0x02E8 (size: 0x8)
    class UTexture2D* _QuartzIcon;                                                    // 0x02F0 (size: 0x8)
    class UTexture2D* _SulfurIcon;                                                    // 0x02F8 (size: 0x8)
    class UTexture2D* _HexoliteIcon;                                                  // 0x0300 (size: 0x8)
    class UTexture2D* _OilIcon;                                                       // 0x0308 (size: 0x8)

    class UTexture2D* GetRuinIcon(TEnumAsByte<E_RuinPuzzleType::Type> PuzzleType);
    void GetRelicIcon(EPalRelicType RelicType, class UTexture2D*& Icon);
    void GetOilIcon(class UTexture2D*& Icon);
    void GetHexoliteIcon(class UTexture2D*& Icon);
    void GetSulfurIcon(class UTexture2D*& Icon);
    void GetQuartzIcon(class UTexture2D*& Icon);
    void GetCopperIcon(class UTexture2D*& Icon);
    void GetCoalIcon(class UTexture2D*& Icon);
    void GetJunkIcon(class UTexture2D*& Icon);
    void GetFruitTreeIcon(class UTexture2D*& Icon);
    void GetOutpostIcon(class UTexture2D*& Icon);
    void GetNPCCampfireIcon(class UTexture2D*& Icon);
    void GetEggIcon(class UTexture2D*& Icon);
    void GetChestIcon(class UTexture2D*& Icon);
    void GetDungeonIcon(class UTexture2D*& Icon);
    void GetNoteIcon(class UTexture2D*& Icon);
    void GetEffigyIcon(class UTexture2D*& Icon);
}; // Size: 0x310

#endif
