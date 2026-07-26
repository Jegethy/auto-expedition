#ifndef UE4SS_SDK_BP_Action_NPC_MontageBase_HPP
#define UE4SS_SDK_BP_Action_NPC_MontageBase_HPP

class UBP_Action_NPC_MontageBase_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    TSoftObjectPtr<UAnimMontage> Montage;                                             // 0x0168 (size: 0x30)
    class UAnimMontage* As Anim Montage;                                              // 0x0198 (size: 0x8)
    TSubclassOf<class ABP_Prop_Base_C> Prop;                                          // 0x01A0 (size: 0x8)
    FName PropAttachSocket;                                                           // 0x01A8 (size: 0x8)
    class ABP_Prop_Base_C* SpawnedProp;                                               // 0x01B0 (size: 0x8)

    void OnNotifyEnd_C44DAAE64C68BBCA06B70F896C701617(FName NotifyName);
    void OnNotifyBegin_C44DAAE64C68BBCA06B70F896C701617(FName NotifyName);
    void OnInterrupted_C44DAAE64C68BBCA06B70F896C701617(FName NotifyName);
    void OnBlendOut_C44DAAE64C68BBCA06B70F896C701617(FName NotifyName);
    void OnCompleted_C44DAAE64C68BBCA06B70F896C701617(FName NotifyName);
    void OnLoaded_E2F4FF66467027F0B57C5E81F107A362(class UObject* Loaded);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_NPC_MontageBase(int32 EntryPoint);
}; // Size: 0x1B8

#endif
