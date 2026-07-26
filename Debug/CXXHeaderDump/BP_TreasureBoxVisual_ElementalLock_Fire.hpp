#ifndef UE4SS_SDK_BP_TreasureBoxVisual_ElementalLock_Fire_HPP
#define UE4SS_SDK_BP_TreasureBoxVisual_ElementalLock_Fire_HPP

class ABP_TreasureBoxVisual_ElementalLock_Fire_C : public ABP_TreasureBoxVisual_ElementalLock_Base_C
{
    class UNiagaraComponent* OpenEffect1;                                             // 0x0330 (size: 0x8)
    class UNiagaraComponent* OpenEffect;                                              // 0x0338 (size: 0x8)

    void ElementalUnlockAnimation(double ElapsedTime);
}; // Size: 0x340

#endif
