#ifndef UE4SS_SDK_WBP_Reticle_KeyGuide_HPP
#define UE4SS_SDK_WBP_Reticle_KeyGuide_HPP

class UWBP_Reticle_KeyGuide_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Cancel;                                            // 0x0280 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon;                // 0x0288 (size: 0x8)
    bool CurrentIsCancel;                                                             // 0x0290 (size: 0x1)
    FDataTableRowHandle MsgID;                                                        // 0x0298 (size: 0x10)
    FName PlayerInputActionName;                                                      // 0x02A8 (size: 0x8)

    void SetKeyGuideInfo(TEnumAsByte<Enum_ReticleCancel_DisplayType::Type> DisplayType);
    void Construct();
    void ExecuteUbergraph_WBP_Reticle_KeyGuide(int32 EntryPoint);
}; // Size: 0x2B0

#endif
