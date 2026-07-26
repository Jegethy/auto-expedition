#ifndef UE4SS_SDK_WBP_ItemInfo_ForItemBooth_HPP
#define UE4SS_SDK_WBP_ItemInfo_ForItemBooth_HPP

class UWBP_ItemInfo_ForItemBooth_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWBP_InventoryEquipment_ItemInfo_C* WBP_InventoryEquipment_ItemInfo_Cost;   // 0x0280 (size: 0x8)
    class UWBP_InventoryEquipment_ItemInfo_C* WBP_InventoryEquipment_ItemInfo_Product; // 0x0288 (size: 0x8)

    void SetItemPairInfo(FPalItemAndNum Product, FPalItemAndNum Cost);
    void ExecuteUbergraph_WBP_ItemInfo_ForItemBooth(int32 EntryPoint);
}; // Size: 0x290

#endif
