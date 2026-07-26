#ifndef UE4SS_SDK_BP_AIActionReaction_FishingSpotElectricShock_HPP
#define UE4SS_SDK_BP_AIActionReaction_FishingSpotElectricShock_HPP

class UBP_AIActionReaction_FishingSpotElectricShock_C : public UBP_AIActionReaction_ElectricShock_C
{
    double EnemyFindRange;                                                            // 0x0158 (size: 0x8)

    void FindEnemy(class APalCharacter*& Enemy);
    void OnFinishElectricShock();
}; // Size: 0x160

#endif
