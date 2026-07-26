#ifndef UE4SS_SDK_BP_BuildObject_HatchingPalEgg_HPP
#define UE4SS_SDK_BP_BuildObject_HatchingPalEgg_HPP

class ABP_BuildObject_HatchingPalEgg_C : public APalBuildObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0750 (size: 0x8)
    class UBP_BuildObjectSimulateArrowComponent_C* BP_BuildObjectSimulateArrowComponent; // 0x0758 (size: 0x8)
    class UNiagaraComponent* NS_HatchingEggFinishGlow;                                // 0x0760 (size: 0x8)
    class UPalMapObjectHatchingEggParameterComponent* PalMapObjectHatchingEggParameter; // 0x0768 (size: 0x8)
    class UBP_TemperatureComponent_C* BP_TemperatureComponent;                        // 0x0770 (size: 0x8)
    class UChildActorComponent* PalEggChildActor;                                     // 0x0778 (size: 0x8)
    class UStaticMeshComponent* SM_EggHatchingMachine;                                // 0x0780 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0788 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0790 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0798 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x07A0 (size: 0x8)
    class UPalMapObjectHatchingEggModel* HatchingEggModel;                            // 0x07A8 (size: 0x8)
    class UNiagaraComponent* PalGetEffect;                                            // 0x07B0 (size: 0x8)
    FVector PalGetEffectOffset;                                                       // 0x07B8 (size: 0x18)
    TSubclassOf<class AActor> EggActorClass;                                          // 0x07D0 (size: 0x8)

    void GetHatchingTemperature(int32& Temperature);
    void OnRep_EggActorClass();
    void GetTemperatureDiff(int32& Diff);
    void ResetHatchingSpeed();
    void UpdateHatchingSpeed();
    void GetCurrentTemperature(int32& CurrentTemperature);
    void SpawnGetPalEffect();
    void SetEggAnimPlayState(bool IsPlay);
    void SetupItemForeach(class UPalItemSlot* Slot, int32 Index);
    void OnHatchedCharacter(class UPalMapObjectHatchingEggModel* Model);
    void OnUpdateHatchedCharacter(class UPalMapObjectHatchingEggModel* Model);
    void OnUpdateItemContainer(class UPalItemContainer* Container);
    void OnSetConcreteModelAvailableInternal(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OnLoaded_B204AE4F4F695277751BD0B2AE4D80AE(UClass* Loaded);
    void OnAvailable_BlueprintImpl();
    void LoadEggMeshModel(TSoftClassPtr<AActor> EggActorClass);
    void OnStartTriggerInteract(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    void OnEndTriggerInteract(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    void On Change Temperature(int32 NextTemperature);
    void OnSetConcreteModelAvailable(class UPalMapObjectConcreteModelBase* Model);
    void OnUpdateWorkable(bool Workable);
    void ExecuteUbergraph_BP_BuildObject_HatchingPalEgg(int32 EntryPoint);
}; // Size: 0x7D8

#endif
