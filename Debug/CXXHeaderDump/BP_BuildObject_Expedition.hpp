#ifndef UE4SS_SDK_BP_BuildObject_Expedition_HPP
#define UE4SS_SDK_BP_BuildObject_Expedition_HPP

class ABP_BuildObject_Expedition_C : public APalBuildObjectCharacterTeamMission
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0820 (size: 0x8)
    class UBoxComponent* BlockNavmesh;                                                // 0x0828 (size: 0x8)
    class UPalLimitVolumeBoxComponent* PalLimitVolumeBox;                             // 0x0830 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0838 (size: 0x8)
    class USceneComponent* IndicatorOrigin;                                           // 0x0840 (size: 0x8)
    class UStaticMeshComponent* SM_PalExpeditionFacilities;                           // 0x0848 (size: 0x8)
    class USplineComponent* CharacterWalkSpline3;                                     // 0x0850 (size: 0x8)
    class USplineComponent* CharacterWalkSpline2;                                     // 0x0858 (size: 0x8)
    class USplineComponent* CharacterWalkSpline1;                                     // 0x0860 (size: 0x8)
    class UNiagaraComponent* NS_Dungeon_Gate_In;                                      // 0x0868 (size: 0x8)
    class UBP_InteractableBox_C* BP_ChestInteract;                                    // 0x0870 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0878 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0880 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0888 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0890 (size: 0x8)
    class UBP_VisualSkeletalMeshComponent_C* CharacterVisual;                         // 0x0898 (size: 0x8)

    void OnAvailable_BlueprintImpl();
    void OnCreateAndInitTransformNewVisualEvent(class UPalCharacterVisualSkeletalMeshComponent* NewVisualComponent);
    void ExecuteUbergraph_BP_BuildObject_Expedition(int32 EntryPoint);
}; // Size: 0x8A0

#endif
