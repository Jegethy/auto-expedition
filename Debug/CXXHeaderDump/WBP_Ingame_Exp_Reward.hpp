#ifndef UE4SS_SDK_WBP_Ingame_Exp_Reward_HPP
#define UE4SS_SDK_WBP_Ingame_Exp_Reward_HPP

class UWBP_Ingame_Exp_Reward_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Anm_Out;                                                  // 0x0458 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0460 (size: 0x8)
    class UCanvasPanel* Canvas_Exp;                                                   // 0x0468 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x0470 (size: 0x8)
    class UImage* Image_Base_1;                                                       // 0x0478 (size: 0x8)
    class UBP_PalTextBlock_C* Text_AddExp;                                            // 0x0480 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Title;                                             // 0x0488 (size: 0x8)

    void SetExp(int32 InExp);
    void SetTitle(FText TitleText);
    void AnmEvent_In();
    void AnmEvent_Out();
    void ExecuteUbergraph_WBP_Ingame_Exp_Reward(int32 EntryPoint);
}; // Size: 0x490

#endif
