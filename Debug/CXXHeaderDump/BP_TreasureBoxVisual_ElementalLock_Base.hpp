#ifndef UE4SS_SDK_BP_TreasureBoxVisual_ElementalLock_Base_HPP
#define UE4SS_SDK_BP_TreasureBoxVisual_ElementalLock_Base_HPP

class ABP_TreasureBoxVisual_ElementalLock_Base_C : public ABP_TreasureBoxVisual_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    double LockEmissive;                                                              // 0x0308 (size: 0x8)
    double UnlockEmissive;                                                            // 0x0310 (size: 0x8)
    class UMaterialInstanceDynamic* MaterialInstance;                                 // 0x0318 (size: 0x8)
    double CurrentEmissiveCount;                                                      // 0x0320 (size: 0x8)
    bool IsElementalUnlocked;                                                         // 0x0328 (size: 0x1)
    bool IsAnimationUpdate;                                                           // 0x0329 (size: 0x1)

    void EnableTicks();
    void ElementalUnlockAnimation(double ElapsedTime);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ChangeToElementalUnlock(bool isSkipAnim);
    void ExecuteUbergraph_BP_TreasureBoxVisual_ElementalLock_Base(int32 EntryPoint);
}; // Size: 0x32A

#endif
