#ifndef UE4SS_SDK_WBP_DirectAttackOrderCanvas_HPP
#define UE4SS_SDK_WBP_DirectAttackOrderCanvas_HPP

class UWBP_DirectAttackOrderCanvas_C : public UPalUserWidget
{
    class UCanvasPanel* CanvasPanel_26;                                               // 0x0450 (size: 0x8)
    class UWBP_PalTarget_C* CurrentTargetWidget;                                      // 0x0458 (size: 0x8)

    void PlayTargetSound();
    void OnMissingTarget();
    void OnChangedDirectOrderTarget(class APalCharacter* Target);
    void Setup();
}; // Size: 0x460

#endif
