#ifndef UE4SS_SDK_WBP_PalSkill_KeyGuide_HPP
#define UE4SS_SDK_WBP_PalSkill_KeyGuide_HPP

class UWBP_PalSkill_KeyGuide_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UCanvasPanel* Canvas_Aim;                                                   // 0x0458 (size: 0x8)
    class UCanvasPanel* Canvas_RideSkill;                                             // 0x0460 (size: 0x8)
    class UImage* Image_Line_0;                                                       // 0x0468 (size: 0x8)
    class UImage* Image_Line_1;                                                       // 0x0470 (size: 0x8)
    class UWBP_PalSkillEntry_C* WBP_PalSkillEntry_1;                                  // 0x0478 (size: 0x8)
    class UWBP_PalSkillEntry_C* WBP_PalSkillEntry_2;                                  // 0x0480 (size: 0x8)
    class UWBP_PalSkillEntry_C* WBP_PalSkillEntry_3;                                  // 0x0488 (size: 0x8)
    class UWBP_PalSkillEntry_C* WBP_PalSkillEntry_Aim;                                // 0x0490 (size: 0x8)
    class UWBP_PalSkillEntry_C* WBP_PalSkillEntry_RideSkill;                          // 0x0498 (size: 0x8)
    TArray<class UWBP_PalSkillEntry_C*> SkillEntryArray;                              // 0x04A0 (size: 0x10)
    class UPalShooterComponent* CurrentShooter;                                       // 0x04B0 (size: 0x8)
    FDataTableRowHandle ShootMsgID;                                                   // 0x04B8 (size: 0x10)
    FDataTableRowHandle FlyMsgID;                                                     // 0x04C8 (size: 0x10)
    TMap<int32, UPalActiveSkill*> CurrentSkillMap;                                    // 0x04D8 (size: 0x50)
    class APalCharacter* As Pal Character;                                            // 0x0528 (size: 0x8)
    TSoftObjectPtr<APalCharacter> SoftRideCharacter;                                  // 0x0530 (size: 0x30)
    bool HasAdditionalRidingSkill;                                                    // 0x0560 (size: 0x1)

    void OnPlaySkillFail();
    void OnUpdateEquipWaza(class UPalIndividualCharacterParameter* IndividualParameter);
    void GetRideCharacterParameter(class UPalIndividualCharacterParameter*& IndividualParameter);
    void UpdateSkillInfo();
    void Hide();
    void OnGetOff(class AActor* RideActor);
    void OnRide(class AActor* RideActor);
    void Setup();
    void OnInitialized();
    void StartAim();
    void EndAim();
    void Destruct();
    void ExecuteUbergraph_WBP_PalSkill_KeyGuide(int32 EntryPoint);
}; // Size: 0x561

#endif
