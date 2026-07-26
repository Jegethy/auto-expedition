#ifndef UE4SS_SDK_WBP_BulletChange_HPP
#define UE4SS_SDK_WBP_BulletChange_HPP

class UWBP_BulletChange_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UPalScrollBox* ScrollBox_Bullet;                                            // 0x0458 (size: 0x8)
    class UWBP_BulletChangeList_C* WBP_BulletChangeList;                              // 0x0460 (size: 0x8)
    class UWBP_BulletChangeList_C* WBP_BulletChangeList_126;                          // 0x0468 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon;                // 0x0470 (size: 0x8)
    TMap<class FName, class UWBP_BulletChangeList_C*> ListWidgetMap;                  // 0x0478 (size: 0x50)
    class UWBP_BulletChangeList_C* LastSelectedWidget;                                // 0x04C8 (size: 0x8)
    FTimerHandle FadeoutTimerHandle;                                                  // 0x04D0 (size: 0x8)
    FName CurrentSelectedBulletId;                                                    // 0x04D8 (size: 0x8)
    FPalDataTableRowName_UIInputAction ChangeNextBulletAction;                        // 0x04E0 (size: 0x8)
    FPalDataTableRowName_UIInputAction ChangePrevBulletAction;                        // 0x04E8 (size: 0x8)
    FPalUIActionBindData ChangeBulletNextActionHandle;                                // 0x04F0 (size: 0x4)
    FPalUIActionBindData ChangeBulletPrevActionHandle;                                // 0x04F4 (size: 0x4)

    void OnInputAction_ChangePrevBullet();
    void OnInputAction_ChangeNextBullet();
    void UnregisterChangeBulletAction();
    void RegisterChangeBulletAction();
    void ScrollToBullet(FName TargetBulletId);
    void ToListDisplay();
    void ToSimpleDisplay(FName CurrentBulletId, bool bPlayFadeAnimation);
    void OnTimerEvent_Fadeout();
    void ClearFadeoutTImer();
    void ResetFadeoutTimer();
    void SelectBullet(FName BulletItemId);
    void SetBulletList(TArray<FName>& BulletItemIdList);
    void Destruct();
    void ExecuteUbergraph_WBP_BulletChange(int32 EntryPoint);
}; // Size: 0x4F8

#endif
