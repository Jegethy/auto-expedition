#ifndef UE4SS_SDK_WBP_Common_PagingDot_HPP
#define UE4SS_SDK_WBP_Common_PagingDot_HPP

class UWBP_Common_PagingDot_C : public UUserWidget
{
    class UWidgetAnimation* Anm_ON;                                                   // 0x0278 (size: 0x8)
    class UImage* Image_Off_Base;                                                     // 0x0280 (size: 0x8)
    class UImage* Image_Off_Base_1;                                                   // 0x0288 (size: 0x8)
    class UImage* Image_On;                                                           // 0x0290 (size: 0x8)

    void SetActiveImage(bool bOn, bool bImmediate);
}; // Size: 0x298

#endif
