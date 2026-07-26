#ifndef UE4SS_SDK_WBP_PalCommonButtonBase_HPP
#define UE4SS_SDK_WBP_PalCommonButtonBase_HPP

class UWBP_PalCommonButtonBase_C : public UCommonButtonBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x14F0 (size: 0x8)
    bool HideFocusCursor;                                                             // 0x14F8 (size: 0x1)
    class UAkAudioEvent* HoverAKAudioEvent;                                           // 0x1500 (size: 0x8)
    class UAkAudioEvent* UnhoverAKAudioEvent;                                         // 0x1508 (size: 0x8)
    class UAkAudioEvent* ClickAKAudioEvent;                                           // 0x1510 (size: 0x8)
    FWBP_PalCommonButtonBase_COnButtonPressed OnButtonPressed;                        // 0x1518 (size: 0x10)
    void OnButtonPressed(class UCommonButtonBase* Button);
    FWBP_PalCommonButtonBase_COnButtonReleased OnButtonReleased;                      // 0x1528 (size: 0x10)
    void OnButtonReleased(class UCommonButtonBase* Button);
    bool bHasFocus;                                                                   // 0x1538 (size: 0x1)

    void PlayAkSound(class UAkAudioEvent* AudioEvent);
    void BP_OnHovered();
    void BP_OnUnhovered();
    void Destruct();
    void BP_OnClicked();
    void BP_OnPressed();
    void BP_OnReleased();
    void OnAddedToFocusPath(FFocusEvent InFocusEvent);
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    void ExecuteUbergraph_WBP_PalCommonButtonBase(int32 EntryPoint);
    void OnButtonReleased__DelegateSignature(class UCommonButtonBase* Button);
    void OnButtonPressed__DelegateSignature(class UCommonButtonBase* Button);
}; // Size: 0x1539

#endif
