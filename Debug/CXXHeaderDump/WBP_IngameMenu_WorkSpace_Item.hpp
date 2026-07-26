#ifndef UE4SS_SDK_WBP_IngameMenu_WorkSpace_Item_HPP
#define UE4SS_SDK_WBP_IngameMenu_WorkSpace_Item_HPP

class UWBP_IngameMenu_WorkSpace_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_EnableToDisable;                                      // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Name;                                   // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Num;                                    // 0x0290 (size: 0x8)
    class UImage* Icon;                                                               // 0x0298 (size: 0x8)
    bool bUseBaseCampStorage;                                                         // 0x02A0 (size: 0x1)
    int32 TempItemCount;                                                              // 0x02A4 (size: 0x4)

    void Setup(FName ItemStaticId, int32 requireNum);
    void ExecuteUbergraph_WBP_IngameMenu_WorkSpace_Item(int32 EntryPoint);
}; // Size: 0x2A8

#endif
