#ifndef UE4SS_SDK_WBP_MainMenu_Money_HPP
#define UE4SS_SDK_WBP_MainMenu_Money_HPP

class UWBP_MainMenu_Money_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Money;                                             // 0x0280 (size: 0x8)

    void WBP_MainMenu_Money_AutoGenFunc(int64 NowMoney);
    void UpdateMoney(FString NowMoney);
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_MainMenu_Money(int32 EntryPoint);
}; // Size: 0x288

#endif
