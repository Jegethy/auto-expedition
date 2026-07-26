#ifndef UE4SS_SDK_BP_PalStaticMeshImposterChunk_HPP
#define UE4SS_SDK_BP_PalStaticMeshImposterChunk_HPP

class ABP_PalStaticMeshImposterChunk_C : public APalStaticMeshImposterChunk
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)

    void Dev_SetChunkVisible(const bool bVisible);
    void OnSetChunkGridSize(const int32 NewChunkGridSize);
    void ExecuteUbergraph_BP_PalStaticMeshImposterChunk(int32 EntryPoint);
}; // Size: 0x2B8

#endif
