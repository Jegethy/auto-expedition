#ifndef UE4SS_SDK_WBP_AutoSave_HPP
#define UE4SS_SDK_WBP_AutoSave_HPP

class UWBP_AutoSave_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Failed_Out;                                           // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Failed_In;                                            // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Saving;                                               // 0x0290 (size: 0x8)
    class UCanvasPanel* Canvas_AutoSave;                                              // 0x0298 (size: 0x8)
    class UCanvasPanel* Canvas_SaveFailed;                                            // 0x02A0 (size: 0x8)
    class UImage* Image_FailedBase;                                                   // 0x02A8 (size: 0x8)
    class UImage* Image_FailedBase_1;                                                 // 0x02B0 (size: 0x8)
    class UImage* Image_FailedIcon;                                                   // 0x02B8 (size: 0x8)
    class UImage* Image_Flash;                                                        // 0x02C0 (size: 0x8)
    class UImage* Image_IconBase;                                                     // 0x02C8 (size: 0x8)
    class UImage* Image_IconPart_0;                                                   // 0x02D0 (size: 0x8)
    class UImage* Image_IconPart_1;                                                   // 0x02D8 (size: 0x8)
    class UImage* Image_IconPart_2;                                                   // 0x02E0 (size: 0x8)
    class UImage* Image_IconPart_3;                                                   // 0x02E8 (size: 0x8)
    class UImage* Image_IconPart_4;                                                   // 0x02F0 (size: 0x8)
    class UImage* Image_IconPart_5;                                                   // 0x02F8 (size: 0x8)
    bool IsForceDisplayngTime;                                                        // 0x0300 (size: 0x1)
    FTimerHandle ForceDisplayTimerHandle;                                             // 0x0308 (size: 0x8)
    TMap<class FName, class bool> SavingFlagMap;                                      // 0x0310 (size: 0x50)
    FName WorldSavingKey;                                                             // 0x0360 (size: 0x8)
    FName LocalSavingKey;                                                             // 0x0368 (size: 0x8)
    double ForceDisplayTime;                                                          // 0x0370 (size: 0x8)
    FTimerHandle WaitFailedSaveDisplayTimer;                                          // 0x0378 (size: 0x8)
    double FailedSaveNoticeDIsplayTime;                                               // 0x0380 (size: 0x8)

    void HideFailedSaveNotice();
    void DisplayFailedSaveNotice();
    void OnEndedForceDisplayingTime();
    void IsAllSaveCompleted(bool& bCompleted);
    void EndSave(FName SavingKey);
    void StartSaving(FName SavingKey);
    void Display();
    void Hide();
    void AnmEvent_Loop();
    void AnmEvent_Stop();
    void Destruct();
    void Construct();
    void OnStartWorldSaving();
    void OnStartLocalSaving();
    void OnEndedWorldSave(bool IsSuccess);
    void OnEndedLocalSave(bool IsSuccess);
    void ExecuteUbergraph_WBP_AutoSave(int32 EntryPoint);
}; // Size: 0x388

#endif
