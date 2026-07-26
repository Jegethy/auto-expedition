#ifndef UE4SS_SDK_WBP_QuestTrackingIconCanvas_HPP
#define UE4SS_SDK_WBP_QuestTrackingIconCanvas_HPP

class UWBP_QuestTrackingIconCanvas_C : public UPalUserWidget
{
    class UCanvasPanel* CanvasPanel_27;                                               // 0x0450 (size: 0x8)
    TMap<class FGuid, class UWBP_PalQuestTrackingIcon_C*> IconMap;                    // 0x0458 (size: 0x50)

    void OnRemoveLocation(const FGuid& LocationId, class UPalLocationBase* Location);
    void OnAddLocation(const FGuid& LocationId, class UPalLocationBase* Location);
    void Setup();
}; // Size: 0x4A8

#endif
