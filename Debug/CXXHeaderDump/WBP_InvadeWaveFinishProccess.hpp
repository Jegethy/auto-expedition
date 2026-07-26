#ifndef UE4SS_SDK_WBP_InvadeWaveFinishProccess_HPP
#define UE4SS_SDK_WBP_InvadeWaveFinishProccess_HPP

class UWBP_InvadeWaveFinishProccess_C : public UPalUserWidget
{
    class UWBP_WarningEvent_WaveClear_C* WBP_WarningEvent_WaveClear;                  // 0x0450 (size: 0x8)
    class UWBP_WarningEvent_WaveFinish_C* WBP_WarningEvent_WaveFinish;                // 0x0458 (size: 0x8)

    void PlayAllWaveSuccess();
    void PlayWaveFailed();
    void PlayWaveEndSequence(int32 EndWaveCount, int32 MaxWaveCount);
}; // Size: 0x460

#endif
