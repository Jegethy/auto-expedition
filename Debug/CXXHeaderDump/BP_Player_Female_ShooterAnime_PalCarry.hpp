#ifndef UE4SS_SDK_BP_Player_Female_ShooterAnime_PalCarry_HPP
#define UE4SS_SDK_BP_Player_Female_ShooterAnime_PalCarry_HPP

class UBP_Player_Female_ShooterAnime_PalCarry_C : public UBP_Player_Female_ShooterAnime_Base_C
{
    class UAnimMontage* Ride_Fire_Front;                                              // 0x0328 (size: 0x8)
    class UAnimMontage* Ride_Fire_Right;                                              // 0x0330 (size: 0x8)
    class UAnimMontage* Ride_Fire_Left;                                               // 0x0338 (size: 0x8)

    void ChangeRidePullTriggerAnime(EPalStepAxisType Direction);
}; // Size: 0x340

#endif
