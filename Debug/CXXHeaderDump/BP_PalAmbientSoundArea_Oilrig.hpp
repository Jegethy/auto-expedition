#ifndef UE4SS_SDK_BP_PalAmbientSoundArea_Oilrig_HPP
#define UE4SS_SDK_BP_PalAmbientSoundArea_Oilrig_HPP

class ABP_PalAmbientSoundArea_Oilrig_C : public APalAmbientSoundAreaBase
{
    class UBoxComponent* Box;                                                         // 0x02C8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02D0 (size: 0x8)

    class UPrimitiveComponent* GetAreaCollision();
}; // Size: 0x2D8

#endif
