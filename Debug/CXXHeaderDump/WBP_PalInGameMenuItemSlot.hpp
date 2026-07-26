#ifndef UE4SS_SDK_WBP_PalInGameMenuItemSlot_HPP
#define UE4SS_SDK_WBP_PalInGameMenuItemSlot_HPP

class UWBP_PalInGameMenuItemSlot_C : public UWBP_PalItemSlotBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemNum;                                           // 0x04F0 (size: 0x8)
    class UWBP_PalInGameMenuItemIcon_C* WBP_PalInGameMenuItemIcon;                    // 0x04F8 (size: 0x8)

    void RegisterItemIconWidget(class UWBP_PalItemIconBase_C*& IconWidget);
    void OnInitialized();
    void UpdateSlotEvent(class UPalItemSlot* TargetSlot);
    void EmptySlotEvent();
    void ValidSlotEvent();
    void ExecuteUbergraph_WBP_PalInGameMenuItemSlot(int32 EntryPoint);
}; // Size: 0x500

#endif
