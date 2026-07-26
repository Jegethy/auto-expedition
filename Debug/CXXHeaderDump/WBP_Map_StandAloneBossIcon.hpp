#ifndef UE4SS_SDK_WBP_Map_StandAloneBossIcon_HPP
#define UE4SS_SDK_WBP_Map_StandAloneBossIcon_HPP

class UWBP_Map_StandAloneBossIcon_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0538 (size: 0x8)
    class UImage* Icon_KeyBoss;                                                       // 0x0540 (size: 0x8)
    class UImage* Icon_LastBoss;                                                      // 0x0548 (size: 0x8)
    class UImage* Image_ClearMark;                                                    // 0x0550 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x0558 (size: 0x8)
    bool Is Defeated;                                                                 // 0x0560 (size: 0x1)
    FName BossBattleRowName;                                                          // 0x0564 (size: 0x8)
    FVector SpawnerPosition;                                                          // 0x0570 (size: 0x18)
    class APalBossTower* BossTower;                                                   // 0x0588 (size: 0x8)
    TArray<FName> CharacterIds;                                                       // 0x0590 (size: 0x10)
    int32 Level;                                                                      // 0x05A0 (size: 0x4)

    void CreateBossList(EPalBossType BossType);
    void Setup_Internal(class UPalLocationPoint* LocationPoint);
    void SetBoss(EPalBossType BossType, FVector Location, FName BossBattleRowName);
    bool GetLocationOnLandscape(FVector& OutLocation);
    void Update Boss Icon State();
    void GetInvisibleButton(class UWidget*& Button);
    void BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Map_StandAloneBossIcon(int32 EntryPoint);
}; // Size: 0x5A4

#endif
