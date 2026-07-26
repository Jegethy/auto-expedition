#ifndef UE4SS_SDK_WBP_Ingame_Sleep_KeyGuide_HPP
#define UE4SS_SDK_WBP_Ingame_Sleep_KeyGuide_HPP

class UWBP_Ingame_Sleep_KeyGuide_C : public UUserWidget
{
    class UBP_PalTextBlock_C* Text;                                                   // 0x0278 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon;                // 0x0280 (size: 0x8)

    void Setup(FName TextId, const FName ActionName);
}; // Size: 0x288

#endif
