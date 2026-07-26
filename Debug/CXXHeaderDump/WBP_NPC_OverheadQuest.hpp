#ifndef UE4SS_SDK_WBP_NPC_OverheadQuest_HPP
#define UE4SS_SDK_WBP_NPC_OverheadQuest_HPP

class UWBP_NPC_OverheadQuest_C : public UUserWidget
{
    class UWidgetAnimation* Anm_Show;                                                 // 0x0278 (size: 0x8)
    class UCanvasPanel* Canvas_Main;                                                  // 0x0280 (size: 0x8)
    class UCanvasPanel* Canvas_Sub;                                                   // 0x0288 (size: 0x8)
    class UImage* Image_Frame;                                                        // 0x0290 (size: 0x8)
    class UImage* Image_Frame_1;                                                      // 0x0298 (size: 0x8)
    class UImage* Image_Frame_2;                                                      // 0x02A0 (size: 0x8)
    class UImage* Image_Frame_3;                                                      // 0x02A8 (size: 0x8)
    class UImage* Image_Main_Add;                                                     // 0x02B0 (size: 0x8)
    class UImage* Image_Main_Icon;                                                    // 0x02B8 (size: 0x8)
    class UImage* Image_Sub_Add;                                                      // 0x02C0 (size: 0x8)
    class UImage* Image_Sub_Icon;                                                     // 0x02C8 (size: 0x8)

    void Setup(FName QuestId);
}; // Size: 0x2D0

#endif
