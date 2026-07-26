#ifndef UE4SS_SDK_WBP_NetworkIcon_HPP
#define UE4SS_SDK_WBP_NetworkIcon_HPP

class UWBP_NetworkIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Slow;                                                 // 0x0280 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0288 (size: 0x8)
    class UImage* Image_IconBase;                                                     // 0x0290 (size: 0x8)

    void Construct();
    void OnNetworkCheckTick();
    void ExecuteUbergraph_WBP_NetworkIcon(int32 EntryPoint);
}; // Size: 0x298

#endif
