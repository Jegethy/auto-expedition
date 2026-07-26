#ifndef UE4SS_SDK_BP_BuildObject_BaseCampWorkHard_02_HPP
#define UE4SS_SDK_BP_BuildObject_BaseCampWorkHard_02_HPP

class ABP_BuildObject_BaseCampWorkHard_02_C : public APalBuildObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0750 (size: 0x8)
    class UPalMapObjectBaseCampPassiveEffectSanityWatchtowerParameterComponent* BaseCampPassiveEffectSanityWatchtowerParameter; // 0x0758 (size: 0x8)
    class UStaticMeshComponent* SM_SurveillanceTableAdvanced;                         // 0x0760 (size: 0x8)
    class UBP_BuildObjectSimulateArrowComponent_C* BP_BuildObjectSimulateArrowComponent; // 0x0768 (size: 0x8)
    class UPalMapObjectBaseCampPassiveEffectWorkHardParameterComponent* BaseCampPassiveEffectWorkHardParameter; // 0x0770 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0778 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0780 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0788 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0790 (size: 0x8)
    class UMaterialInstanceDynamic* WorkTypeMaterialInstance;                         // 0x0798 (size: 0x8)
    class UPalMapObjectBaseCampPassiveWorkHardModel* WorkHardModel;                   // 0x07A0 (size: 0x8)
    class UPalBaseCampPassiveEffect_WorkHard* PassiveEffectWorkHard;                  // 0x07A8 (size: 0x8)

    void On Update Work Hard Type(class UPalBaseCampPassiveEffect_WorkHard* PassiveEffectWorkHard);
    void SetupWorkHardModel(class UPalMapObjectBaseCampPassiveWorkHardModel* InWorkHardModel);
    void UpdateWorkTypeMaterialInstance(bool IsValidWorkType, EPalBaseCampPassiveEffectWorkHardType WorkType);
    void UpdateWorkTypeMaterial();
    void SetupWorkTypeMaterial();
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OnAvailable_BlueprintImpl();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BuildObject_BaseCampWorkHard_02(int32 EntryPoint);
}; // Size: 0x7B0

#endif
