#ifndef UE4SS_SDK_BI_PalFishingNotifyInterface_HPP
#define UE4SS_SDK_BI_PalFishingNotifyInterface_HPP

class IBI_PalFishingNotifyInterface_C : public IInterface
{

    void OnFishingActionShowFish();
    void OnSalvageSuccess();
    void OnSalvageActionEnd();
    void OnSalvageActionStart(FVector ThrowLocation);
    void OnFishingActionCancel();
    void OnFishingActionEnd();
    void OnFishingActionStart();
}; // Size: 0x28

#endif
