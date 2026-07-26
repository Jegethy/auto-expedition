#ifndef UE4SS_SDK_WBP_PalStorageMenu_ForSkinChanger_HPP
#define UE4SS_SDK_WBP_PalStorageMenu_ForSkinChanger_HPP

class UWBP_PalStorageMenu_ForSkinChanger_C : public UWBP_PalStorageMenu_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0548 (size: 0x8)
    FWBP_PalStorageMenu_ForSkinChanger_COnClickedAnySlot OnClickedAnySlot;            // 0x0550 (size: 0x10)
    void OnClickedAnySlot(class UPalIndividualCharacterSlot* Slot);
    FName TargetCharacterID;                                                          // 0x0560 (size: 0x8)
    FWBP_PalStorageMenu_ForSkinChanger_COnClickedCloseButton OnClickedCloseButton;    // 0x0568 (size: 0x10)
    void OnClickedCloseButton();
    bool bRemoveSkinMode;                                                             // 0x0578 (size: 0x1)

    void OnCampSlotEmpty(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void Register Pal Operate Input();
    void OnClickedCloseButtonInternal();
    void SetupByParameter(class UPalHUDDispatchParameter_PalBox* Parameter);
    void OnBoxSlotCreated(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void Is Skin Applied(class UPalIndividualCharacterSlot* Slot, bool& bSkinApplied);
    void To Remove Skin Mode();
    void Update Button Enable();
    void IsMatchCharacterID(class UPalIndividualCharacterSlot* Slot, bool& bIsMatch);
    void Set Target Character ID(FName CharacterID);
    void SelectSlot(class UPalIndividualCharacterSlot* Slot, EPalItemSlotPressType PressType);
    void Construct();
    void OnSetup();
    void ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger(int32 EntryPoint);
    void OnClickedCloseButton__DelegateSignature();
    void OnClickedAnySlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
}; // Size: 0x579

#endif
