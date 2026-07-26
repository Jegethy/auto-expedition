#ifndef UE4SS_SDK_WBP_Menu_CharacterExpGauge_HPP
#define UE4SS_SDK_WBP_Menu_CharacterExpGauge_HPP

class UWBP_Menu_CharacterExpGauge_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0658 (size: 0x8)
    class UImage* Image;                                                              // 0x0660 (size: 0x8)
    class UImage* Image_398;                                                          // 0x0668 (size: 0x8)
    class UProgressBar* ProgressBar_58;                                               // 0x0670 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NextExp;                                           // 0x0678 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowLevelNum;                                       // 0x0680 (size: 0x8)

    void UpdateExp(int64 addExp, int64 oldExp, double nowExpRate);
    void UpdateLevel(int32 NewLevel);
    void OnInitialized();
    void Destruct();
    void ExecuteUbergraph_WBP_Menu_CharacterExpGauge(int32 EntryPoint);
}; // Size: 0x688

#endif
