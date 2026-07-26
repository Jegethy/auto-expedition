#ifndef UE4SS_SDK_WBP_Fishing_SelectBait_HPP
#define UE4SS_SDK_WBP_Fishing_SelectBait_HPP

class UWBP_Fishing_SelectBait_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0280 (size: 0x8)
    class UHorizontalBox* HorizontalBox_0;                                            // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemName;                                          // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NoItem;                                            // 0x0298 (size: 0x8)
    class UWBP_Fishing_SelectBait_Item_C* WBP_Fishing_SelectBait_Item;                // 0x02A0 (size: 0x8)
    class UWBP_Fishing_SelectBait_Item_C* WBP_Fishing_SelectBait_Item_1;              // 0x02A8 (size: 0x8)
    class UWBP_Fishing_SelectBait_Item_C* WBP_Fishing_SelectBait_Item_2;              // 0x02B0 (size: 0x8)
    class UWBP_Fishing_SelectBait_Item_C* WBP_Fishing_SelectBait_Item_3;              // 0x02B8 (size: 0x8)
    class UWBP_Fishing_SelectBait_Item_C* WBP_Fishing_SelectBait_Item_4;              // 0x02C0 (size: 0x8)
    class UWBP_Fishing_SelectBait_Item_C* WBP_Fishing_SelectBait_Item_5;              // 0x02C8 (size: 0x8)
    class UWBP_Fishing_SelectBait_Item_C* WBP_Fishing_SelectBait_Item_6;              // 0x02D0 (size: 0x8)
    class UWBP_Fishing_SelectBait_Item_C* WBP_Fishing_SelectBait_Item_7;              // 0x02D8 (size: 0x8)
    class UWBP_Fishing_SelectBait_Item_C* WBP_Fishing_SelectBait_Item_8;              // 0x02E0 (size: 0x8)
    class UWBP_Fishing_SelectBait_Item_C* WBP_Fishing_SelectBait_Item_9;              // 0x02E8 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon_0;              // 0x02F0 (size: 0x8)
    FName SelectStaticItemId;                                                         // 0x02F8 (size: 0x8)
    TArray<class UWBP_Fishing_SelectBait_Item_C*> SelectBaitList;                     // 0x0300 (size: 0x10)
    double ItemSize;                                                                  // 0x0310 (size: 0x8)
    double CurrentPosX;                                                               // 0x0318 (size: 0x8)
    double DefaultPosX;                                                               // 0x0320 (size: 0x8)
    int32 MaxIndex;                                                                   // 0x0328 (size: 0x4)
    int32 CurrentIndex;                                                               // 0x032C (size: 0x4)
    double MoveStartPosX;                                                             // 0x0330 (size: 0x8)
    double MoveEndPosX;                                                               // 0x0338 (size: 0x8)
    double MoveTimer;                                                                 // 0x0340 (size: 0x8)
    double MoveDuration;                                                              // 0x0348 (size: 0x8)
    double MoveAlpha;                                                                 // 0x0350 (size: 0x8)

    void ChangeSelect(int32 NewIndex);
    void OnSelected();
    void SetVisibleItems(bool IsVisible);
    void Setup(TArray<FPalStaticItemIdAndNum>& ItemArray, int32 SelectIndex);
    void AnmEvent_In();
    void OnInitialized();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_Fishing_SelectBait(int32 EntryPoint);
}; // Size: 0x358

#endif
