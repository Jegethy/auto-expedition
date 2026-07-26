#ifndef UE4SS_SDK_WBP_Map_IconBoss_HPP
#define UE4SS_SDK_WBP_Map_IconBoss_HPP

class UWBP_Map_IconBoss_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0538 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Boss;                                             // 0x0540 (size: 0x8)
    class UImage* Icon_EnemyCamp;                                                     // 0x0548 (size: 0x8)
    class UImage* Icon_Frame;                                                         // 0x0550 (size: 0x8)
    class UImage* Icon_HumanBoss;                                                     // 0x0558 (size: 0x8)
    class UImage* Icon_Oilrig;                                                        // 0x0560 (size: 0x8)
    class UImage* Image_ClearMark;                                                    // 0x0568 (size: 0x8)
    class UImage* Image_HiddenLocation;                                               // 0x0570 (size: 0x8)
    class UImage* Image_InCave;                                                       // 0x0578 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x0580 (size: 0x8)
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;                  // 0x0588 (size: 0x8)
    bool Is Defeated;                                                                 // 0x0590 (size: 0x1)
    FPalSpawnerOneTribeInfo Spawner Info;                                             // 0x0594 (size: 0x20)
    FName Character Id;                                                               // 0x05B4 (size: 0x8)
    int32 Level;                                                                      // 0x05BC (size: 0x4)
    FName Spawner Id;                                                                 // 0x05C0 (size: 0x8)
    FName Original Character Id;                                                      // 0x05C8 (size: 0x8)
    FName Original Spawner Id;                                                        // 0x05D0 (size: 0x8)
    FVector SpawnerPosition;                                                          // 0x05D8 (size: 0x18)
    FName MyMapName;                                                                  // 0x05F0 (size: 0x8)

    void IsHiddenLocation(bool& bIsHidden);
    bool GetLocationOnLandscape(FVector& OutLocation);
    void UpdateBossIconState();
    void GetInvisibleButton(class UWidget*& Button);
    void SetOilrig(int32 Level, FName Character Id, FVector Location, FName MapName);
    void BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void SetBoss(FName CharacterID, int32 Level, FName Spawner Id, FName OriginalCharacterId, FName OriginalSpawnerID, FVector Location, FName MapName);
    void ExecuteUbergraph_WBP_Map_IconBoss(int32 EntryPoint);
}; // Size: 0x5F8

#endif
