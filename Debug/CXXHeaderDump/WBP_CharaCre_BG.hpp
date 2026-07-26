#ifndef UE4SS_SDK_WBP_CharaCre_BG_HPP
#define UE4SS_SDK_WBP_CharaCre_BG_HPP

class UWBP_CharaCre_BG_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Light_OnToOff;                                        // 0x0280 (size: 0x8)
    class UImage* Image;                                                              // 0x0288 (size: 0x8)
    class UImage* Image_Tri_00;                                                       // 0x0290 (size: 0x8)
    class UImage* Image_Tri_01;                                                       // 0x0298 (size: 0x8)
    class UImage* Image_Tri_02;                                                       // 0x02A0 (size: 0x8)
    class UImage* Image_Tri_03;                                                       // 0x02A8 (size: 0x8)
    class UImage* Image_Tri_04;                                                       // 0x02B0 (size: 0x8)
    class UImage* Image_Tri_05;                                                       // 0x02B8 (size: 0x8)
    class UImage* Image_Tri_06;                                                       // 0x02C0 (size: 0x8)
    class UImage* Image_Tri_07;                                                       // 0x02C8 (size: 0x8)
    class UImage* Image_Tri_08;                                                       // 0x02D0 (size: 0x8)

    void AnmEvent_FloorIn();
    void AnmEvent_FloorOut();
    void ExecuteUbergraph_WBP_CharaCre_BG(int32 EntryPoint);
}; // Size: 0x2D8

#endif
