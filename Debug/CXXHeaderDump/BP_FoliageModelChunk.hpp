#ifndef UE4SS_SDK_BP_FoliageModelChunk_HPP
#define UE4SS_SDK_BP_FoliageModelChunk_HPP

class ABP_FoliageModelChunk_C : public APalFoliageModelChunk
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0438 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0440 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0448 (size: 0x8)

    void OnReceivedChunkGridSize(const int32 NewChunkGridSize);
    void ExecuteUbergraph_BP_FoliageModelChunk(int32 EntryPoint);
}; // Size: 0x450

#endif
