#ifndef UE4SS_SDK_BP_ActionDeath_YakushimaBoss002_HPP
#define UE4SS_SDK_BP_ActionDeath_YakushimaBoss002_HPP

class UBP_ActionDeath_YakushimaBoss002_C : public UBP_ActionDeath_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)

    void OnBeginAction();
    void ApplyRagdoll();
    void ExecuteUbergraph_BP_ActionDeath_YakushimaBoss002(int32 EntryPoint);
}; // Size: 0x228

#endif
