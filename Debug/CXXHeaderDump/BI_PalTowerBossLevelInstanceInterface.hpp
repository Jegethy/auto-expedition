#ifndef UE4SS_SDK_BI_PalTowerBossLevelInstanceInterface_HPP
#define UE4SS_SDK_BI_PalTowerBossLevelInstanceInterface_HPP

class IBI_PalTowerBossLevelInstanceInterface_C : public IInterface
{

    void SetBossCurrentInstanceRoot(class APalBossBattleInstanceRoot* InstanceRoot);
    void GetCurrentInstanceRoot(class APalBossBattleInstanceRoot*& InstanceRoot);
}; // Size: 0x28

#endif
