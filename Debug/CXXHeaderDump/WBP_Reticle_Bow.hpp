#ifndef UE4SS_SDK_WBP_Reticle_Bow_HPP
#define UE4SS_SDK_WBP_Reticle_Bow_HPP

class UWBP_Reticle_Bow_C : public UPalUIAimReticleBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UWBP_Reticle_KeyGuide_C* WBP_Reticle_KeyGuide_Cancel;                       // 0x0488 (size: 0x8)

    void OnInitialized();
    void OnChangeState_Event(bool IsAim, bool IsShoot);
    void ExecuteUbergraph_WBP_Reticle_Bow(int32 EntryPoint);
}; // Size: 0x490

#endif
