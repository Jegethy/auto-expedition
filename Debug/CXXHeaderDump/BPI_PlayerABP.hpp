#ifndef UE4SS_SDK_BPI_PlayerABP_HPP
#define UE4SS_SDK_BPI_PlayerABP_HPP

class IBPI_PlayerABP_C : public IInterface
{

    void DisableOctaviaHeadAdjust(bool Disable);
    void DisableRidingRotation(bool Disable);
    void DisableUpperOverride(bool Disable);
    void DisableAnimationLeaning(bool Disable);
}; // Size: 0x28

#endif
