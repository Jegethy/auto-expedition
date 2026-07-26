#ifndef UE4SS_SDK_WBP_InventoryEquipment_StatusPointButton_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_StatusPointButton_HPP

class UWBP_InventoryEquipment_StatusPointButton_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Anm_StatusUp;                                             // 0x0458 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_BonusPoint;                     // 0x0460 (size: 0x8)
    class UCanvasPanel* CanvasPanel_DecrementButton;                                  // 0x0468 (size: 0x8)
    class UCanvasPanel* CanvasPanel_IncrementButton;                                  // 0x0470 (size: 0x8)
    class UImage* Icon;                                                               // 0x0478 (size: 0x8)
    class UImage* Image_118;                                                          // 0x0480 (size: 0x8)
    class UImage* Image_Effect_Grd;                                                   // 0x0488 (size: 0x8)
    class UImage* Image_ParamArrow;                                                   // 0x0490 (size: 0x8)
    class USizeBox* SizeBox_Arrow;                                                    // 0x0498 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Main;                                              // 0x04A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Max;                                               // 0x04A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Param;                                             // 0x04B0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x04B8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Decrement;                // 0x04C0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Increment;                // 0x04C8 (size: 0x8)
    TMap<class FName, class FDataTableRowHandle> MagIDMap;                            // 0x04D0 (size: 0x50)
    TMap<class FName, class UTexture2D*> TextureMap;                                  // 0x0520 (size: 0x50)
    FName BindStatusPointName;                                                        // 0x0570 (size: 0x8)
    FWBP_InventoryEquipment_StatusPointButton_COnClickedIncrement OnClickedIncrement; // 0x0578 (size: 0x10)
    void OnClickedIncrement(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
    int32 CachedPoint;                                                                // 0x0588 (size: 0x4)
    int32 AdditionalPointForSimulate;                                                 // 0x058C (size: 0x4)
    FWBP_InventoryEquipment_StatusPointButton_COnClickedDecrement OnClickedDecrement; // 0x0590 (size: 0x10)
    void OnClickedDecrement(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
    FWBP_InventoryEquipment_StatusPointButton_COnHovered OnHovered;                   // 0x05A0 (size: 0x10)
    void OnHovered(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
    FWBP_InventoryEquipment_StatusPointButton_COnUnhovered OnUnhovered;               // 0x05B0 (size: 0x10)
    void OnUnhovered(class UWBP_InventoryEquipment_StatusPointButton_C* Button);

    void SetMaxDisplay(bool CanDisplay);
    void GetPlayerPassiveMaxHP(class APalPlayerCharacter* Player, int32& PassiveHP);
    void CanEnhanceStat(bool& bCanEnhance);
    void UpdateStatusBuffState();
    void Get Base Parameter(bool ShowBaseValue, double& Parameter);
    void ResetSimulate();
    void AddSimulatePoint(int32 SimulatePoint);
    void GetBonusRate(int32 Point, double& Bonus);
    void UpdateDecrementButtonDetail();
    void Set Enable Simulate Button(bool IsEnable, bool IsEditable);
    void Update Binded Status Detail(bool ShowBaseValue);
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_InventoryEquipment_StatusPointButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_InventoryEquipment_StatusPointButton_WBP_PalInvisibleButton_Decrement_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_InventoryEquipment_StatusPointButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_InventoryEquipment_StatusPointButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void AnmEvent_StatusUp();
    void ExecuteUbergraph_WBP_InventoryEquipment_StatusPointButton(int32 EntryPoint);
    void OnUnhovered__DelegateSignature(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
    void OnHovered__DelegateSignature(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
    void OnClickedDecrement__DelegateSignature(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
    void OnClickedIncrement__DelegateSignature(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
}; // Size: 0x5C0

#endif
