#ifndef UE4SS_SDK_BP_AIActionSearchBase_HPP
#define UE4SS_SDK_BP_AIActionSearchBase_HPP

class UBP_AIActionSearchBase_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0138 (size: 0x8)
    class UPalPartnerSkillParameterComponent* PartnerSkillParam;                      // 0x0140 (size: 0x8)
    class APalCharacter* OwnerCharacter;                                              // 0x0148 (size: 0x8)
    class APalCharacter* PlayerCharacter;                                             // 0x0150 (size: 0x8)
    bool IsAborted;                                                                   // 0x0158 (size: 0x1)
    TSubclassOf<class UPalCoopSkillSearchBase> Search Class;                          // 0x0160 (size: 0x8)
    bool IsStopSkillByFinishAction;                                                   // 0x0168 (size: 0x1)
    class UPalCoopSkillSearchBase* SearchObject;                                      // 0x0170 (size: 0x8)

    void SetupOwner(class APawn* ControlledPawn);
    void AddSkillLog(EPalLogType LogType);
    void GetRank(int32& Rank);
    void GetOrigin(FVector& Origin);
    void Serach Mine();
    void FinishAction();
    void SetupAction(class APawn* ControlledPawn);
    void BindCoopRegisterEvent();
    void UnbindCoopRegisterEvent();
    void CoopRelease();
    void StartPartnerSkill();
    void StopPartnerSkill();
    void OnCoolDown();
    void OnOverheat();
    void ActionStart(class APawn* ControlledPawn);
    void CoopFinish();
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionAbort(class APawn* ControlledPawn);
    void OnActionNotify(const class UPalActionBase* action, FName NotifyName);
    void OnEndSearchAction();
    void ExecuteUbergraph_BP_AIActionSearchBase(int32 EntryPoint);
}; // Size: 0x178

#endif
