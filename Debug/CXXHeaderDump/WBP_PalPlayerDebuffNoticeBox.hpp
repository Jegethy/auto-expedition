#ifndef UE4SS_SDK_WBP_PalPlayerDebuffNoticeBox_HPP
#define UE4SS_SDK_WBP_PalPlayerDebuffNoticeBox_HPP

class UWBP_PalPlayerDebuffNoticeBox_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Debuff;                                       // 0x0458 (size: 0x8)
    TMap<TEnumAsByte<E_PalUIPlayerDebuffNoticeType::Type>, UWBP_DebuffNotice_C*> DisplayingDebuffWidget; // 0x0460 (size: 0x50)

    void RemoveDebuffNotice(TEnumAsByte<E_PalUIPlayerDebuffNoticeType::Type> DebuffType);
    void AddDebuffNotice(TEnumAsByte<E_PalUIPlayerDebuffNoticeType::Type> DebuffType);
    void Destruct();
    void ExecuteUbergraph_WBP_PalPlayerDebuffNoticeBox(int32 EntryPoint);
}; // Size: 0x4B0

#endif
