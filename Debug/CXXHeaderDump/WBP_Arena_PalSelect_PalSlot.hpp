#ifndef UE4SS_SDK_WBP_Arena_PalSelect_PalSlot_HPP
#define UE4SS_SDK_WBP_Arena_PalSelect_PalSlot_HPP

class UWBP_Arena_PalSelect_PalSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Select;                                               // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Default;                                              // 0x0288 (size: 0x8)
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;                  // 0x0290 (size: 0x8)
    FName Character Id;                                                               // 0x0298 (size: 0x8)

    void SetPalIcon(class UPalIndividualCharacterParameter* CharacterParameter);
    void SetNowSetting(bool IsSetting);
    void ExecuteUbergraph_WBP_Arena_PalSelect_PalSlot(int32 EntryPoint);
}; // Size: 0x2A0

#endif
