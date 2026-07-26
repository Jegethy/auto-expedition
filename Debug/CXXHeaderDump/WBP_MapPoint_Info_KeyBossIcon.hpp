#ifndef UE4SS_SDK_WBP_MapPoint_Info_KeyBossIcon_HPP
#define UE4SS_SDK_WBP_MapPoint_Info_KeyBossIcon_HPP

class UWBP_MapPoint_Info_KeyBossIcon_C : public UUserWidget
{
    class UImage* Image_NameBase;                                                     // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Name;                                              // 0x0280 (size: 0x8)
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;                  // 0x0288 (size: 0x8)

    void Setup_Hidden();
    void Setup(FName CharacterID);
}; // Size: 0x290

#endif
