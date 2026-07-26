#ifndef UE4SS_SDK_WBP_WarningEvent_WaveFinish_HPP
#define UE4SS_SDK_WBP_WarningEvent_WaveFinish_HPP

class UWBP_WarningEvent_WaveFinish_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Out;                                                  // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Failed_In;                                            // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Complete_In;                                          // 0x0290 (size: 0x8)
    class UImage* Image;                                                              // 0x0298 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02A0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_4;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_5;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_6;                                                            // 0x02C8 (size: 0x8)
    class UImage* Image_263;                                                          // 0x02D0 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x02D8 (size: 0x8)
    class UImage* Image_Base_1;                                                       // 0x02E0 (size: 0x8)
    class UImage* Image_Base_Flash;                                                   // 0x02E8 (size: 0x8)
    class UImage* Image_Base_Flash_1;                                                 // 0x02F0 (size: 0x8)
    class UImage* Image_Base_Tri;                                                     // 0x02F8 (size: 0x8)
    class UImage* Image_Base_Tri_1;                                                   // 0x0300 (size: 0x8)
    class UImage* Image_BaseDeco_B;                                                   // 0x0308 (size: 0x8)
    class UImage* Image_BaseDeco_B_1;                                                 // 0x0310 (size: 0x8)
    class UImage* Image_BaseDeco_T;                                                   // 0x0318 (size: 0x8)
    class UImage* Image_BaseDeco_T_1;                                                 // 0x0320 (size: 0x8)
    class UImage* Image_BaseFrame;                                                    // 0x0328 (size: 0x8)
    class UImage* Image_BaseFrame_1;                                                  // 0x0330 (size: 0x8)
    class UImage* Image_BaseFrame_2;                                                  // 0x0338 (size: 0x8)
    class UImage* Image_BaseFrame_3;                                                  // 0x0340 (size: 0x8)
    class UImage* Image_BaseFrame_B;                                                  // 0x0348 (size: 0x8)
    class UImage* Image_BaseFrame_B_1;                                                // 0x0350 (size: 0x8)
    class UImage* Image_BaseFrame_T;                                                  // 0x0358 (size: 0x8)
    class UImage* Image_BaseFrame_T_1;                                                // 0x0360 (size: 0x8)
    class UImage* Image_BG_Bloom;                                                     // 0x0368 (size: 0x8)
    class UImage* Image_BG_Bloom_1;                                                   // 0x0370 (size: 0x8)
    class UImage* Image_BG_Shadow;                                                    // 0x0378 (size: 0x8)
    class UImage* Image_BG_Shadow_1;                                                  // 0x0380 (size: 0x8)
    class UImage* Image_BG_Tri;                                                       // 0x0388 (size: 0x8)
    class UImage* Image_BG_Tri_1;                                                     // 0x0390 (size: 0x8)
    class UImage* Image_Bloom;                                                        // 0x0398 (size: 0x8)
    class UImage* Image_Bloom_1;                                                      // 0x03A0 (size: 0x8)
    class UImage* Image_Complete_Ring;                                                // 0x03A8 (size: 0x8)
    class UImage* Image_Complete_Ring_1;                                              // 0x03B0 (size: 0x8)
    class UImage* Image_Complete_Ring_2;                                              // 0x03B8 (size: 0x8)
    class UImage* Image_Complete_Ring_3;                                              // 0x03C0 (size: 0x8)
    class UImage* Image_Dark;                                                         // 0x03C8 (size: 0x8)

    void SequenceEvent__ENTRYPOINTWBP_WarningEvent_WaveFinish_0();
    void SequenceEvent__ENTRYPOINTWBP_WarningEvent_WaveFinish();
    void PlayFailedSequence();
    void PlaySuccessSequence();
    void Clear();
    void Failure();
    void AnmEvent_Success();
    void AnmEvent_Failed();
    void AnmEvent_Out();
    void ExecuteUbergraph_WBP_WarningEvent_WaveFinish(int32 EntryPoint);
}; // Size: 0x3D0

#endif
