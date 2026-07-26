#ifndef UE4SS_SDK_BP_StageAreaVolume_HPP
#define UE4SS_SDK_BP_StageAreaVolume_HPP

class ABP_StageAreaVolume_C : public APalStageAreaVolume
{
    class UBoxComponent* Box;                                                         // 0x0298 (size: 0x8)

    FBox GetBoundingBox();
}; // Size: 0x2A0

#endif
