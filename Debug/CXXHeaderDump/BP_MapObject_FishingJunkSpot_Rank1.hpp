#ifndef UE4SS_SDK_BP_MapObject_FishingJunkSpot_Rank1_HPP
#define UE4SS_SDK_BP_MapObject_FishingJunkSpot_Rank1_HPP

class ABP_MapObject_FishingJunkSpot_Rank1_C : public ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStaticMeshComponent* LocationBenchmark1;                                   // 0x0340 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MapObject_FishingJunkSpot_Rank1(int32 EntryPoint);
}; // Size: 0x348

#endif
