#ifndef UE4SS_SDK_BP_Status_YakushimaBoss002_ChangeMorph_HPP
#define UE4SS_SDK_BP_Status_YakushimaBoss002_ChangeMorph_HPP

class UBP_Status_YakushimaBoss002_ChangeMorph_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    FName Const_MorphName;                                                            // 0x00B8 (size: 0x8)

    void Change Morph(double Value);
    void OnBeginStatus();
    void OnEndStatus();
    void ExecuteUbergraph_BP_Status_YakushimaBoss002_ChangeMorph(int32 EntryPoint);
}; // Size: 0xC0

#endif
