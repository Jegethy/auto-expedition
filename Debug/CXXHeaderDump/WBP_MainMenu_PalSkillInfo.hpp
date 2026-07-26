#ifndef UE4SS_SDK_WBP_MainMenu_PalSkillInfo_HPP
#define UE4SS_SDK_WBP_MainMenu_PalSkillInfo_HPP

class UWBP_MainMenu_PalSkillInfo_C : public UUserWidget
{
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_Info;                           // 0x0278 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_SubInfo;                        // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Name;                                   // 0x0288 (size: 0x8)
    class UCanvasPanel* CanvasPanel_KeyGuide_ChangeWaza;                              // 0x0290 (size: 0x8)
    class UCanvasPanel* CanvasPanel_KeyGuide_RemoveWaza;                              // 0x0298 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Status;                                       // 0x02A0 (size: 0x8)
    class UImage* Image_Icon_CT;                                                      // 0x02A8 (size: 0x8)
    class UImage* Line;                                                               // 0x02B0 (size: 0x8)
    class UCanvasPanel* SkillInfo;                                                    // 0x02B8 (size: 0x8)
    class UCanvasPanel* SkillInfo_Add_1;                                              // 0x02C0 (size: 0x8)
    class UCanvasPanel* SkillInfo_Add_2;                                              // 0x02C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_CTNum;                                             // 0x02D0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_CTNum_1;                                           // 0x02D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_CTNum_2;                                           // 0x02E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PunishedLevel_Af;                                  // 0x02E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PunishedLevel_Pre;                                 // 0x02F0 (size: 0x8)
    class UBP_PalTextBlock_C* TextPowerNum;                                           // 0x02F8 (size: 0x8)
    class UBP_PalTextBlock_C* TextPowerNum_1;                                         // 0x0300 (size: 0x8)
    class UBP_PalTextBlock_C* TextPowerNum_2;                                         // 0x0308 (size: 0x8)
    class UWBP_MainMenu_Pal_StatusElement_C* WBP_MainMenu_Pal_StatusElement;          // 0x0310 (size: 0x8)
    FDataTableRowHandle PartnerSkillEffectMsgID;                                      // 0x0318 (size: 0x10)
    FDataTableRowHandle PassiveSkillEffectMsgID;                                      // 0x0328 (size: 0x10)
    FDataTableRowHandle PassiveSkillToPlayerEffectMsgID;                              // 0x0338 (size: 0x10)
    FDataTableRowHandle FoodEffectMsgID;                                              // 0x0348 (size: 0x10)
    FDataTableRowHandle HungerEffectMsgID;                                            // 0x0358 (size: 0x10)
    FDataTableRowHandle EquipEffectMsgID;                                             // 0x0368 (size: 0x10)
    FDataTableRowHandle EquipPassiveSkillEffectMsgID;                                 // 0x0378 (size: 0x10)
    FDataTableRowHandle WeaponEffectMsgID;                                            // 0x0388 (size: 0x10)
    FDataTableRowHandle FriendshipEffectMsgID;                                        // 0x0398 (size: 0x10)
    FDataTableRowHandle SoulEffectMsgID;                                              // 0x03A8 (size: 0x10)
    FDataTableRowHandle LabResearchEffectMsgID;                                       // 0x03B8 (size: 0x10)
    FDataTableRowHandle BaseCampEffectMsgID;                                          // 0x03C8 (size: 0x10)
    FDataTableRowHandle AwakeningEffectMsgID;                                         // 0x03D8 (size: 0x10)

    void MakeAwakeningEffectText(TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> DisplayParameterType, class UPalIndividualCharacterParameter* IndividualParameter, FText& Text);
    void MakeSoulEffectText(TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> DisplayParameterType, class UPalIndividualCharacterParameter* IndividualParameter, FText& Text);
    void MakeBaseCampEffectText(TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> DisplayParameterType, class UPalIndividualCharacterParameter* IndividualParameter, FText& Text);
    void MakeLabResearchEffectText(TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> DisplayParameterType, class UPalIndividualCharacterParameter* IndividualParameter, FText& Text);
    void MakeSickEffectText(TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> DisplayParameterType, class UPalIndividualCharacterParameter* IndividualParameter, FText& Text);
    void MakeHungerEffectText(TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> DisplayParameterType, class UPalIndividualCharacterParameter* IndividualParameter, FText& Text);
    void MakeFoodEffectText(TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> DisplayParameterType, class UPalIndividualCharacterParameter* IndividualParameter, FText& Text);
    void MakePassiveSkillEffectText(TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> DisplayParameterType, class UPalIndividualCharacterParameter* IndividualParameter, bool bIsPlayer, FText& Text);
    void MakePartnerSkillEffectText(TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> DisplayParameterType, class UPalIndividualCharacterParameter* IndividualParameter, FText& Text);
    void DisplayCommonInfo(FText Title, FText Info, FText SubInfo);
    void GetPlayerPassiveMaxHP(class APalPlayerCharacter* Player, int32& PassiveHP);
    void DisplayStatusInfo(FText Title, FText Desc, class UPalIndividualCharacterParameter* individualParam, TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> StatusType, bool IsPlayer);
    void MakeFriendshipRateText(TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> DisplayParameterType, class UPalIndividualCharacterParameter* IndividualParameter, FText& Text);
    void Make Weapon Effect Text(TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> DisplayParameterType, class UPalIndividualCharacterParameter* IndividualParameter, FText& OutText);
    void MakePlayerEquipPassiveEffectText(class UPalIndividualCharacterParameter* individualParam, TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> DisplayParameterType, bool IsPlayer, FText& Text);
    void FormatAndCalcuratePlayerEquipmentEffect(TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> Status, bool IsPlayer, FText& FormatText, int32& EquipmentEffectValue);
    void ConvertUIDisplayParameterToPassiveEffectType(TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> DisplayParameter, EPalPassiveSkillEffectType& EffectType);
    void FormatItemWeightText(FText Name, double PassiveBuffed, FText& FormatText);
    void ConvertUIDisplayParameterToFoodEffectType(TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> DisplayParameter, EPalFoodStatusEffectType& FoodEffect);
    void ChooseBuffedParameterValue(TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> DisplayParameter, class UPalIndividualCharacterParameter* IndividualParameter, int32& StatusValue);
    void ChooseAwakeningEffectValue(TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> DisplayParameter, class UPalIndividualCharacterParameter* IndividualParameter, int32& FriendshipValue);
    void ChooseFriendShipEffectValue(TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> DisplayParameter, class UPalIndividualCharacterParameter* IndividualParameter, int32& FriendshipValue);
    void ChooseBaseParameterValue(TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> DisplayParameter, class UPalIndividualCharacterParameter* IndividualParameter, int32& StatusValue);
    void DisplaySkillInfo(bool ShowChangeWazaKeyGuide, bool ShowRemoveWazaKeyGuide, EPalWazaID WazaID);
    void FormatParameterAddiveEffectText(FText Name, double Value, FText& FormatText);
    void FormatParameterEffectRateText(FText Name, double EffectRate, FText& FormatText);
}; // Size: 0x3E8

#endif
