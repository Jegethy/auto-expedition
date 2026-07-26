#ifndef UE4SS_SDK_WBP_EnemyQuestionMarkIcon_HPP
#define UE4SS_SDK_WBP_EnemyQuestionMarkIcon_HPP

class UWBP_EnemyQuestionMarkIcon_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0458 (size: 0x8)
    class UWBP_EnemyNotice_Q_C* WBP_EnemyNotice_Q;                                    // 0x0460 (size: 0x8)
    class APalCharacter* TargetCharacter;                                             // 0x0468 (size: 0x8)
    class UCurveVector* ScaleCurve;                                                   // 0x0470 (size: 0x8)
    double Timer;                                                                     // 0x0478 (size: 0x8)
    double PosX;                                                                      // 0x0480 (size: 0x8)
    double DisplayTime;                                                               // 0x0488 (size: 0x8)

    void CheckEnd(bool& IsEnd);
    void Setup(class APalCharacter* TargetPal);
    void Finished_AAA80C6F4C0998EEE3398EA3A4904D66();
    void Finished_65824A4344E87236A81F99B8C42BE19D();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void ExecuteUbergraph_WBP_EnemyQuestionMarkIcon(int32 EntryPoint);
}; // Size: 0x490

#endif
