#ifndef UE4SS_SDK_WBP_IngameSmesTop_HPP
#define UE4SS_SDK_WBP_IngameSmesTop_HPP

class UWBP_IngameSmesTop_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0658 (size: 0x8)
    class UWidgetAnimation* Anm_Close_Lower;                                          // 0x0660 (size: 0x8)
    class UWidgetAnimation* Anm_Open_Lower;                                           // 0x0668 (size: 0x8)
    class UWidgetAnimation* Anm_Close_Upper;                                          // 0x0670 (size: 0x8)
    class UWidgetAnimation* Anm_Open_Upper;                                           // 0x0678 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_Smes_01;                                 // 0x0680 (size: 0x8)
    class UCanvasPanel* Canvas_Lower;                                                 // 0x0688 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Upper;                                            // 0x0690 (size: 0x8)
    class UCanvasPanel* PlayerLVUP;                                                   // 0x0698 (size: 0x8)
    class UWBP_LvNum_C* WBP_LvNum;                                                    // 0x06A0 (size: 0x8)
    double levelUpDisplayTime;                                                        // 0x06A8 (size: 0x8)
    double openDelayTime;                                                             // 0x06B0 (size: 0x8)
    FDataTableRowHandle TechnologyTextHandle;                                         // 0x06B8 (size: 0x10)
    bool IsLevelUpAnimePlaying;                                                       // 0x06C8 (size: 0x1)
    bool IsOpened;                                                                    // 0x06C9 (size: 0x1)

    void On Player Level Up(int32 DisplayLevel);
    void OnUpdateTechnologyPoint(int32 TechnologyPoint);
    void Setup();
    void PlayUnlockedMap(FName RegionId);
    void Finished_A1B7BD03455E913C4335A7BF7BD61956();
    void Finished_5BC595C649AA650883AA559F46C6DEC4();
    void Finished_1CC36CF5434F95CC47067C9022BCAAAA();
    void Finished_619BCE1746569C3505CAB3B66FD0832F();
    void AnmEvent_Levelup();
    void AnmEvent_UpdateTechnologyPoint();
    void OnInitialized();
    void ExecuteUbergraph_WBP_IngameSmesTop(int32 EntryPoint);
}; // Size: 0x6CA

#endif
