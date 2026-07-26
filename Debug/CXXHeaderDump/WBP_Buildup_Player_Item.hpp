#ifndef UE4SS_SDK_WBP_Buildup_Player_Item_HPP
#define UE4SS_SDK_WBP_Buildup_Player_Item_HPP

class UWBP_Buildup_Player_Item_C : public UUserWidget
{
    class UImage* Image_IconHaveItem;                                                 // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* Text_HaveNum;                                           // 0x0280 (size: 0x8)
    EPalRelicType MyRelicType;                                                        // 0x0288 (size: 0x1)

    void DisplayFIxedRelicCount(int32 DisplayCount);
    void DisplayCurrentRelicCount();
    void SetRelicType(EPalRelicType RelicType);
}; // Size: 0x289

#endif
