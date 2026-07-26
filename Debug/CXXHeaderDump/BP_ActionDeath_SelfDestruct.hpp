#ifndef UE4SS_SDK_BP_ActionDeath_SelfDestruct_HPP
#define UE4SS_SDK_BP_ActionDeath_SelfDestruct_HPP

class UBP_ActionDeath_SelfDestruct_C : public UBP_ActionDeath_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    TSubclassOf<class ABP_SkillEffect_SelfDestruct_C> ExClass;                        // 0x0228 (size: 0x8)

    void GetExClass();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionDeath_SelfDestruct(int32 EntryPoint);
}; // Size: 0x230

#endif
