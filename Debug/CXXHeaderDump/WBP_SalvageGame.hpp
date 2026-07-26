#ifndef UE4SS_SDK_WBP_SalvageGame_HPP
#define UE4SS_SDK_WBP_SalvageGame_HPP

class UWBP_SalvageGame_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UImage* Image_216;                                                          // 0x0480 (size: 0x8)
    class UWBP_Fishing_SalvageGame_C* WBP_Fishing_SalvageGame;                        // 0x0488 (size: 0x8)
    double NeedleRotateAngularSpeed;                                                  // 0x0490 (size: 0x8)
    double NeedleAngle;                                                               // 0x0498 (size: 0x8)
    bool bStoppedNeedle;                                                              // 0x04A0 (size: 0x1)
    FFloatInterval SuccessAngleRange;                                                 // 0x04A4 (size: 0x8)
    bool bFinishedGame;                                                               // 0x04AC (size: 0x1)

    void RequestFinishSalvageGame();
    void OnActionInteract();
    void ProceedNeedle(double DeltaTime);
    void UpdateRouletteNeedle(double Angle);
    void SetupRouletteSetting(double SuccessStartAngle, double SuccessEndAngle);
    void SetupUI();
    void GetUIModel(class UPalUIMapObjectTreasureBoxSalvageGameModel*& Model);
    void OnSetup();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PlayResultAnimation(bool bSuccess);
    void OnClose();
    void ExecuteUbergraph_WBP_SalvageGame(int32 EntryPoint);
}; // Size: 0x4AD

#endif
