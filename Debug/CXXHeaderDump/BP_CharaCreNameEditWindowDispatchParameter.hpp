#ifndef UE4SS_SDK_BP_CharaCreNameEditWindowDispatchParameter_HPP
#define UE4SS_SDK_BP_CharaCreNameEditWindowDispatchParameter_HPP

class UBP_CharaCreNameEditWindowDispatchParameter_C : public UPalHUDDispatchParameterBase
{
    FText InName;                                                                     // 0x0038 (size: 0x18)
    FText outName;                                                                    // 0x0050 (size: 0x18)
    bool ForPlayer;                                                                   // 0x0068 (size: 0x1)
    FName OverrideTitleId;                                                            // 0x006C (size: 0x8)

}; // Size: 0x74

#endif
