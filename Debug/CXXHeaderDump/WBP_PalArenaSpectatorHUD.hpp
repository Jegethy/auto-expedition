#ifndef UE4SS_SDK_WBP_PalArenaSpectatorHUD_HPP
#define UE4SS_SDK_WBP_PalArenaSpectatorHUD_HPP

class UWBP_PalArenaSpectatorHUD_C : public UPalUserWidgetStackableUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0468 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_PlayerName;                             // 0x0470 (size: 0x8)
    class UCanvasPanel* CanvasPanel_PlayerName;                                       // 0x0478 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0480 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x0488 (size: 0x8)
    class UWBP_Ingame_Chat_Wrapper_C* WBP_Ingame_Chat_Wrapper;                        // 0x0490 (size: 0x8)
    class UWBP_PalKeyGuideIconAndText_C* WBP_PalKeyGuideIconAndText_Exit;             // 0x0498 (size: 0x8)
    class UWBP_PalKeyGuideIconAndText_C* WBP_PalKeyGuideIconAndText_Free;             // 0x04A0 (size: 0x8)
    class UWBP_PalKeyGuideIconAndText_C* WBP_PalKeyGuideIconAndText_Player;           // 0x04A8 (size: 0x8)
    class UWBP_PalKeyGuideIconAndText_C* WBP_PalKeyGuideIconAndText_TopDown;          // 0x04B0 (size: 0x8)
    FPalDataTableRowName_UIInputAction ActionNameEscape;                              // 0x04B8 (size: 0x8)
    FPalDataTableRowName_UIInputAction ActionNameSpectateNextPlayer;                  // 0x04C0 (size: 0x8)
    FPalDataTableRowName_UIInputAction ActionNameSpectateFreely;                      // 0x04C8 (size: 0x8)
    FTimerHandle DelayedSetupTimerHandle;                                             // 0x04D0 (size: 0x8)
    FPalDataTableRowName_UIInputAction ActionNameOpenChat;                            // 0x04D8 (size: 0x8)
    FPalUIActionBindData BindDataActionNameEscape;                                    // 0x04E0 (size: 0x4)
    FPalUIActionBindData BindDataActionNameOpenChat;                                  // 0x04E4 (size: 0x4)
    FPalUIActionBindData BinDataActionNameSpectateNextPlayer;                         // 0x04E8 (size: 0x4)
    FPalUIActionBindData BindDataActionNameSpectateFreely;                            // 0x04EC (size: 0x4)
    FPalDataTableRowName_UIInputAction ActionNameSpectateTopDown;                     // 0x04F0 (size: 0x8)
    FPalUIActionBindData BindDataActionNameTopDown;                                   // 0x04F8 (size: 0x4)

    void On Spectate Next Player(FString PlayerName, EPalArenaPlayerIndex IndexType);
    void SetUILayerVisibility(bool bIsHide, FGameplayTag LayerTagName);
    void UnRegisterInputActions();
    void RegisterInputActions();
    void RequestOpenChat();
    void Spectate TopDown();
    void SpectateFreely();
    void SpectateNextPlayer();
    void EndSpectate();
    void OnSetup();
    void OnClosed();
    void ExecuteUbergraph_WBP_PalArenaSpectatorHUD(int32 EntryPoint);
}; // Size: 0x4FC

#endif
