#ifndef UE4SS_SDK_BP_PalHUDService_HPP
#define UE4SS_SDK_BP_PalHUDService_HPP

class UBP_PalHUDService_C : public UPalHUDService
{
    class UBP_LoadingScreenRandomNumberSync_C* LoadingScreenSync;                     // 0x02F8 (size: 0x8)

    void CreateLoadingScreenSync();
}; // Size: 0x300

#endif
