#ifndef UE4SS_SDK_BP_AIActionPairCall_FeedItem_HPP
#define UE4SS_SDK_BP_AIActionPairCall_FeedItem_HPP

class UBP_AIActionPairCall_FeedItem_C : public UBP_AIActionPairCallBase_C
{
    FPalItemSlotId FeedItemSlotId;                                                    // 0x0158 (size: 0x14)
    int32 FeedItemNum;                                                                // 0x016C (size: 0x4)

    void CreatePairBehaviorActionDynamicParameter(FActionDynamicParameter& DynamicParameter);
}; // Size: 0x170

#endif
