#ifndef UE4SS_SDK_WBP_PalWork_AccessPoint_HPP
#define UE4SS_SDK_WBP_PalWork_AccessPoint_HPP

class UWBP_PalWork_AccessPoint_C : public UUserWidget
{
    class UBP_PalTextBlock_C* Text_RequireWorkSuitability;                            // 0x0278 (size: 0x8)
    class UWBP_MainMenu_Pal_WorkIcon_C* WBP_MainMenu_Pal_WorkIcon;                    // 0x0280 (size: 0x8)

    void SetRequiredSuitability(EPalWorkSuitability WorkSuitability, int32 Rank);
}; // Size: 0x288

#endif
