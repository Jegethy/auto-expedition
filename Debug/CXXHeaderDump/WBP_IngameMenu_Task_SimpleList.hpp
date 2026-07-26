#ifndef UE4SS_SDK_WBP_IngameMenu_Task_SimpleList_HPP
#define UE4SS_SDK_WBP_IngameMenu_Task_SimpleList_HPP

class UWBP_IngameMenu_Task_SimpleList_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0658 (size: 0x8)
    class UCanvasPanel* MainCanvas;                                                   // 0x0660 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalActionInfo;                                     // 0x0668 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalName;                                           // 0x0670 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_0;                        // 0x0678 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_1;                        // 0x0680 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_2;                        // 0x0688 (size: 0x8)
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot;                  // 0x0690 (size: 0x8)
    TSoftObjectPtr<UPalIndividualCharacterSlot> bindedSlot;                           // 0x0698 (size: 0x30)
    TArray<class UWBP_MainMenu_Pal_State_C*> ConditionWidgetArray;                    // 0x06C8 (size: 0x10)

    void UpdateNickname(FString NewNickName);
    void Setup(class UPalIndividualCharacterSlot* TargetSlot);
    void UpdateCondition(TArray<EPalUIConditionType>& Conditions);
    void Clear();
    void OnInitialized();
    void ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList(int32 EntryPoint);
}; // Size: 0x6D8

#endif
