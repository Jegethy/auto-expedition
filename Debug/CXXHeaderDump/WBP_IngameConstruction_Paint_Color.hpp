#ifndef UE4SS_SDK_WBP_IngameConstruction_Paint_Color_HPP
#define UE4SS_SDK_WBP_IngameConstruction_Paint_Color_HPP

class UWBP_IngameConstruction_Paint_Color_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_ColorUpdate;                                          // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0288 (size: 0x8)
    class UHorizontalBox* Horizontal_KeyGuide;                                        // 0x0290 (size: 0x8)
    class UImage* Image;                                                              // 0x0298 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02A0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_4;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_5;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_6;                                                            // 0x02C8 (size: 0x8)
    class UImage* Image_7;                                                            // 0x02D0 (size: 0x8)
    class UImage* Image_50;                                                           // 0x02D8 (size: 0x8)
    class UImage* Image_81;                                                           // 0x02E0 (size: 0x8)
    class UImage* Image_Color;                                                        // 0x02E8 (size: 0x8)
    class UImage* Image_Frame;                                                        // 0x02F0 (size: 0x8)
    class UImage* Image_Frame_Focus;                                                  // 0x02F8 (size: 0x8)
    class UImage* Image_GuideIconShadow;                                              // 0x0300 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0308 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon_0;              // 0x0310 (size: 0x8)

    void SetPaletteInfo(FFPalUIPaintPaletteInfo Info);
    void UnSelect();
    void Select();
    void PlayAnimatio_Select();
    void PlayAnimation_Unselect();
    void PlayAnimation_ChangeColor();
    void ExecuteUbergraph_WBP_IngameConstruction_Paint_Color(int32 EntryPoint);
}; // Size: 0x318

#endif
