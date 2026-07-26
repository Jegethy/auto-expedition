#ifndef UE4SS_SDK_WBP_Fishing_Hit_HPP
#define UE4SS_SDK_WBP_Fishing_Hit_HPP

class UWBP_Fishing_Hit_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Hit;                                                  // 0x0280 (size: 0x8)
    class UImage* Image_Bloom;                                                        // 0x0288 (size: 0x8)
    class UImage* Image_Mark;                                                         // 0x0290 (size: 0x8)
    class UImage* Image_Mark_1;                                                       // 0x0298 (size: 0x8)

    void Finished_2E34FB9345682690EC9932908042E186();
    void AnmEvent_Hit();
    void OnInitialized();
    void ExecuteUbergraph_WBP_Fishing_Hit(int32 EntryPoint);
}; // Size: 0x2A0

#endif
