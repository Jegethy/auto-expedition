#ifndef UE4SS_SDK_WBP_Warning_LowMemory_HPP
#define UE4SS_SDK_WBP_Warning_LowMemory_HPP

class UWBP_Warning_LowMemory_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Image;                                                              // 0x0280 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x0288 (size: 0x8)

    void Construct();
    void OnMemoryWarning(bool bIsOver);
    void ExecuteUbergraph_WBP_Warning_LowMemory(int32 EntryPoint);
}; // Size: 0x290

#endif
