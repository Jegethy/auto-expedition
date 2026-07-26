#ifndef UE4SS_SDK_WBP_Crime_Found_HPP
#define UE4SS_SDK_WBP_Crime_Found_HPP

class UWBP_Crime_Found_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* Crime_Found;                                            // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Drone_Found;                                            // 0x0290 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0298 (size: 0x8)
    bool Displaying;                                                                  // 0x02A0 (size: 0x1)
    TArray<FName> Crime Ids;                                                          // 0x02A8 (size: 0x10)
    bool DroneDisplaying;                                                             // 0x02B8 (size: 0x1)

    void Finished_DEA8290E42785E70DA2914B20F7C172E();
    void Finished_8752189C4872B9EED39A3DB743928758();
    void SetCrimesFound(const TArray<FName>& CrimeIds);
    void ClearFoundList();
    void SetDroneFound();
    void ExecuteUbergraph_WBP_Crime_Found(int32 EntryPoint);
}; // Size: 0x2B9

#endif
