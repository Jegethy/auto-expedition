#ifndef UE4SS_SDK_BP_IngameMenu_Construction_ListFocusCalculator_HPP
#define UE4SS_SDK_BP_IngameMenu_Construction_ListFocusCalculator_HPP

class UBP_IngameMenu_Construction_ListFocusCalculator_C : public UObject
{
    int32 LastColumnIndex;                                                            // 0x0028 (size: 0x4)
    int32 MaxColumn;                                                                  // 0x002C (size: 0x4)
    int32 LastActiveListNumber;                                                       // 0x0030 (size: 0x4)
    TArray<class UWBP_IngameMenu_Construction_Group_C*> ListArray;                    // 0x0038 (size: 0x10)

    void AddList(class UWBP_IngameMenu_Construction_Group_C* ListWidget);
    void GetFocusTarget_Up(class UWBP_IngameMenu_Construction_Group_C* CurrentList, class UWidget*& Widget);
    void GetFocusTarget_Down(class UWBP_IngameMenu_Construction_Group_C* CurrentList, class UWidget*& Widget);
    void GetInitialFocusTargetIndex(int32 CurrentListNumber, int32 MaxRowIndex, int32& Index);
    void SetMaxColumnIndex(int32 Index);
}; // Size: 0x48

#endif
