#ifndef UE4SS_SDK_WBP_CharaCre_ScrollBoxContent_Voice_HPP
#define UE4SS_SDK_WBP_CharaCre_ScrollBoxContent_Voice_HPP

class UWBP_CharaCre_ScrollBoxContent_Voice_C : public UWBP_CharaCre_ScrollBoxContentBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0470 (size: 0x8)
    class UWrapBox* WrapBox_Body;                                                     // 0x0478 (size: 0x8)
    FWBP_CharaCre_ScrollBoxContent_Voice_COnChangedVoiceID OnChangedVoiceID;          // 0x0480 (size: 0x10)
    void OnChangedVoiceID(int32 VoiceID);
    TArray<class UAkAudioEvent*> SampleVoiceArray;                                    // 0x0490 (size: 0x10)
    TMap<int32, int32> PlayVoiceMap;                                                  // 0x04A0 (size: 0x50)
    int32 VoiceCount;                                                                 // 0x04F0 (size: 0x4)
    TArray<class UWBP_CharaCre_BodyTypeButton_C*> VoiceButtons;                       // 0x04F8 (size: 0x10)
    class UWBP_CharaCre_BodyTypeButton_C* LastClickedVoiceTypeButton;                 // 0x0508 (size: 0x8)
    FWBP_CharaCre_ScrollBoxContent_Voice_COnHoveredVoiceButton OnHoveredVoiceButton;  // 0x0510 (size: 0x10)
    void OnHoveredVoiceButton(int32 VoiceID);
    FWBP_CharaCre_ScrollBoxContent_Voice_COnUnhoveredVoiceButton OnUnhoveredVoiceButton; // 0x0520 (size: 0x10)
    void OnUnhoveredVoiceButton();

    void OnUnhoveredVoiceTypeButton();
    void OnHoveredVoiceTypeButton(class UWBP_CharaCre_BodyTypeButton_C* Widget);
    void OnClickedVoiceTypeButton(class UWBP_CharaCre_BodyTypeButton_C* Widget);
    void Play Sample Voice(int32 VoiceID);
    void ApplyMakeInfo(FPalPlayerDataCharacterMakeInfo MakeInfo);
    void GetRestoreFocusTarget(class UWidget*& Widget);
    void GetTopFocusTarget(class UWidget*& Widget);
    void Construct();
    void ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice(int32 EntryPoint);
    void OnUnhoveredVoiceButton__DelegateSignature();
    void OnHoveredVoiceButton__DelegateSignature(int32 VoiceID);
    void OnChangedVoiceID__DelegateSignature(int32 VoiceID);
}; // Size: 0x530

#endif
