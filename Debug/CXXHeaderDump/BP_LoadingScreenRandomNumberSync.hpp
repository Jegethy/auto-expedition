#ifndef UE4SS_SDK_BP_LoadingScreenRandomNumberSync_HPP
#define UE4SS_SDK_BP_LoadingScreenRandomNumberSync_HPP

class UBP_LoadingScreenRandomNumberSync_C : public UObject
{
    int32 SyncCount;                                                                  // 0x0028 (size: 0x4)
    int32 TipsNumber;                                                                 // 0x002C (size: 0x4)
    int32 IconNumber;                                                                 // 0x0030 (size: 0x4)
    bool bShouldRefleshTipsNumber;                                                    // 0x0034 (size: 0x1)
    bool bShouldRefleshIconNumber;                                                    // 0x0035 (size: 0x1)

    void ClearSyncedData();
    void GetIconNumber(int32 MinIconIndex, int32 MaxIconIndex, int32& IconIndex);
    void GetTipsNumber(int32 MinTipsCount, int32 MaxTipsCount, int32& TipsNumber);
    void EndSync();
    void StartSync();
}; // Size: 0x36

#endif
