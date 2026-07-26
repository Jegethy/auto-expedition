#ifndef UE4SS_SDK_BP_AIActionCombatHeli_BattleMode_HPP
#define UE4SS_SDK_BP_AIActionCombatHeli_BattleMode_HPP

class UBP_AIActionCombatHeli_BattleMode_C : public UBP_AIActionCombatHeliBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0168 (size: 0x8)
    class AActor* CurrentTarget;                                                      // 0x0170 (size: 0x8)
    double Const_BattleDistanceMin;                                                   // 0x0178 (size: 0x8)
    double Const_BattleDistanceMax;                                                   // 0x0180 (size: 0x8)
    double Const_BattleHeight;                                                        // 0x0188 (size: 0x8)
    double Const_SideMovePower;                                                       // 0x0190 (size: 0x8)
    class UBP_CombatHeliRpidWeaponComponent_FrontMG_C* GunComponent;                  // 0x0198 (size: 0x8)
    class UBP_CombatHeliRpidWeaponComponent_WingMiso_C* MisoComponent;                // 0x01A0 (size: 0x8)
    bool IsBomberMode;                                                                // 0x01A8 (size: 0x1)
    class UBP_CombatHeliRpidWeaponComponent_Bomber_C* BomberComponent;                // 0x01B0 (size: 0x8)
    double MoveDirectionRight;                                                        // 0x01B8 (size: 0x8)
    double tempDeltaTime;                                                             // 0x01C0 (size: 0x8)
    double Const_BombShootStartDistance;                                              // 0x01C8 (size: 0x8)
    double Const_DefaultMoveSpeedRate;                                                // 0x01D0 (size: 0x8)
    double Const_BombMoveSpeedRate;                                                   // 0x01D8 (size: 0x8)
    TArray<FPalOilrigCombatHeliRandomWeaponInfo> Const_WeaponRandomInfo;              // 0x01E0 (size: 0x10)
    bool IsStop;                                                                      // 0x01F0 (size: 0x1)
    double Const_HeightMoveSpeedRate;                                                 // 0x01F8 (size: 0x8)
    EPalOilrigCombatHeliWeaponType CurrentWeaponType;                                 // 0x0200 (size: 0x1)
    class UBP_CombatHeliRpidWeaponComponent_C* CurrentWeaponComponent;                // 0x0208 (size: 0x8)
    FTimerHandle PlayerCheckTimerHandle;                                              // 0x0210 (size: 0x8)

    void CheckPlayerDistanceForBGM();
    void RemoveAllPlayerTarget();
    void ChangeAimTarget();
    void Is Valid Current Target(bool& Valid);
    void SetupComponent();
    void TickBP();
    void ChangeMoveDirection();
    void RayCheckToTarget(bool& Success);
    void ReleaseTriggerAllWeapn();
    void ChangeNextWeapon();
    void IsNearTarget2D(double Distance, bool& Near);
    void SetMoveVelocity();
    void RotateToTarget(double DeltaTime);
    void ActionStart(class APawn* ControlledPawn);
    void AttackProcess();
    void ActionAbort(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void OnChildActionFinished(class UPawnAction* action, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode(int32 EntryPoint);
}; // Size: 0x218

#endif
