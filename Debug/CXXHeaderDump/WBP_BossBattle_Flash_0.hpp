#ifndef UE4SS_SDK_WBP_BossBattle_Flash_0_HPP
#define UE4SS_SDK_WBP_BossBattle_Flash_0_HPP

class UWBP_BossBattle_Flash_0_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_LegendDeer_White_Out;                                 // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_LegendDeer_White_In;                                  // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_LegendDeer_Fade;                                      // 0x0290 (size: 0x8)
    class UImage* Image_Fade_White;                                                   // 0x0298 (size: 0x8)
    double FadeAlpha;                                                                 // 0x02A0 (size: 0x8)

    void CalcFadeRateDistance(FVector Location, double InnerRadius, double OuterRadius);
    void Finished_85CA7E2946074D2AB5E573B6051DBF83();
    void Finished_81E389744CB8252BB577D59A99C9048D();
    void Finished_0E4975C0478B7BF0E32155A3E9A0DE06();
    void Finished_6E47B0CA4DB824F699D9818C1037BA96();
    void Finished_C9D33BF74BEA4C1A898935A115334ECA();
    void Finished_5B5515CA4317CC5A0C7CD7A3AC353EAB();
    void Finished_944529284BA8AD24535D46931B4DCF13();
    void LegendDeer_DeathFlash(class UWBP_BossBattle_BattleInfo_C* Widget);
    void LegendDeer_RadiantPurge(FVector TargetLocation);
    void LegendDeer_RadiantPurge_Otomo(FVector TargetLocation);
    void ExecuteUbergraph_WBP_BossBattle_Flash_0(int32 EntryPoint);
}; // Size: 0x2A8

#endif
