#ifndef UE4SS_SDK_BP_YakushimaBoss002_L_HPP
#define UE4SS_SDK_BP_YakushimaBoss002_L_HPP

class ABP_YakushimaBoss002_L_C : public ABP_YakushimaBoss002_PartBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0D68 (size: 0x8)

    void GetPartsType(FString& PartsType);
    void PlayDeathAnimation();
    void ExecuteUbergraph_BP_YakushimaBoss002_L(int32 EntryPoint);
}; // Size: 0xD70

#endif
