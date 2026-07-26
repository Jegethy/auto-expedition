#ifndef UE4SS_SDK_WBP_EnemyMark_HPP
#define UE4SS_SDK_WBP_EnemyMark_HPP

class UWBP_EnemyMark_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0458 (size: 0x8)
    class UCanvasPanel* CanvasPanel_85;                                               // 0x0460 (size: 0x8)
    TArray<TSoftObjectPtr<UWBP_EnemyQuestionMarkIcon_C>> QuMarkList;                  // 0x0468 (size: 0x10)

    void Construct();
    void カスタムイベント_0(class APalCharacter* TargetCharacter);
    void カスタムイベント_1(class APalCharacter* TargetCharacter);
    void ExecuteUbergraph_WBP_EnemyMark(int32 EntryPoint);
}; // Size: 0x478

#endif
