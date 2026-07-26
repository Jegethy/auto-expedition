#ifndef UE4SS_SDK_BP_LevelGimmick_AreaBarrier_Volume_HPP
#define UE4SS_SDK_BP_LevelGimmick_AreaBarrier_Volume_HPP

class ABP_LevelGimmick_AreaBarrier_Volume_C : public APalLevelObjectActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02B8 (size: 0x8)

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_LevelGimmick_AreaBarrier_Volume(int32 EntryPoint);
}; // Size: 0x2C0

#endif
