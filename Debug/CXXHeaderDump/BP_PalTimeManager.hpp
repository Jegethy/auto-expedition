#ifndef UE4SS_SDK_BP_PalTimeManager_HPP
#define UE4SS_SDK_BP_PalTimeManager_HPP

class UBP_PalTimeManager_C : public UPalTimeManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0168 (size: 0x8)
    double NPCSetTime;                                                                // 0x0170 (size: 0x8)
    class UCurveFloat* Env_GrassEmiCurve;                                             // 0x0178 (size: 0x8)
    class UCurveFloat* EmissiveCurve;                                                 // 0x0180 (size: 0x8)
    class UMaterialParameterCollection* MPC_PlayerInteraction;                        // 0x0188 (size: 0x8)
    class UCurveFloat* Env_GrassEmiCurve_Inverse;                                     // 0x0190 (size: 0x8)

    void BP_ApplyEmissiveTimeParameters(float NewEmissiveTime);
    void Tick_BP(float DeltaTime);
    void ExecuteUbergraph_BP_PalTimeManager(int32 EntryPoint);
}; // Size: 0x198

#endif
