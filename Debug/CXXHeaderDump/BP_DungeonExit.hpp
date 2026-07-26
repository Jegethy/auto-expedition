#ifndef UE4SS_SDK_BP_DungeonExit_HPP
#define UE4SS_SDK_BP_DungeonExit_HPP

class ABP_DungeonExit_C : public APalDungeonExit
{
    class UNiagaraComponent* Niagara;                                                 // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* SM_Pal_DungeonPortalMarker;                           // 0x02A8 (size: 0x8)
    class UBoxComponent* WarpFoundation;                                              // 0x02B0 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x02B8 (size: 0x8)
    class USceneComponent* WarpPoint;                                                 // 0x02C0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C8 (size: 0x8)

    FTransform GetWarpPoint();
}; // Size: 0x2D0

#endif
