#ifndef UE4SS_SDK_BPI_PalWeaponAnimatioNotify_HPP
#define UE4SS_SDK_BPI_PalWeaponAnimatioNotify_HPP

class IBPI_PalWeaponAnimatioNotify_C : public IInterface
{

    void HiddenWeaponSubPart(bool isHidden);
    void OnNotify(TEnumAsByte<E_PalWeaponAnimationNotify::Type> Notify);
}; // Size: 0x28

#endif
