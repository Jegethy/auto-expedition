#ifndef UE4SS_SDK_BI_PalGrapplingNotifyInterface_HPP
#define UE4SS_SDK_BI_PalGrapplingNotifyInterface_HPP

class IBI_PalGrapplingNotifyInterface_C : public IInterface
{

    void OnGrapplingActionEnd();
    void OnGrapplingActionStart(const FVector HitLocation, double CoolTimeRate);
}; // Size: 0x28

#endif
