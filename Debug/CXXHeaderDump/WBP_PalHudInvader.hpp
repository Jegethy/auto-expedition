#ifndef UE4SS_SDK_WBP_PalHudInvader_HPP
#define UE4SS_SDK_WBP_PalHudInvader_HPP

class UWBP_PalHudInvader_C : public UPalUserWidgetWorldHUD
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UImage* MI_Icon;                                                            // 0x0458 (size: 0x8)
    FGuid CacheGroupId;                                                               // 0x0460 (size: 0x10)

    void OnSetup();
    void ParentDestroyEvent(class AActor* DestroyedActor);
    void ParentDeadEvent(FPalDeadInfo DeadInfo);
    void OnInvadeEnd(const FPalIncidentBroadcastParameter& Parameter);
    void ExecuteUbergraph_WBP_PalHudInvader(int32 EntryPoint);
}; // Size: 0x470

#endif
