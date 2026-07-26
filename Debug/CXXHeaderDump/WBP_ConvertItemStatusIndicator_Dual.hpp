#ifndef UE4SS_SDK_WBP_ConvertItemStatusIndicator_Dual_HPP
#define UE4SS_SDK_WBP_ConvertItemStatusIndicator_Dual_HPP

class UWBP_ConvertItemStatusIndicator_Dual_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWBP_PalWorkProduct_Dual_C* WBP_PalWorkProduct_Dual;                        // 0x0458 (size: 0x8)
    bool isDisplayedDetail;                                                           // 0x0460 (size: 0x1)
    bool isValidRecipe;                                                               // 0x0461 (size: 0x1)
    double displayDetailRange;                                                        // 0x0468 (size: 0x8)
    FTimerHandle LocationCheckTimerHandle;                                            // 0x0470 (size: 0x8)
    bool IsFirstSetup;                                                                // 0x0478 (size: 0x1)
    class UPalMapObjectConvertItemModel* Model;                                       // 0x0480 (size: 0x8)

    void OnUpdatedWorkerPal(class UPalWorkBase* Work);
    void CloseDetail();
    void DisplayDetail();
    void OnReflectWorkProgress(class UPalWorkProgress* WorkProgress);
    void OnUpdateProductSlot(class UPalItemSlot* Slot);
    void UpdateProductNum(class UPalMapObjectConvertItemModel* Model);
    void OnUpdateRecipe(class UPalMapObjectConvertItemModel* Model);
    void Initialize();
    void OnSetup();
    void Construct();
    void CheckLocationEvent();
    void Destruct();
    void ExecuteUbergraph_WBP_ConvertItemStatusIndicator_Dual(int32 EntryPoint);
}; // Size: 0x488

#endif
