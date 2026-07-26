#ifndef UE4SS_SDK_BP_YakushimaBoss002_PartBase_HPP
#define UE4SS_SDK_BP_YakushimaBoss002_PartBase_HPP

class ABP_YakushimaBoss002_PartBase_C : public ABP_MonsterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0D30 (size: 0x8)
    class UPalUVEyeComponent* PalUVEye;                                               // 0x0D38 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0D40 (size: 0x8)
    class UPalIndividualCharacterHandle* EyeHandle;                                   // 0x0D48 (size: 0x8)
    bool IsBreak;                                                                     // 0x0D50 (size: 0x1)
    FName CharacterID_Green;                                                          // 0x0D54 (size: 0x8)
    TSubclassOf<class AController> Controller_Green;                                  // 0x0D60 (size: 0x8)

    FVector GetHPGaugeLocation();
    void IsRight(bool& IsHead);
    void IsLeft(bool& IsHead);
    void IsHead(bool& IsHead);
    void GetPartsType(FString& PartsType);
    void OnRep_IsBreak();
    void BndEvt__BP_YakushimaBoss002_R_DamageReactionComponent_K2Node_ComponentBoundEvent_0_OnPartBrokenDelegate__DelegateSignature(FPalDeadInfo AttackInfo);
    void SpawnEye(FPalInstanceID ID);
    void PlayDeathAnimation();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveBeginPlay();
    void UpdateLocation();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_YakushimaBoss002_PartBase(int32 EntryPoint);
}; // Size: 0xD68

#endif
