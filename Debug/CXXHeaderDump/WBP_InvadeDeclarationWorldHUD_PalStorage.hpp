#ifndef UE4SS_SDK_WBP_InvadeDeclarationWorldHUD_PalStorage_HPP
#define UE4SS_SDK_WBP_InvadeDeclarationWorldHUD_PalStorage_HPP

class UWBP_InvadeDeclarationWorldHUD_PalStorage_C : public UPalUserWidgetWorldHUD
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWBP_WarningEvent_NoticeTimer_C* WBP_WarningEvent_NoticeTimer;              // 0x0458 (size: 0x8)
    double SimpleDisplayDistance;                                                     // 0x0460 (size: 0x8)
    FVector CachedPalStorageLocation;                                                 // 0x0468 (size: 0x18)
    bool bCurrentInvadeTarget;                                                        // 0x0480 (size: 0x1)
    FGuid CachedBaseCampId;                                                           // 0x0484 (size: 0x10)
    double SimpleDistanceSquared;                                                     // 0x0498 (size: 0x8)

    void OnInvadeDeclaration(const FDateTime& StartRealTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnSetup();
    void カスタムイベント();
    void ExecuteUbergraph_WBP_InvadeDeclarationWorldHUD_PalStorage(int32 EntryPoint);
}; // Size: 0x4A0

#endif
